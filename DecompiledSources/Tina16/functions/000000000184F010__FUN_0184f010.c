/* Ghidra address: 0184f010 */
/* Ghidra symbol: FUN_0184f010 */


longlong FUN_0184f010(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_018472d0(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  FUN_00414ad0(local_res8 + 0x18,param_5);
  FUN_00414ad0(local_res8 + 0x20,param_4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

