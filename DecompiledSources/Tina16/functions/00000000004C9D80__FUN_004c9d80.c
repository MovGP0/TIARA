/* Ghidra address: 004c9d80 */
/* Ghidra symbol: FUN_004c9d80 */


void FUN_004c9d80(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_10;
  
  local_10 = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  FUN_00419260(&local_10,&DAT_00406578,1,(longlong)iVar3);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar1 = 1;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(local_10 + (iVar1 + -1)) = *(undefined1 *)(param_2 + -2 + (longlong)iVar1 * 2)
      ;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = 0;
  if (local_10 != 0) {
    uVar2 = *(undefined8 *)(local_10 + -8);
  }
  FUN_004c3c80(*(undefined8 *)(param_1 + 0x1e0),local_10,uVar2);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

