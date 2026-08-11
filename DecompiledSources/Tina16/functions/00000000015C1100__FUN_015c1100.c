/* Ghidra address: 015c1100 */
/* Ghidra symbol: FUN_015c1100 */


void FUN_015c1100(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int local_24;
  int local_1c;
  
  *param_2 = 0x12345678;
  param_2[1] = 0x23456789;
  param_2[2] = 0x34567890;
  local_24 = 0;
  if (param_1 != 0) {
    local_24 = *(int *)(param_1 + -4);
  }
  local_1c = 0;
  if (-1 < local_24 + -1) {
    do {
      lVar1 = FUN_00415ab0(param_1);
      FUN_015c0dd0(*(undefined1 *)(lVar1 + local_1c),param_2);
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}

