/* Ghidra address: 019537d0 */
/* Ghidra symbol: FUN_019537d0 */


undefined8 FUN_019537d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_01951400();
  iVar6 = *(int *)(lVar2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar5);
      iVar1 = FUN_0043e420(param_2,*(undefined8 *)(lVar3 + 0x10));
      if (iVar1 == 0) {
        uVar4 = FUN_004aeac0(lVar2,iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

