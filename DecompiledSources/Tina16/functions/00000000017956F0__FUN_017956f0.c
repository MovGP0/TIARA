/* Ghidra address: 017956f0 */
/* Ghidra symbol: FUN_017956f0 */


void FUN_017956f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      if (*(char *)(lVar1 + 0x21) != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
        FUN_01795680(param_1,uVar2,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

