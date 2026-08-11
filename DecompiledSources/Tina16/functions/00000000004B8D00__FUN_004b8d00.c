/* Ghidra address: 004b8d00 */
/* Ghidra symbol: FUN_004b8d00 */


undefined8 FUN_004b8d00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_004baeb0(&PTR_FUN_0047f878,1,param_1,0x1000);
  local_18 = FUN_004c1530(local_10,param_2);
  FUN_00410f20(local_10);
  return local_18;
}

