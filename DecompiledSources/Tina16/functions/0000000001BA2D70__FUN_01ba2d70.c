/* Ghidra address: 01ba2d70 */
/* Ghidra symbol: FUN_01ba2d70 */


void FUN_01ba2d70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,char param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  FUN_005fce30(*(undefined8 *)(lVar2 + 0x70),param_5);
  if (param_6 == '\0') {
    lVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_005fce60(*(undefined8 *)(lVar3 + 0x70));
    FUN_005fce70(*(undefined8 *)(lVar2 + 0x70),uVar4 & 0xfffffffe);
  }
  else {
    lVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    uVar1 = FUN_005fce60(*(undefined8 *)(lVar3 + 0x70));
    FUN_005fce70(*(undefined8 *)(lVar2 + 0x70),uVar1 | 1);
  }
  plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar5 + 0x120))(plVar5,param_2,param_3,local_res20);
  FUN_00414480(&local_res20);
  return;
}

