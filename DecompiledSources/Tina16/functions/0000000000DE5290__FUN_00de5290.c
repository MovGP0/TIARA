/* Ghidra address: 00de5290 */
/* Ghidra symbol: FUN_00de5290 */


undefined8 FUN_00de5290(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  double local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = ((double)*(longlong *)(param_1 + 0x18) * 10000.0) / 10000.0;
  FUN_00448450(&local_10,local_18,PTR_DAT_02004830);
  FUN_00416ba0(param_2,local_10,&LAB_00de5374);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}

