/* Ghidra address: 00d437c0 */
/* Ghidra symbol: FUN_00d437c0 */


void FUN_00d437c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  cVar2 = FUN_00788df0(param_1);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
    piVar1 = *(int **)(param_2 + 0x10);
    cVar2 = FUN_00787ad0(*(undefined8 *)(param_1 + 0x18));
    if (cVar2 != '\0') {
      *piVar1 = *piVar1 + 2;
      piVar1[1] = piVar1[1] + 2;
      piVar1[2] = piVar1[2] + -2;
      piVar1[3] = piVar1[3] + -2;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}

