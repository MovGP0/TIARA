/* Ghidra address: 01b04b70 */
/* Ghidra symbol: FUN_01b04b70 */


longlong FUN_01b04b70(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_28,0x10a);
  FUN_0044d9f0(local_res8,0,local_28,0x1585);
  local_48 = 0;
  FUN_016f0060(&local_30,param_3,*(undefined8 *)(param_3 + 0x340),0xffffffff);
  FUN_00414ad0(local_res8 + 0x30,local_30);
  local_48 = 0;
  FUN_016f0060(&local_38,param_3,*(undefined8 *)(param_3 + 0x348),*(undefined4 *)(param_3 + 0x2ec));
  FUN_00414ad0(local_res8 + 0x38,local_38);
  *(undefined8 *)(local_res8 + 0x40) =
       *(undefined8 *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_3 + 0x2ec) * 8);
  *(undefined8 *)(local_res8 + 0x48) =
       *(undefined8 *)(*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(param_3 + 0x2ec) * 8);
  *(undefined8 *)(local_res8 + 0x50) = *(undefined8 *)(param_3 + 0x358);
  *(longlong *)(local_res8 + 0x58) = param_3;
  FUN_00414560(&local_38,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

