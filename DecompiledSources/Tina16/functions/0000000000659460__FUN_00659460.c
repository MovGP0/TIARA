/* Ghidra address: 00659460 */
/* Ghidra symbol: FUN_00659460 */


void FUN_00659460(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x478)) {
    *(char *)(param_1 + 0x478) = param_2;
    *(undefined1 *)(param_1 + 0x395) = 0;
    FUN_0064fca0(param_1,0xb04f,0,0);
  }
  return;
}

