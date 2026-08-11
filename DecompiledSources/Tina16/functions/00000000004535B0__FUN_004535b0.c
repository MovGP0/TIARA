/* Ghidra address: 004535b0 */
/* Ghidra symbol: FUN_004535b0 */


undefined8 FUN_004535b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_004484b0(&local_10,param_2,&DAT_0200c450);
  local_18 = FUN_00453060(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return local_18;
}

