/* Ghidra address: 00b39420 */
/* Ghidra symbol: FUN_00b39420 */


void FUN_00b39420(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416420(param_2,*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0) {
    FUN_00414b90(param_1 + 0x18,param_2);
  }
  iVar1 = FUN_00416420(param_2,0);
  if (iVar1 != 0) {
    FUN_00b39c20(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}

