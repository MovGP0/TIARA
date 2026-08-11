/* Ghidra address: 0104f5a0 */
/* Ghidra symbol: FUN_0104f5a0 */


void FUN_0104f5a0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar2 == DAT_0202f414) {
    FUN_00680ad0(*(undefined8 *)(param_1 + 0x958));
  }
  else {
    uVar1 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
    FUN_00f74eb0(uVar1,8);
    FUN_010508e0(param_1);
  }
  return;
}

