/* Ghidra address: 00bca1f0 */
/* Ghidra symbol: FUN_00bca1f0 */


void FUN_00bca1f0(undefined8 *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (short *)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  if (iVar1 == 2) {
    if (*param_2 == param_2[1]) {
      (**(code **)*param_1)(param_1,0x80);
    }
    else if (((*(char *)(param_1 + 0x3a) == '\0') ||
             (*param_2 != *(short *)((longlong)param_1 + 0x1d2))) ||
            (param_2[1] != *(short *)((longlong)param_1 + 0x1d4))) {
      *(undefined1 *)(param_1 + 0x3a) = 1;
      *(short *)((longlong)param_1 + 0x1d2) = *param_2;
      *(short *)((longlong)param_1 + 0x1d4) = param_2[1];
      FUN_00bc5ca0();
    }
  }
  else {
    iVar1 = 0;
    if (param_2 != (short *)0x0) {
      iVar1 = *(int *)(param_2 + -2);
    }
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3a) != '\0') {
        *(undefined1 *)(param_1 + 0x3a) = 0;
        FUN_00bc5ca0();
      }
    }
    else {
      (**(code **)*param_1)(param_1,0x80);
    }
  }
  return;
}

