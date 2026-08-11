/* Ghidra address: 0049ee90 */
/* Ghidra symbol: FUN_0049ee90 */


longlong FUN_0049ee90(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00410e60(local_res8,0);
  local_20 = FUN_004e7670(&PTR_FUN_0049bce8,1);
  *(longlong *)(local_res8 + 0x18) = local_20;
  local_28 = param_3;
  local_2c = FUN_00597e50(local_20 + 8,&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

