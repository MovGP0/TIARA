/* Ghidra address: 0185cb40 */
/* Ghidra symbol: FUN_0185cb40 */


undefined8 FUN_0185cb40(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0185c970(local_res8,0);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_0185dc60(param_3,local_20);
  FUN_004b6dc0(local_20,0);
  FUN_0185ceb0(local_res8,local_20);
  FUN_00410f20(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

