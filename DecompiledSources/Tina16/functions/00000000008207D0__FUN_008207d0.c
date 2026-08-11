/* Ghidra address: 008207d0 */
/* Ghidra symbol: FUN_008207d0 */


void FUN_008207d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4cc) == '\0')) {
    FUN_005ff880(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_1 + 0xb8));
    iVar2 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x4b8),&LAB_00820854);
    *(int *)(param_1 + 0x554) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0x57c)) {
      *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x57c);
    }
    FUN_0064fca0(param_1,0x1a0,0,(longlong)*(int *)(param_1 + 0x554));
  }
  return;
}

