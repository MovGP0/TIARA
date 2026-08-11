/* Ghidra address: 01bffa60 */
/* Ghidra symbol: FUN_01bffa60 */


void FUN_01bffa60(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong *local_18;
  int local_c;
  
  local_20 = auStack_48;
  if (param_1[0x93] != 0) {
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    local_18 = param_1;
    local_c = (**(code **)(*param_1 + 0x2e8))(param_1);
    local_c = local_c + -1;
    if (-1 < local_c) {
      do {
        uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_c);
        FUN_00410f20(uVar1);
        local_c = local_c + -1;
      } while (local_c != -1);
    }
    FUN_01bfa8f0(param_1[0x93]);
    param_1[0x93] = 0;
    FUN_00654410(param_1);
  }
  return;
}

