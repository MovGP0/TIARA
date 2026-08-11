/* Ghidra address: 006d85c0 */
/* Ghidra symbol: FUN_006d85c0 */


void FUN_006d85c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x18,param_2);
    FUN_004b1830(param_1,0);
  }
  return;
}

