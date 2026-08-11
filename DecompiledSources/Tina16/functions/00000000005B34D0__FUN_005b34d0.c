/* Ghidra address: 005b34d0 */
/* Ghidra symbol: FUN_005b34d0 */


longlong FUN_005b34d0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  wchar_t *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (param_3 == 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_02003380);
    local_38 = L"AActionList";
    local_30 = 0x11;
    local_48 = 0;
    uVar2 = FUN_0044d530(&PTR_FUN_005ae658,1,local_28,&local_38);
    FUN_004134c0(uVar2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 8) = 0xffffffff;
  *(longlong *)(local_res8 + 0x10) = param_3;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

