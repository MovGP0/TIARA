/* Ghidra address: 010a3b00 */
/* Ghidra symbol: FUN_010a3b00 */


void FUN_010a3b00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x710));
  if (iVar1 == 1) {
    FUN_010a5af0(param_1,*(undefined8 *)(param_1 + 0xa58));
    FUN_010a4910(param_1);
  }
  else if (iVar1 == 2) {
    FUN_010a6500(param_1,*(undefined8 *)(param_1 + 0xa58));
    FUN_010a49e0(param_1,1);
  }
  else if (iVar1 == 3) {
    FUN_010a50d0(param_1,*(undefined8 *)(param_1 + 0xa58));
    FUN_010a4ab0(param_1);
  }
  else if (iVar1 == 4) {
    FUN_010a6a00(param_1);
  }
  else if (iVar1 == 5) {
    FUN_010a4b80(param_1);
  }
  return;
}

