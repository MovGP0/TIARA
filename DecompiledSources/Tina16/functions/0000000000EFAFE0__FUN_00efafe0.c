/* Ghidra address: 00efafe0 */
/* Ghidra symbol: FUN_00efafe0 */


void FUN_00efafe0(longlong param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar2 = FUN_00ef7f30(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),
                       *(undefined8 *)(param_1 + 0x368));
  if (1 < iVar2) {
    do {
      for (; (sVar1 = FUN_00ef8190(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),iVar3),
             sVar1 != param_2 && (iVar3 < iVar2)); iVar3 = iVar3 + 1) {
      }
      if ((iVar3 < iVar2) &&
         (sVar1 = FUN_00ef8190(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),iVar3),
         sVar1 == param_2)) {
        FUN_00ef7de0(*(longlong *)(param_1 + 0x308) + 8,iVar3,9,*(undefined8 *)(param_1 + 0x368));
      }
      for (; (sVar1 = FUN_00ef8190(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),iVar3),
             sVar1 != 5 && (iVar3 < iVar2)); iVar3 = iVar3 + 1) {
      }
    } while (iVar3 < iVar2);
  }
  return;
}

