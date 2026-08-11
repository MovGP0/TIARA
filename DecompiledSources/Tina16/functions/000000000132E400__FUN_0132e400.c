/* Ghidra address: 0132e400 */
/* Ghidra symbol: FUN_0132e400 */


void FUN_0132e400(longlong *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x18) != 0) {
      FUN_0132c6d0(*(undefined8 *)(*param_1 + 0x10));
    }
    FUN_004095f0(*param_1);
    *param_1 = 0;
  }
  return;
}

