/* Ghidra address: 0069d590 */
/* Ghidra symbol: FUN_0069d590 */


void FUN_0069d590(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  FUN_0069d4b0(param_1,0);
  FUN_0069d2f0(param_1,2);
  plVar3 = (longlong *)FUN_0069db00(param_1);
  (**(code **)(*plVar3 + 0x100))(plVar3);
  uVar1 = FUN_0069db00(param_1);
  FUN_0069d130(uVar1);
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  FUN_0040d200(local_40,0x28,0);
  local_40[0] = 0x28;
  local_38 = FUN_00416740(*(undefined8 *)(param_1 + 0x30));
  thunk_FUN_0419fd2d(*(undefined8 *)(param_1 + 0x40),FUN_0069c3c0);
  iVar2 = thunk_FUN_04049bf8(*(undefined8 *)(param_1 + 0x40),local_40);
  if (iVar2 < 1) {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    thunk_FUN_041a4bab(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

