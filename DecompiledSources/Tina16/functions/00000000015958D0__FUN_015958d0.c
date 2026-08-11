/* Ghidra address: 015958d0 */
/* Ghidra symbol: FUN_015958d0 */


void FUN_015958d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  *(undefined1 *)(param_1 + 0x50 + (longlong)*(int *)(param_1 + 0xd0)) = 0x80;
  local_c = *(int *)(param_1 + 0xd0) + 1;
  if (local_c < 0x40) {
    do {
      *(undefined1 *)(param_1 + 0x50 + (longlong)local_c) = 0;
      local_c = local_c + 1;
    } while (local_c != 0x40);
  }
  if (0x37 < *(int *)(param_1 + 0xd0)) {
    FUN_01594d70(param_1);
    FUN_0040d200(param_1 + 0x50,0x38,0);
  }
  uVar1 = FUN_01594c10(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = FUN_01594c10(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  FUN_01594d70(param_1);
  FUN_0040d200(param_2,0x40,0);
  local_c = 0;
  do {
    uVar1 = FUN_01594c10(*(undefined4 *)(param_1 + (longlong)local_c * 4));
    *(undefined4 *)(param_2 + (longlong)local_c * 4) = uVar1;
    local_c = local_c + 1;
  } while (local_c != 5);
  FUN_0040d200(param_1,0xd4,0);
  return;
}

