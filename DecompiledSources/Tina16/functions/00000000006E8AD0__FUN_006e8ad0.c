/* Ghidra address: 006e8ad0 */
/* Ghidra symbol: FUN_006e8ad0 */


void FUN_006e8ad0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  if (-1 < param_2) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    local_20 = thunk_FUN_041b2403(uVar1,0xbb,(longlong)param_2,0);
    if (local_20 != -1) {
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      local_1c = thunk_FUN_041b2403(uVar1,0xbb,(longlong)(param_2 + 1),0);
      if (local_1c == -1) {
        uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
        local_1c = thunk_FUN_041b2403(uVar1,0xc1,(longlong)local_20,0);
        local_1c = local_20 + local_1c;
      }
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      FUN_004701a0(uVar1,0x437,0,&local_20);
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      FUN_00470120(uVar1,0xc2,0,0);
    }
  }
  return;
}

