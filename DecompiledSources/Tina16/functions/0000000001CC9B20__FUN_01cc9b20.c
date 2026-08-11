/* Ghidra address: 01cc9b20 */
/* Ghidra symbol: FUN_01cc9b20 */


bool FUN_01cc9b20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (bVar6) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_2,8);
    iVar4 = *(int *)(param_1 + 0x50) << 4;
    lVar2 = FUN_004095c0(iVar4);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),lVar2,iVar4);
    iVar5 = *(int *)(param_1 + 0x50);
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_00c43ad0(lVar2 + (longlong)iVar3 * 0x10,lVar2 + 8 + (longlong)iVar3 * 0x10);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00c45d50(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x1a),
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),lVar2);
    puVar1 = (undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 0x4c) * 0x10);
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    FUN_004095f0(lVar2,iVar4);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return bVar6;
}

