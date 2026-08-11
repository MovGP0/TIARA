/* Ghidra address: 01c67b60 */
/* Ghidra symbol: FUN_01c67b60 */


void FUN_01c67b60(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  wchar_t *local_68;
  undefined1 *local_60;
  bool local_49;
  wchar_t *local_48;
  undefined8 local_38 [2];
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  local_68 = (wchar_t *)0x0;
  local_38[0] = 0;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  local_20 = FUN_01b1ca40(&DAT_01b18528,1,*(undefined8 *)(param_2 + 8));
  iVar1 = FUN_01b1cba0();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_01b1cb40(local_20,local_38,local_24);
      FUN_00441a10(&local_68,local_38[0]);
      local_48 = local_68;
      if (local_68 == L".TSC") {
        local_49 = true;
      }
      else if (local_68 == (wchar_t *)0x0) {
        local_49 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_68,L".TSC");
        local_49 = iVar2 == 0;
      }
      if (local_49 != false) {
        local_88 = 0;
        local_80 = 0;
        local_78 = 1;
        FUN_01c681b0(param_1,local_38[0],0,0);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_00414480(&local_68);
  FUN_00414480(local_38);
  return;
}

