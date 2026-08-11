/* Ghidra address: 00557000 */
/* Ghidra symbol: FUN_00557000 */


int FUN_00557000(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 8;
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    iVar7 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + -8);
  }
  iVar6 = 4;
  if (3 < iVar7 + -1) {
    iVar7 = iVar7 + -4;
    do {
      uVar4 = FUN_00536180(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x20);
      cVar1 = FUN_00535260(uVar4,*(undefined1 *)(param_1 + 0xd8),0);
      if (cVar1 == '\0') {
        uVar2 = FUN_005361d0(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x20);
        iVar3 = FUN_00535770(uVar2);
        iVar5 = iVar5 + iVar3;
      }
      else {
        iVar5 = iVar5 + 8;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return iVar5;
}

