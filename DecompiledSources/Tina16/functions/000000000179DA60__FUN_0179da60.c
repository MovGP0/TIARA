/* Ghidra address: 0179da60 */
/* Ghidra symbol: FUN_0179da60 */


void FUN_0179da60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(*(longlong *)(param_1 + 0xd10) + 0x10) + -1 < iVar2) break;
    lVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0xd10),iVar2);
    if (*(char *)(lVar1 + 0x21) != '\0') {
      FUN_004aed30(*(undefined8 *)(param_1 + 0xd10),iVar2,iVar3);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

