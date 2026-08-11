/* Ghidra address: 01be8c90 */
/* Ghidra symbol: FUN_01be8c90 */


void FUN_01be8c90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x678),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x678,param_2);
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      FUN_01be8c50(param_1);
    }
  }
  return;
}

