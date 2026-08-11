/* Ghidra address: 007023c0 */
/* Ghidra symbol: FUN_007023c0 */


undefined8 FUN_007023c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x4b0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b0),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_006cb0d0);
      if ((cVar1 != '\0') &&
         (lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b0),iVar4),
         *(longlong *)(lVar3 + 0x328) != 0)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

