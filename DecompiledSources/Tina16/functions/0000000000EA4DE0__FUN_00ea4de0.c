/* Ghidra address: 00ea4de0 */
/* Ghidra symbol: FUN_00ea4de0 */


void FUN_00ea4de0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x10,param_2);
    FUN_00ea3330(param_1);
  }
  return;
}

