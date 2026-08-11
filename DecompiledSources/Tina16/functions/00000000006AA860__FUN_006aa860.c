/* Ghidra address: 006aa860 */
/* Ghidra symbol: FUN_006aa860 */


void FUN_006aa860(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x27) = 0;
  if (param_1[0x2e] != 0) {
    if (param_1[0x2c] != 0) {
      (*(code *)param_1[0x2c])(param_1[0x2d],param_1);
    }
    cVar1 = (**(code **)(*(longlong *)param_1[0x2e] + 0xa8))((longlong *)param_1[0x2e]);
    *(char *)(param_1 + 0x27) = cVar1;
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x140))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x138))(param_1);
    }
  }
  return;
}

