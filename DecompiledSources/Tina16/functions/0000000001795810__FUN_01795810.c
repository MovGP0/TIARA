/* Ghidra address: 01795810 */
/* Ghidra symbol: FUN_01795810 */


void FUN_01795810(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0xd28) + 0x10))(*(longlong **)(param_1 + 0xd28));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      if (*(char *)(lVar1 + 0x21) != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd28),uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

