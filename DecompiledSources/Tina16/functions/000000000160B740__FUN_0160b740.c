/* Ghidra address: 0160b740 */
/* Ghidra symbol: FUN_0160b740 */


void FUN_0160b740(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b8ba0(local_10,param_1,(longlong)param_2);
  FUN_004b9df0(local_10,local_res18[0]);
  FUN_00410f20(local_10);
  FUN_00414480(local_res18);
  return;
}

