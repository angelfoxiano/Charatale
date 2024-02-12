package;

import openfl.Assets;
import flixel.util.FlxSave;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxState;

class MainMenuState extends FlxState 
{
    var logo:FlxSprite;

    var newGame:FlxText;
    var continueOp:FlxText;
    var optionsOp:FlxText;
    var trophies:FlxText;

    var dustChara:FlxSprite;

    var soul:FlxSprite;

    var selected:Int = 0;
    var canSelect:Bool = true;

	var timer:FlxTimer = new FlxTimer();

    var save:FlxSave;

    override function create() {
		var secret:Bool = false;
		var randomNumber:Int = Std.random(2000) + 1;

		if (randomNumber == 1509)
		{
			secret = true;
		}

        save = new FlxSave();
		save.bind("charatale");

        if (save.data.lang == null) {
            save.data.lang = 'en';
            save.flush();
        }

        save.data.lang = 'en';

        logo = new FlxSprite(-70,10).loadGraphic(Paths.image('logo'));
        logo.scale.x = 0.75;
		logo.scale.y = 0.75;
        add(logo);

		newGame = new FlxText(30, 110, 460, Assets.getText(Paths.lang(save.data.lang, "newgame")));
		newGame.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(newGame);

		continueOp = new FlxText(30, 110 + 85, 380, Assets.getText(Paths.lang(save.data.lang, "continue")));
		continueOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(continueOp);

		optionsOp = new FlxText(30, 110 + 85 * 2, 325, Assets.getText(Paths.lang(save.data.lang, "options")));
		optionsOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(optionsOp);

		trophies = new FlxText(30, 110 + 85 * 3, 325, Assets.getText(Paths.lang(save.data.lang, "trophies")));
		trophies.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(trophies);

        dustChara = new FlxSprite(465,260).loadGraphic(Paths.image("DustChara"));
        dustChara.scale.x = 5.5;
        dustChara.scale.y = 5.5;
        add(dustChara);

        soul = new FlxSprite(480,280).loadGraphic(Paths.image("Soul"));
        soul.scale.x = 8;
        soul.scale.y = 8;
        add(soul);

        if (secret == false) {
            dustChara.visible = false;
			timer.start(1, onTimerComplete);
        }else{
            soul.visible = false;
        }

        trace(randomNumber);
    }

    override function update(elapsed:Float) {
        newGame.setFormat(Paths.font('determination'), 80, (selected == 0 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(newGame, { x: (selected == 0 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        continueOp.setFormat(Paths.font('determination'), 80, (selected == 1 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(continueOp, { x: (selected == 1 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        optionsOp.setFormat(Paths.font('determination'), 80, (selected == 2 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(optionsOp, { x: (selected == 2 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        trophies.setFormat(Paths.font('determination'), 80, (selected == 3 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(trophies, { x: (selected == 3 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        if (canSelect) {
            if (CoolUtils.overlapText(newGame)) {
                selected = 0;
		    }
		    else if (CoolUtils.overlapText(continueOp)) {
			    selected = 1;
            }
		    else if (CoolUtils.overlapText(optionsOp))
		    {
		    	selected = 2;
		    }
		    else if (CoolUtils.overlapText(trophies))
		    {
	    		selected = 3;
	    	}
        }

        if (selected == 0 && FlxG.mouse.justPressed) {}
		else if (selected == 1 && FlxG.mouse.justPressed) {}
		else if (selected == 2 && FlxG.mouse.justPressed) {
            goTo('options');
        }
		else if (selected == 3 && FlxG.mouse.justPressed) {}

        super.update(elapsed);
    }

    function onTimerComplete(timer:FlxTimer) {
        FlxTween.tween(soul.scale, { x: 9.5 }, 0.05, { ease: FlxEase.linear });
	    FlxTween.tween(soul.scale, {y: 9.5}, 0.05, {ease: FlxEase.linear});
		timer.start(0.1, onTimerComplete2);
    }

    function onTimerComplete2(timer:FlxTimer) {
		FlxTween.tween(soul.scale, {x: 8}, 0.1, {ease: FlxEase.linear});
		FlxTween.tween(soul.scale, {y: 8}, 0.1, {ease: FlxEase.linear});
		timer.start(1, onTimerComplete);
    }

    function goTo(state:String) {
		var tim:FlxTimer = new FlxTimer();
		canSelect = false;
		FlxTween.tween(newGame, {alpha: 0}, 0.5, {ease: FlxEase.cubeIn});
		FlxTween.tween(continueOp, {alpha: 0}, 0.8, {ease: FlxEase.cubeIn});
		FlxTween.tween(optionsOp, {alpha: 0}, 1.1, {ease: FlxEase.cubeIn});
		FlxTween.tween(trophies, {alpha: 0}, 1.4, {ease: FlxEase.cubeIn});
		FlxTween.tween(logo, {y: -200}, 1, {ease: FlxEase.cubeIn});
		FlxTween.tween(soul, {x: 800}, 1.2, {ease: FlxEase.cubeIn});
		FlxTween.tween(dustChara, {x: 800}, 1.2, {ease: FlxEase.cubeIn});
        if (state == 'options') {
            tim.start(1.5, switchO);
        }
    }

	function switchO(tim:FlxTimer) {
        FlxG.switchState(new OptionsState());
    }
}