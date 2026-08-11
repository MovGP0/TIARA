/* Ghidra address: 01603390 */
/* Ghidra symbol: FUN_01603390 */


undefined8 FUN_01603390(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00441920(&local_10,*(undefined8 *)(param_2 + 0x360));
  iVar1 = FUN_004170c0(&LAB_01603434,local_10,1);
  FUN_00416dc0(&local_10,local_10,1,iVar1 + -1);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

