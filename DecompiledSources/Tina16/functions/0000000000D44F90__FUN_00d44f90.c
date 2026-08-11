/* Ghidra address: 00d44f90 */
/* Ghidra symbol: FUN_00d44f90 */


void FUN_00d44f90(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  bool local_32;
  bool local_31;
  wchar_t *local_30;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_48 = (wchar_t *)0x0;
  uVar2 = FUN_00788400(param_1,param_2);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  if (((*(ulonglong *)(param_2 + 0x10) & 2) == 2) && (*(longlong *)(param_2 + 8) != 0)) {
    FUN_00787c20(param_1[3],&local_48);
    local_30 = local_48;
    if (local_48 == L"ComboLBox") {
      local_31 = true;
    }
    else if (local_48 == (wchar_t *)0x0) {
      local_31 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_48,L"ComboLBox");
      local_31 = iVar1 == 0;
    }
    local_32 = local_31;
  }
  else {
    local_32 = false;
  }
  if (local_32 != false) {
    uVar2 = FUN_00787cc0(param_1[3]);
    uVar3 = FUN_00787d50(uVar2);
    if ((uVar3 & 1) != 1) {
      local_1c = 0;
      local_28 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      local_1c = thunk_FUN_03b57162(*(undefined8 *)(param_2 + 8));
      FUN_005ffb10(local_28,*(undefined8 *)(param_2 + 8));
      uVar2 = FUN_005ffa40(local_28);
      (**(code **)(*param_1 + 0xa8))(param_1,uVar2);
      (**(code **)(*param_1 + 0x28))(param_1,local_28);
      if (local_1c != 0) {
        uVar2 = FUN_005ffa40(local_28);
        thunk_FUN_0402759f(uVar2,local_1c);
      }
      FUN_005ffb10(local_28,0);
      FUN_00410f20(local_28);
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00414480(&local_48);
  return;
}

