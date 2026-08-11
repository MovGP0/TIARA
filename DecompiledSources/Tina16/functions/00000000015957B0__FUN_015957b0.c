/* Ghidra address: 015957b0 */
/* Ghidra symbol: FUN_015957b0 */


void FUN_015957b0(longlong param_1,undefined1 *param_2,int param_3)

{
  int local_c;
  
  if (param_3 < 0x20000000) {
    FUN_01594c60(param_1 + 0x44,param_1 + 0x40,param_3 * 8);
  }
  else {
    local_c = 1;
    do {
      FUN_01594c60(param_1 + 0x44,param_1 + 0x40,param_3);
      local_c = local_c + 1;
    } while (local_c != 9);
  }
  while (0 < param_3) {
    *(undefined1 *)(param_1 + 0x50 + (longlong)*(int *)(param_1 + 0xd0)) = *param_2;
    param_2 = param_2 + 1;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    param_3 = param_3 + -1;
    if (*(int *)(param_1 + 0xd0) == 0x40) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      FUN_01594d70(param_1);
      for (; 0x3f < param_3; param_3 = param_3 + -0x40) {
        FUN_00409a70(param_2,param_1 + 0x50,0x40);
        FUN_01594d70(param_1);
        param_2 = param_2 + 0x40;
      }
    }
  }
  return;
}

