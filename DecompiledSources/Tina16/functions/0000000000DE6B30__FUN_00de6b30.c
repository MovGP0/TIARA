/* Ghidra address: 00de6b30 */
/* Ghidra symbol: FUN_00de6b30 */


void FUN_00de6b30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0x40);
  local_10 = local_18;
  cVar1 = FUN_00de6910(param_1,local_18);
  if (cVar1 == '\0') {
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004cdee0(local_18,local_10);
  }
  else {
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004ce060(local_18,local_20);
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b6dc0(local_20,0);
    FUN_004cdee0(local_20,local_10);
  }
  FUN_004b6dc0(local_10,0);
  FUN_00de6ac0(param_1,local_10);
  if (local_10 != local_18) {
    FUN_00410f20(local_10);
  }
  FUN_00410f20(local_18);
  FUN_00414480(local_res10);
  return;
}

