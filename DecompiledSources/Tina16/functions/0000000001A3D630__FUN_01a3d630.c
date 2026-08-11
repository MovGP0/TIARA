/* Ghidra address: 01a3d630 */
/* Ghidra symbol: FUN_01a3d630 */


undefined1 FUN_01a3d630(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00f30500(param_1,0,0);
  local_11 = local_10 != 0;
  FUN_00410f20(local_10);
  return local_11;
}

