/* Ghidra address: 00787620 */
/* Ghidra symbol: FUN_00787620 */


void FUN_00787620(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  wchar_t *local_c8;
  undefined1 local_c0;
  longlong local_b0;
  longlong local_78 [2];
  longlong local_68;
  longlong local_30;
  undefined1 local_28 [24];
  
  local_f0 = 0;
  local_f8 = 0;
  if (param_2 == 0) {
    local_c8 = L"ControlClass";
    local_c0 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00777610,1,PTR_PTR_020058c8,&local_c8,0);
    FUN_004134c0(uVar3);
  }
  if (param_3 == 0) {
    local_c8 = L"StyleHookClass";
    local_c0 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00777610,1,PTR_PTR_020058c8,&local_c8,0);
    FUN_004134c0(uVar3);
  }
  if (DAT_02012520 != 0) {
    cVar1 = FUN_0078e5d0(DAT_02012520,param_2);
    if (cVar1 != '\0') {
      lVar4 = FUN_0078d850(DAT_02012520,param_2);
      local_68 = lVar4 + 8;
      local_30 = param_3;
      iVar2 = FUN_00596a10(local_68,&local_30);
      if (iVar2 == -1) {
        FUN_00410ae0(param_3,&local_f0);
        local_e8 = local_f0;
        local_e0 = 0x11;
        FUN_00410ae0(param_2,&local_f8);
        local_d8 = local_f8;
        local_d0 = 0x11;
        uVar3 = FUN_0044d8d0(&PTR_FUN_00777610,1,PTR_PTR_02004178,&local_e8,1);
        FUN_004134c0(uVar3);
      }
      else {
        local_b0 = lVar4 + 8;
        local_78[0] = param_3;
        FUN_005974f0(local_b0,local_78);
        FUN_0078f060(local_28,param_2,param_3);
        plVar5 = (longlong *)FUN_007810c0();
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(*plVar5,1,local_28);
        }
      }
    }
  }
  FUN_00414560(&local_f8,2);
  return;
}

