/**
 * 敵オブジェクト
 * @author Snail Barbarian Macho (NWK)
 */

#ifndef OBJ_ENEMY_H_INCLUDED
#define OBJ_ENEMY_H_INCLUDED

#include "../../../../src-common/common.h"
#include "../system/obj.h"

// ---------------------------------------------------------------- 初期化
void objEnemyInit3_1(Obj* const pObj, Obj* const pParent);
void objEnemyInit3_2(Obj* const pObj, Obj* const pParent);
void objEnemyInit3_3(Obj* const pObj, Obj* const pParent);
void objEnemyInit3_4(Obj* const pObj, Obj* const pParent);
void objEnemyInit3_5(Obj* const pObj, Obj* const pParent);
void objEnemyInit3_6(Obj* const pObj, Obj* const pParent);
void objEnemyInit4_1(Obj* const pObj, Obj* const pParent);
void objEnemyInit4_2(Obj* const pObj, Obj* const pParent);
void objEnemyInit4_3(Obj* const pObj, Obj* const pParent);
void objEnemyInit5_1(Obj* const pObj, Obj* const pParent);
void objEnemyInit5_2(Obj* const pObj, Obj* const pParent);
void objEnemyInit5_3(Obj* const pObj, Obj* const pParent);
void objEnemyInit8_1(Obj* const pObj, Obj* const pParent);
void objEnemyInit8_2(Obj* const pObj, Obj* const pParent);
void objEnemyInit8_3(Obj* const pObj, Obj* const pParent);

// ---------------------------------------------------------------- メイン
bool objEnemyMain3_1(Obj* const pObj);
bool objEnemyMainDemo3_1(Obj* const pObj); // Instruction 用
#define objEnemyMain3_2 objEnemyMain3_1
bool objEnemyMain3_3(Obj* const pObj);
#define objEnemyMain3_4 objEnemyMain3_3
bool objEnemyMain3_5(Obj* const pObj);
bool objEnemyMain3_6(Obj* const pObj);
bool objEnemyMain4_1(Obj* const pObj);
bool objEnemyMain4_2(Obj* const pObj);
#define objEnemyMain4_2 objEnemyMain4_1
bool objEnemyMain4_3(Obj* const pObj);
bool objEnemyMain5_1(Obj* const pObj);
bool objEnemyMain5_2(Obj* const pObj);
#define objEnemyMain5_3 objEnemyMain5_1
bool objEnemyMain8_1(Obj* const pObj);
bool objEnemyMain8_2(Obj* const pObj);
bool objEnemyMain8_3(Obj* const pObj);

// ---------------------------------------------------------------- 描画
void objEnemyDisp3_1(Obj* const pObj, u8* dispAddr);
void objEnemyDisp3_2(Obj* const pObj, u8* dispAddr);
void objEnemyDisp3_3(Obj* const pObj, u8* dispAddr);
void objEnemyDisp3_4(Obj* const pObj, u8* dispAddr);
void objEnemyDisp3_5(Obj* const pObj, u8* dispAddr);
void objEnemyDisp3_6(Obj* const pObj, u8* dispAddr);
void objEnemyDisp4_1(Obj* const pObj, u8* dispAddr);
void objEnemyDisp4_2(Obj* const pObj, u8* dispAddr);
void objEnemyDisp4_3(Obj* const pObj, u8* dispAddr);
void objEnemyDisp5_1(Obj* const pObj, u8* dispAddr);
void objEnemyDisp5_2(Obj* const pObj, u8* dispAddr);
void objEnemyDisp5_3(Obj* const pObj, u8* dispAddr);
void objEnemyDisp8_1(Obj* const pObj, u8* dispAddr);
void objEnemyDisp8_2(Obj* const pObj, u8* dispAddr);
void objEnemyDisp8_3(Obj* const pObj, u8* dispAddr);

#endif // OBJ_ENEMY_H_INCLUDED