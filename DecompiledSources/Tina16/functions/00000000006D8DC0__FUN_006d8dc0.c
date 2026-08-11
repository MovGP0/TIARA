/* Ghidra address: 006d8dc0 */
/* Ghidra symbol: FUN_006d8dc0 */


void FUN_006d8dc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x4a0),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x4a0,param_2);
    FUN_006d8d30(param_1);
  }
  return;
}

