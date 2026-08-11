/* Ghidra address: 01cc2640 */
/* Ghidra symbol: FUN_01cc2640 */


int FUN_01cc2640(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = FUN_01d34db0(param_1,param_2);
  FUN_01cc37d0(param_1,local_20);
  FUN_004168e0(&local_28,local_20[0]);
  iVar2 = FUN_01d31290(local_28);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return iVar1 + iVar2 + 1;
}

