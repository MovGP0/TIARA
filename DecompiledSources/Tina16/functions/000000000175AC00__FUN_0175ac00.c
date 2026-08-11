/* Ghidra address: 0175ac00 */
/* Ghidra symbol: FUN_0175ac00 */


void FUN_0175ac00(longlong param_1,char *param_2)

{
  undefined1 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == '\0') || (*param_2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}

