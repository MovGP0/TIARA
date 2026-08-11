/* Ghidra address: 017dd1b0 */
/* Ghidra symbol: FUN_017dd1b0 */


void FUN_017dd1b0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < param_4) {
    do {
      if (((*(int *)(param_1 + 0xa0) < 2) || (param_5 < 0)) || (*(char *)(param_1 + 0x5f) != '\x1b')
         ) {
        uVar1 = FUN_017dcc40(*(undefined8 *)(param_1 + 0x90),param_3 + -8 + (longlong)iVar2 * 8,
                             *(undefined1 *)(param_1 + 0x98),0);
        *(undefined8 *)(param_2 + -8 + (longlong)iVar2 * 8) = uVar1;
      }
      else {
        uVar1 = FUN_017dcc40(*(undefined8 *)(param_1 + 0x90),param_3 + -8 + (longlong)iVar2 * 8,
                             *(undefined1 *)(param_1 + 0x98),param_5);
        *(undefined8 *)(param_2 + -8 + (longlong)iVar2 * 8) = uVar1;
      }
      iVar2 = iVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

