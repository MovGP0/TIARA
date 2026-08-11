/* Ghidra address: 00de7260 */
/* Ghidra symbol: FUN_00de7260 */


void FUN_00de7260(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0x40);
  local_18 = 0;
  cVar1 = FUN_00de6910(*param_1,local_20);
  if (cVar1 == '\0') {
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004cdee0(local_20,local_18);
  }
  else {
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004ce060(local_20,local_10);
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b6dc0(local_10,0);
    FUN_004cdee0(local_10,local_18);
    FUN_00410f20(local_10);
  }
  FUN_004b6dc0(local_18,0);
  FUN_00de7240(param_1,local_18);
  FUN_00410f20(local_18);
  FUN_00410f20(local_20);
  FUN_00414480(local_res10);
  return;
}

