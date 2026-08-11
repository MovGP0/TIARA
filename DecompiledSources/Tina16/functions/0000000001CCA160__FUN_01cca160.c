/* Ghidra address: 01cca160 */
/* Ghidra symbol: FUN_01cca160 */


bool FUN_01cca160(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_30;
  
  local_30 = 0;
  bVar8 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (bVar8) {
      lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x80));
      iVar6 = *(int *)(param_1 + 0x24);
      *param_2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar6 * 9);
      *param_3 = *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 8 + (longlong)iVar6 * 9);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  else if (bVar8) {
    FUN_004169f0(param_3,*(undefined4 *)(param_1 + 0x84));
    lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x80));
    *param_2 = *(undefined8 *)
                (*(longlong *)(lVar3 + 0x18) + (longlong)*(int *)(param_1 + 0x24) * 0x6c);
    iVar7 = 1;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
    if (0 < iVar6) {
      do {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))
                          (*(longlong **)(param_1 + 0x90));
        if (iVar2 == 0) {
LAB_01cca2db:
          uVar1 = FUN_01aa0a40(*(undefined1 *)
                                (*(longlong *)(lVar3 + 0x18) + 7 +
                                 (longlong)*(int *)(param_1 + 0x24) * 0x6c + (longlong)iVar6));
          lVar5 = FUN_00414de0(param_3);
          *(undefined2 *)(lVar5 + -2 + (longlong)iVar7 * 2) = uVar1;
          iVar7 = iVar7 + 1;
        }
        else {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x88),iVar6 + -1);
          FUN_01cc0ae0(uVar4,&local_30);
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xb0))
                            (*(longlong **)(param_1 + 0x90),local_30);
          if (-1 < iVar2) goto LAB_01cca2db;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  FUN_00414480(&local_30);
  return bVar8;
}

