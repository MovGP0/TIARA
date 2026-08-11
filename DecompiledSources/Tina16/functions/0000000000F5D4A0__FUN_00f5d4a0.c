/* Ghidra address: 00f5d4a0 */
/* Ghidra symbol: FUN_00f5d4a0 */


void FUN_00f5d4a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_950;
  undefined1 local_941;
  undefined1 local_940 [684];
  undefined1 local_694;
  undefined1 local_693;
  double local_690;
  double local_688;
  
  local_950 = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  if (*(longlong *)(param_1 + 0x518) == 0) {
    FUN_00417c40(local_940,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_940,*(longlong *)(param_1 + 0x518) + 0x5d8,&DAT_01d0d0b8);
  }
  local_690 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4e0));
  local_688 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4e8));
  local_693 = (undefined1)((longlong)(*(int *)(*(longlong *)(param_1 + 0x4f8) + 0x4a8) + 1) % 3);
  local_694 = (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x260))
                        (*(longlong **)(param_1 + 0x4f0));
  if ((local_688 <= local_690) || (local_690 < 0.0)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_950,0x134);
    FUN_00f5d220(param_1,local_950);
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    local_941 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x260))
                          (*(longlong **)(param_1 + 0x500));
    FUN_00f5cdb0(*(undefined8 *)(param_1 + 0x510),&local_941,1);
  }
  if (*(char *)(param_1 + 0x508) == '\0') {
    if (*(longlong *)(param_1 + 0x518) == 0) {
      FUN_00417c40(PTR_DAT_02004010,local_940,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(*(longlong *)(param_1 + 0x518) + 0x5d8,local_940,&DAT_01d0d0b8);
    }
  }
  FUN_00414480(&local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

