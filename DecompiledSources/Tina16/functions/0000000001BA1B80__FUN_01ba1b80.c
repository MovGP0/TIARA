/* Ghidra address: 01ba1b80 */
/* Ghidra symbol: FUN_01ba1b80 */


void FUN_01ba1b80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_38 [16];
  
  iVar2 = FUN_01ba0ef0(param_2,param_3);
  FUN_01ba15c0(param_1,local_38,param_2,param_3,1);
  if (iVar2 == 0) {
    lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(param_1 + 0x128));
  }
  else {
    lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
    FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(param_1 + 300));
  }
  plVar3 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar3 + 0xa8))(plVar3,local_38);
  return;
}

