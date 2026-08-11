/* Ghidra address: 00cc3f50 */
/* Ghidra symbol: FUN_00cc3f50 */


bool FUN_00cc3f50(undefined8 param_1,undefined2 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416780(&local_10,param_2);
  iVar1 = FUN_004170c0(local_10,param_1,1);
  FUN_00414480(&local_10);
  return iVar1 - 1U < 0x80000000;
}

