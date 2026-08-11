/* Ghidra address: 00dd4650 */
/* Ghidra symbol: FUN_00dd4650 */


void FUN_00dd4650(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa0) + 700);
  cVar1 = *(char *)(param_1 + 0xd0);
  if (*(byte *)(param_1 + 0xd0) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0xd0) & 0x1f)
            & 0xd4U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    cVar1 = '\x06';
  }
  else if (*(char *)(param_1 + 0xd0) == '\b') {
    cVar1 = '\0';
  }
  else if (*(char *)(param_1 + 0xd0) == '\t') {
    cVar1 = '\x01';
  }
  else if (*(char *)(param_1 + 0xd0) == '\x05') {
    cVar1 = '\n';
  }
  do {
    if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x38 + (longlong)iVar2 * 0x20) == cVar1)
    goto code_r0x00dd4726;
    iVar2 = iVar2 + 1;
    if ((iVar2 == 0x14) ||
       (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x38 + (longlong)iVar2 * 0x20) == '\f')) {
      iVar2 = 0;
    }
  } while (iVar2 != *(int *)(*(longlong *)(param_1 + 0xa0) + 700));
  FUN_01b04d70(CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0xa0) >> 0x10),0x215),
               &LAB_00dd477c,0);
code_r0x00dd4726:
  *(int *)(*(longlong *)(param_1 + 0xa0) + 700) = iVar2;
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0xa0) + 0x38 + (longlong)iVar2 * 0x20;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10);
  return;
}

