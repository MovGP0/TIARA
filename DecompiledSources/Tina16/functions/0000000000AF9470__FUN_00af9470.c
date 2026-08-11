/* Ghidra address: 00af9470 */
/* Ghidra symbol: FUN_00af9470 */


void FUN_00af9470(undefined8 param_1,undefined8 param_2,byte *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  
  cVar1 = '\0';
  if (*param_3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*param_3 & 0x1f) & 0x41U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4 != (bool)param_3[1]) {
    iVar3 = 0;
    if (*(longlong *)(param_3 + 8) != 0) {
      iVar3 = (int)*(undefined8 *)(*(longlong *)(param_3 + 8) + -8);
    }
    iVar2 = 0;
    if (iVar3 - 1U < 0x80000000) {
      do {
        cVar1 = FUN_00af9150(auStack_48,*(longlong *)(param_3 + 8) + (longlong)iVar2 * 0x20);
        if (cVar1 == '\0') break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (cVar1 != '\0') {
    *param_4 = 1;
  }
  return;
}

