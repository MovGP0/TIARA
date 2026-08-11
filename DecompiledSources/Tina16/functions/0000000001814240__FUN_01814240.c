/* Ghidra address: 01814240 */
/* Ghidra symbol: FUN_01814240 */


undefined8 FUN_01814240(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_10 = FUN_01804b60(&DAT_01802850,1,*(undefined8 *)(param_1 + 0x38));
  local_18 = FUN_018038a0(&PTR_FUN_01801848,1);
  FUN_01805470(local_10,local_18,0);
  local_48 = *(undefined8 *)(local_18 + 0x30);
  FUN_00416cd0(&local_38,3,*(undefined8 *)(local_18 + 0x20),&LAB_01814364);
  local_20 = FUN_01814490(param_1,param_2,local_38,0);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_38);
  return local_20;
}

