/* Ghidra address: 019b9700 */
/* Ghidra symbol: FUN_019b9700 */


undefined8 FUN_019b9700(char *param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    for (; (*param_1 != param_2 && (*(longlong *)(param_1 + 0x10) != 0));
        param_1 = *(char **)(param_1 + 0x10)) {
    }
    if (*param_1 == param_2) {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

