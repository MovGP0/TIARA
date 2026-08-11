/* Ghidra address: 01478260 */
/* Ghidra symbol: FUN_01478260 */


double FUN_01478260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  dVar2 = (double)FUN_00b8f030(local_res18);
  if ((dVar2 < -1e+50) || (1e+50 < dVar2)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_18,0x132);
    local_28 = local_res10;
    local_20 = 0x11;
    FUN_00442f70(&local_10,local_18,&local_28,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    dVar2 = (double)FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res10,2);
  return dVar2;
}

