/* Ghidra address: 017dcb70 */
/* Ghidra symbol: FUN_017dcb70 */


void FUN_017dcb70(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x02') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),iVar2);
        FUN_017d7400(uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}

