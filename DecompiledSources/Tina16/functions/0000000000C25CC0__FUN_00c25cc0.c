/* Ghidra address: 00c25cc0 */
/* Ghidra symbol: FUN_00c25cc0 */


void FUN_00c25cc0(longlong param_1)

{
  if (*(char *)(param_1 + 0x134) != '\0') {
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x130) + -1;
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x30,(longlong)*(int *)(param_1 + 0x130))
    ;
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  return;
}

