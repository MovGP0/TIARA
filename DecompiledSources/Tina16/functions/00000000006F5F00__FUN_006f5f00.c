/* Ghidra address: 006f5f00 */
/* Ghidra symbol: FUN_006f5f00 */


void FUN_006f5f00(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x39) == '\0')) {
    if (((*(uint *)(param_1 + 0xa4) & 0x2000) == 0) && (*(longlong *)(param_1 + 0x6c0) != 0)) {
      (**(code **)(param_1 + 0x6c0))(*(undefined8 *)(param_1 + 0x6c8),param_1,param_2);
    }
    *(undefined1 *)(param_2 + 0x39) = 1;
    FUN_006eed70(param_2);
  }
  return;
}

