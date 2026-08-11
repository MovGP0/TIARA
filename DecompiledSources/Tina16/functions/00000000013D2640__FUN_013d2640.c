/* Ghidra address: 013d2640 */
/* Ghidra symbol: FUN_013d2640 */


bool FUN_013d2640(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_3 + 0xc0))(param_3);
  return iVar1 != -1;
}

