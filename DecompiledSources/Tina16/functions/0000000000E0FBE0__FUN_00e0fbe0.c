/* Ghidra address: 00e0fbe0 */
/* Ghidra symbol: FUN_00e0fbe0 */


longlong FUN_00e0fbe0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x818) = uVar2;
  *(undefined8 *)(local_res8 + 0x840) = 0;
  FUN_00414480(local_res8 + 0x850);
  *(undefined1 *)(local_res8 + 0x848) = 0;
  *(undefined8 *)(local_res8 + 0x810) = 0;
  *(undefined8 *)(local_res8 + 0x858) = 0;
  *(undefined8 *)(local_res8 + 0x828) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

