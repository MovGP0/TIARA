/* Ghidra address: 0045c710 */
/* Ghidra symbol: FUN_0045c710 */


void FUN_0045c710(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 < 5) {
    iVar1 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(param_1 + 0x18 + (longlong)iVar1 * 0x20))
                  (param_1 + 0x18 + (longlong)iVar1 * 0x20);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = 0;
    do {
      (**(code **)(param_1 + 0x18 + (longlong)iVar2 * 0x20))
                (param_1 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar2 = 0;
    if (-1 < *(int *)(param_1 + 0xa0) + -5) {
      iVar1 = *(int *)(param_1 + 0xa0) + -4;
      do {
        (**(code **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 0x20))
                  (*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 0x20);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_00419430(param_1 + 0x98,&DAT_0043d228);
  return;
}

