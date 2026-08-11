/* Ghidra address: 013371d0 */
/* Ghidra symbol: FUN_013371d0 */


undefined1 FUN_013371d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  local_b8 = param_1;
  if (iVar1 < 4) {
    if (iVar1 == 3) {
LAB_0133754a:
      FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_80,
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
      if ((local_80 != 0) &&
         (FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_88,
                       *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38)),
         local_88 != 0)) {
        FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_90,
                     *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x3c));
        dVar4 = (double)FUN_00448650(local_90,PTR_DAT_02004830);
        FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_98,
                     *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
        dVar5 = (double)FUN_00448650(local_98,PTR_DAT_02004830);
        if (*(char *)(local_b8 + 0x80) == '\0') {
          local_a9 = dVar4 < dVar5;
        }
        else {
          local_a9 = dVar5 <= dVar4;
        }
      }
      goto code_r0x013376e1;
    }
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_50,
                     *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
        FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_58,
                     *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
        iVar1 = FUN_0043e6d0(local_50,local_58);
        local_a9 = iVar1 < 0;
      }
      else {
        FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_40,
                     *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
        FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_48,
                     *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
        iVar1 = FUN_0043e6d0(local_40,local_48);
        local_a9 = -1 < iVar1;
      }
      goto code_r0x013376e1;
    }
    if (iVar1 == 1) {
      FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_60,
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
      iVar1 = (**(code **)(*DAT_02107868 + 0xb0))(DAT_02107868,local_60);
      if (0 < iVar1) {
        iVar2 = (**(code **)(*DAT_02107868 + 0x28))(DAT_02107868);
        iVar1 = iVar2 - iVar1;
      }
      FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_68,
                   *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
      iVar2 = (**(code **)(*DAT_02107868 + 0xb0))(DAT_02107868,local_68);
      if (0 < iVar2) {
        iVar3 = (**(code **)(*DAT_02107868 + 0x28))(DAT_02107868);
        iVar2 = iVar3 - iVar2;
      }
      if (*(char *)(local_b8 + 0x80) == '\0') {
        local_a9 = iVar1 < iVar2;
      }
      else {
        local_a9 = iVar2 <= iVar1;
      }
      goto code_r0x013376e1;
    }
    if (iVar1 != 2) goto code_r0x013376e1;
  }
  else {
    if (iVar1 == 4) {
      FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_a0,
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
      iVar1 = FUN_01337150(auStack_d8,local_a0);
      FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_a8,
                   *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
      iVar2 = FUN_01337150(auStack_d8,local_a8);
      if (*(char *)(local_b8 + 0x80) == '\0') {
        local_a9 = iVar1 < iVar2;
      }
      else {
        local_a9 = iVar2 <= iVar1;
      }
      goto code_r0x013376e1;
    }
    if (iVar1 != 5) {
      if (iVar1 != 6) goto code_r0x013376e1;
      goto LAB_0133754a;
    }
  }
  FUN_0084e320(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6c0),&local_70,
               *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x3c));
  dVar4 = (double)FUN_00b8f030(local_70);
  FUN_0084e320(*(undefined8 *)(*(longlong *)(local_b8 + 0x70) + 0x6c0),&local_78,
               *(undefined4 *)(local_b8 + 0x78),*(undefined4 *)(local_b8 + 0x38));
  dVar5 = (double)FUN_00b8f030(local_78);
  if (*(char *)(local_b8 + 0x80) == '\0') {
    local_a9 = dVar4 < dVar5;
  }
  else {
    local_a9 = dVar5 <= dVar4;
  }
code_r0x013376e1:
  FUN_00414560(&local_a8,0x10);
  return local_a9;
}

