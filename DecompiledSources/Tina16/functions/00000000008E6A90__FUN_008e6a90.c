/* Ghidra address: 008e6a90 */
/* Ghidra symbol: FUN_008e6a90 */


bool FUN_008e6a90(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x58))(param_1);
  return iVar1 != -1;
}

