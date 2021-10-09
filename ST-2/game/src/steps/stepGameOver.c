/**
 * ゲーム オーバー ステップ
 * @author Snail Barbarian Macho (NWK)
 */

#include "../system/sys.h"
#include "../system/sound.h"
#include "../system/print.h"
#include "../system/obj.h"
#include "../game/score.h"
#include "../game/stage.h"
#include "stepLogo.h"
#include "stepGameOver.h"

// ---------------------------------------------------------------- 初期化
void stepGameOverInit()
{
    scoreReflectHiScore();
    stepGameOverInitWithoutReflectHiScore();
}
void stepGameOverInitWithoutReflectHiScore() // 強制ゲームオーバー時は, ハイスコアへの反映は無し
{
#if DEBUG
    static const u8 stepStr[] = {CHAR_O, CHAR_V, CHAR_E, CHAR_R, 0};
    scoreSetStepString(stepStr);
#endif
    sysSetGameMode(false);
    objInit();
    sysSetStepCounter(20);
    sdSetBgmSequencer(nullptr, nullptr);
}

// ---------------------------------------------------------------- メイン
void stepGameOverMain(u16 stepCounter)
{
    // -------- ゲームオーバー ジングル
    if (stepCounter == 18) {
#define L  8
#include "../../music/ronin.h"
        sd3Play(mml0_0, mml1_0, mml2_0, true);
        sdSetEnabled(false);// 余計な音は全て停止
    } else if (stepCounter == 0)  {
        scoreResetLevel();
        sysSetStep(stepLogoInit, stepLogoMain);
    }
}