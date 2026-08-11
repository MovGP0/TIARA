/* Ghidra address: 00602340 */
/* Ghidra symbol: FUN_00602340 */


void FUN_00602340(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

