/* Ghidra address: 01804140 */
/* Ghidra symbol: FUN_01804140 */


bool FUN_01804140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  FUN_0043e5a0(&local_18,param_2);
  FUN_00416cd0(&local_10,3,&DAT_01804228,local_18,&LAB_01804238);
  FUN_0043e5a0(&local_28,*(undefined8 *)(param_1 + 0x30));
  FUN_00416ba0(&local_20,&DAT_01804228,local_28);
  iVar1 = FUN_004170c0(local_10,local_20,1);
  FUN_00414560(&local_28,4);
  return 0 < iVar1;
}

