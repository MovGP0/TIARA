/* Ghidra address: 0179d9f0 */
/* Ghidra symbol: FUN_0179d9f0 */


void FUN_0179d9f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10) + -1;
  iVar3 = iVar1;
  for (; -1 < iVar1; iVar1 = iVar1 + -1) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar1);
    if (*(char *)(lVar2 + 0x21) != '\0') {
      FUN_004aed30(*(undefined8 *)(param_1 + 0xd10),iVar1,iVar3);
      iVar3 = iVar3 + -1;
    }
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

