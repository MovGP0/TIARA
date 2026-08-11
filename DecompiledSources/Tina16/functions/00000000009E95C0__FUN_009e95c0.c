/* Ghidra address: 009e95c0 */
/* Ghidra symbol: FUN_009e95c0 */


void FUN_009e95c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x10),param_2);
  if ((iVar1 != 0) || ((*(byte *)(param_1 + 8) & 8) == 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
    FUN_00414b90(param_1 + 0x10,param_2);
  }
  return;
}

