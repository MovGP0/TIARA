/* Ghidra address: 01111340 */
/* Ghidra symbol: FUN_01111340 */


void FUN_01111340(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x658)) {
    *(char *)(param_1 + 0x658) = param_2;
    if (param_2 == '\0') {
      FUN_01111380(param_1,*(undefined2 *)(param_1 + 0x5ba));
    }
    else {
      FUN_01111400();
    }
  }
  return;
}

