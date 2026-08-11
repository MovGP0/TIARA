/* Ghidra address: 0179db60 */
/* Ghidra symbol: FUN_0179db60 */


void FUN_0179db60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  for (iVar2 = 1; iVar2 <= *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10) + -1; iVar2 = iVar2 + 1)
  {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar2);
    if (*(char *)(lVar1 + 0x21) != '\0') {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar2 + -1);
      if (*(char *)(lVar1 + 0x21) == '\0') {
        FUN_004aea00(*(undefined8 *)(param_1 + 0xd10),iVar2,iVar2 + -1);
      }
    }
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

