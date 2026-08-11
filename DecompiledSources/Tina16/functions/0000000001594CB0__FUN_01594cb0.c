/* Ghidra address: 01594cb0 */
/* Ghidra symbol: FUN_01594cb0 */


void FUN_01594cb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_c;
  
  local_c = 0;
  do {
    uVar1 = FUN_01594c10(*(undefined4 *)(param_2 + (longlong)local_c * 4));
    *(undefined4 *)(param_1 + (longlong)local_c * 4) = uVar1;
    local_c = local_c + 1;
  } while (local_c != 0x10);
  local_c = 0x10;
  do {
    uVar2 = *(uint *)(param_1 + (longlong)(local_c + -3) * 4) ^
            *(uint *)(param_1 + (longlong)(local_c + -8) * 4) ^
            *(uint *)(param_1 + (longlong)(local_c + -0xe) * 4) ^
            *(uint *)(param_1 + (longlong)(local_c + -0x10) * 4);
    *(uint *)(param_1 + (longlong)local_c * 4) = uVar2 * 2 | uVar2 >> 0x1f;
    local_c = local_c + 1;
  } while (local_c != 0x50);
  return;
}

