/* Ghidra address: 004d7390 */
/* Ghidra symbol: FUN_004d7390 */


longlong FUN_004d7390(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  wchar_t *local_30;
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_3 == 0) {
    local_30 = L"Builder";
    local_28 = 0x11;
    local_48 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00433ec0,1,PTR_PTR_02003380,&local_30);
    FUN_004134c0(uVar2);
  }
  *(undefined1 *)(local_res8 + 0x10) = 0;
  *(longlong *)(local_res8 + 8) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

