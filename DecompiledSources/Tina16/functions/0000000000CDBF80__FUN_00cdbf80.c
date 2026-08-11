/* Ghidra address: 00cdbf80 */
/* Ghidra symbol: FUN_00cdbf80 */


void FUN_00cdbf80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x7f;
  puVar2 = param_3;
  do {
    *puVar2 = 0xff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar1 = '\0';
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar4 = 1;
  if (0 < iVar3) {
    do {
      param_3[(ulonglong)*(ushort *)(param_2 + -2 + (longlong)iVar4 * 2) - 1] = cVar1;
      cVar1 = cVar1 + '\x01';
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

