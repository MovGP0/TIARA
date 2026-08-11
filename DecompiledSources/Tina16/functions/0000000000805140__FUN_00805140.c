/* Ghidra address: 00805140 */
/* Ghidra symbol: FUN_00805140 */


void FUN_00805140(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0xab) != '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(DAT_02012668 + 0xa0));
      FUN_0064df70(param_1,1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_2 + 0x10));
    }
  }
  return;
}

