/* Ghidra address: 01cc0690 */
/* Ghidra symbol: FUN_01cc0690 */


int FUN_01cc0690(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01cc0ae0(param_1,&local_10);
  FUN_004168e0(&local_18,local_10);
  iVar1 = FUN_01d31290(local_18);
  FUN_00414520(&local_18);
  FUN_00414480(&local_10);
  return iVar1 + 0x1a;
}

