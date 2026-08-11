/* Ghidra address: 014bbda0 */
/* Ghidra symbol: FUN_014bbda0 */


void FUN_014bbda0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar6;
  ulonglong uVar5;
  wchar_t *local_48;
  wchar_t *local_40;
  undefined1 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_48 = (wchar_t *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  if (DAT_0210eb50 == '\0') {
    DAT_0210eb40 = thunk_FUN_04163be6(L"urlmon.dll");
    if (DAT_0210eb40 != 0) {
      DAT_0210eb48 = (code *)thunk_FUN_041aa1c3(DAT_0210eb40,"URLDownloadToFileW");
    }
    DAT_0210eb50 = '\x01';
  }
  if (DAT_0210eb48 == (code *)0x0) {
    local_40 = L"urlmon.dll";
    local_38 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_02004720,&local_40,(ulonglong)uVar6 << 0x20);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_014bbc90(param_1,&local_20);
    uVar2 = FUN_00416740(local_20);
    FUN_014bbff0(param_1,&local_28);
    uVar3 = FUN_00416740(local_28);
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + 0x70;
    }
    FUN_0041b890(&local_30,lVar4,&DAT_014bbfb1);
    uVar5 = local_30;
    iVar1 = (*DAT_0210eb48)(0,uVar2,uVar3,0,local_30);
    if (iVar1 != 0) {
      FUN_014bbc90(param_1,&local_48);
      local_40 = local_48;
      local_38 = 0x11;
      uVar2 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_02004430,&local_40,uVar5 & 0xffffffff00000000
                          );
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414480(&local_48);
  FUN_0041b800(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

