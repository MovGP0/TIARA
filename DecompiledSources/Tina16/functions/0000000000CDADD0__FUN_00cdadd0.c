/* Ghidra address: 00cdadd0 */
/* Ghidra symbol: FUN_00cdadd0 */


undefined8 FUN_00cdadd0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_0086f700(&local_res20,2);
    FUN_00878900(local_18,param_3,local_res20);
    FUN_004b6dc0(local_18,0);
    FUN_00cdb0d0(param_1,param_2,local_18,0xffffffff);
    uVar1 = local_18;
    local_10 = local_18;
    local_18 = 0;
    FUN_00410f20(uVar1);
  }
  FUN_0041b800(&local_res20);
  return param_2;
}

