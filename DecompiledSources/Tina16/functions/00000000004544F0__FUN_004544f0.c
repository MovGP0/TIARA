/* Ghidra address: 004544f0 */
/* Ghidra symbol: FUN_004544f0 */


undefined8 FUN_004544f0(undefined8 param_1,undefined4 param_2,float param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_00448450(&local_10,(double)param_3,&DAT_0200c450);
  local_18 = FUN_004545b0(param_1,param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return local_18;
}

