/* Ghidra address: 006f32a0 */
/* Ghidra symbol: FUN_006f32a0 */


void FUN_006f32a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4da) != param_2) {
    *(char *)(param_1 + 0x4da) = param_2;
    FUN_00655b90();
  }
  return;
}

