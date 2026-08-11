/* Ghidra address: 00cdb4b0 */
/* Ghidra symbol: FUN_00cdb4b0 */


undefined8 FUN_00cdb4b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_20 = auStack_48;
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_008788c0(local_18,param_3,0xffffffff,0);
    FUN_004b6dc0(local_18,0);
    FUN_00cdb700(param_1,param_2,local_18,0xffffffff);
    uVar1 = local_18;
    local_10 = local_18;
    local_18 = 0;
    FUN_00410f20(uVar1);
  }
  return param_2;
}

