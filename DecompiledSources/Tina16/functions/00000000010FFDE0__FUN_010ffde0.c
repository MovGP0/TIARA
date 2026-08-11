/* Ghidra address: 010ffde0 */
/* Ghidra symbol: FUN_010ffde0 */


void FUN_010ffde0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x141) == '\0') {
    iVar2 = FUN_010ffe70(*(undefined8 *)(param_1 + 0x158));
    iVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x94) / 2.0);
    iVar2 = iVar2 - iVar3;
    cVar1 = FUN_01cd6670(param_1);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar2;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar2;
    }
    else if (cVar1 == '\x01') {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x141) = 1;
  return;
}

