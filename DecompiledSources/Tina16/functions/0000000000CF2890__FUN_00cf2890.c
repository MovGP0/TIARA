/* Ghidra address: 00cf2890 */
/* Ghidra symbol: FUN_00cf2890 */


void FUN_00cf2890(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(char *)(param_1 + 0x50) != '\0') {
      FUN_00410f20(*(longlong *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  FUN_00414ad0(param_1 + 0x48,param_2);
  return;
}

