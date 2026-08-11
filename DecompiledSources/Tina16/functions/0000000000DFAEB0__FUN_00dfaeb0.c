/* Ghidra address: 00dfaeb0 */
/* Ghidra symbol: FUN_00dfaeb0 */


void FUN_00dfaeb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 1000);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x10))) {
    FUN_01b053c0((undefined8 *)(param_1 + 0x570),param_1 + 0x578,param_1 + 0x580);
    *(undefined1 *)(param_1 + 0x568) = 1;
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 1000) + 0x10);
    *(int *)(param_1 + 0x580) = iVar7 * 4;
    uVar3 = FUN_00409570((longlong)(iVar7 * 0x20));
    *(undefined8 *)(param_1 + 0x570) = uVar3;
    uVar3 = FUN_00409570((longlong)(*(int *)(param_1 + 0x580) * 8));
    *(undefined8 *)(param_1 + 0x578) = uVar3;
    iVar6 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 1000) + 0x10);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        puVar4 = (undefined4 *)
                 FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 1000),iVar5);
        lVar1 = *(longlong *)(param_1 + 0x578);
        iVar2 = iVar5 * 4;
        *(ulonglong *)(lVar1 + -8 + (longlong)(iVar2 + 1) * 8) = CONCAT44(iVar6,puVar4[1]);
        *(ulonglong *)(lVar1 + -8 + (longlong)(iVar2 + 2) * 8) = CONCAT44(iVar6,*puVar4);
        *(ulonglong *)(lVar1 + -8 + (longlong)(iVar2 + 3) * 8) = CONCAT44(puVar4[1],iVar6);
        *(ulonglong *)(lVar1 + -8 + (longlong)(iVar2 + 4) * 8) = CONCAT44(*puVar4,iVar6);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),iVar6,puVar4[1]);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),iVar6,*puVar4);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),puVar4[1],iVar6);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),*puVar4,iVar6);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

