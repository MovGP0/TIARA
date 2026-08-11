/* Ghidra address: 00663510 */
/* Ghidra symbol: FUN_00663510 */


void FUN_00663510(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int local_res18 [4];
  undefined8 local_20 [2];
  uint local_10;
  undefined4 local_c;
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  if (((param_2 == *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x90)) ||
      (*(longlong *)(param_2 + 0x10) != 0)) || (*(longlong *)(param_2 + 8) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
              (*(longlong **)(param_1 + 0x88),local_res18,4);
    local_10 = (uint)*(byte *)(param_2 + 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
              (*(longlong **)(param_1 + 0x88),&local_10,1);
    if (*(char *)(*(longlong *)(param_1 + 0x80) + 0xa4) == '\0') {
      local_c = *(undefined4 *)(param_2 + 0x40);
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x50))
                        (*(longlong **)(param_1 + 0x80),*(undefined1 *)(param_2 + 0x20));
      local_c = FUN_00664620(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_2 + 0x40),uVar1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))(*(longlong **)(param_1 + 0x88),&local_c,4)
    ;
    FUN_00660990(param_2,local_20);
    FUN_00663450(param_1,local_20[0]);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_00663510(param_1,*(longlong *)(param_2 + 0x10),local_res18[0] + 1);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_00663510(param_1,*(longlong *)(param_2 + 0x18),local_res18[0]);
  }
  FUN_00414480(local_20);
  return;
}

