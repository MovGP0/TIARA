/* Ghidra address: 015c1020 */
/* Ghidra symbol: FUN_015c1020 */


void FUN_015c1020(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int local_28;
  int local_1c;
  
  *param_2 = 0x12345678;
  param_2[1] = 0x23456789;
  param_2[2] = 0x34567890;
  local_28 = 0;
  if (param_1 != 0) {
    local_28 = *(int *)(param_1 + -4);
  }
  local_1c = 0;
  if (-1 < local_28 + -1) {
    do {
      lVar2 = FUN_00415ab0(param_1);
      FUN_015c0dd0(*(undefined1 *)(lVar2 + local_1c),param_2);
      local_1c = local_1c + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  local_1c = 0;
  do {
    bVar1 = FUN_015c0e60(param_2);
    bVar1 = *(byte *)(param_3 + local_1c) ^ bVar1;
    FUN_015c0dd0(bVar1,param_2);
    *(byte *)(param_3 + local_1c) = bVar1;
    local_1c = local_1c + 1;
  } while (local_1c != 0xc);
  return;
}

