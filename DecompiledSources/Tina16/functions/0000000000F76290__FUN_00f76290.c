/* Ghidra address: 00f76290 */
/* Ghidra symbol: FUN_00f76290 */


void FUN_00f76290(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  bVar1 = false;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x6d0),uVar2);
  if ((*(int *)(lVar3 + 0xc) == 6) || (*(int *)(lVar3 + 0xc) == 7)) {
    FUN_00f750e0(*(undefined8 *)(param_1 + 0x6e0));
    bVar1 = true;
    uVar4 = FUN_00f65130(*(undefined8 *)(param_1 + 0x6d8),*(undefined4 *)(lVar3 + 0x10));
    FUN_00f6f900(uVar4,8);
  }
  if (bVar1) {
    FUN_010508e0(*(undefined8 *)(param_1 + 0x6e8));
  }
  return;
}

