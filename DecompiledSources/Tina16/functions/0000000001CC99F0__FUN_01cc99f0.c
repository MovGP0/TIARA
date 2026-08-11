/* Ghidra address: 01cc99f0 */
/* Ghidra symbol: FUN_01cc99f0 */


ulonglong FUN_01cc99f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (bVar5) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))(*(longlong **)(param_1 + 0x18),8,1);
    iVar2 = *(int *)(param_1 + 0x50) << 4;
    lVar1 = FUN_004095c0(iVar2);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),lVar1,iVar2);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_00c43ad0(lVar1 + (longlong)iVar3 * 0x10,lVar1 + 8 + (longlong)iVar3 * 0x10);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00c45d50(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x1a),
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),lVar1);
    iVar4 = *(int *)(param_1 + 0x4c);
    *param_2 = *(undefined8 *)(lVar1 + (longlong)iVar4 * 0x10);
    *param_3 = *(undefined8 *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
    FUN_004095f0(lVar1,iVar2);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
}

