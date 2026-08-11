/* Ghidra address: 00af6960 */
/* Ghidra symbol: FUN_00af6960 */


void FUN_00af6960(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    if ((param_2 != *(int *)(*(longlong *)(param_1 + 0x8a8) + 0x10)) && (-1 < param_2)) {
      iVar2 = FUN_00affcf0(*(longlong *)(param_1 + 0x8a8));
      if (param_2 < iVar2) {
        if (*(longlong *)(param_1 + 0x8b8) != 0) {
          lVar4 = FUN_00affd90(*(longlong *)(param_1 + 0x8a8),
                               *(undefined4 *)(*(longlong *)(param_1 + 0x8a8) + 0x10));
          FUN_00414ad0(lVar4 + 8,*(undefined8 *)(param_1 + 0x8b8));
          FUN_00414ad0(lVar4 + 0x10,*(undefined8 *)(param_1 + 0x8e0));
          uVar3 = FUN_00af5fb0(param_1);
          *(undefined4 *)(lVar4 + 0x18) = uVar3;
          *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x8c0);
          uVar5 = FUN_00afebf0(param_1);
          lVar4 = *(longlong *)(param_1 + 0x8a8);
          uVar3 = FUN_00affd30(lVar4,*(undefined8 *)(param_1 + 0x8b8),*(undefined4 *)(lVar4 + 0x10))
          ;
          lVar4 = FUN_00affd90(lVar4,uVar3);
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
        }
        lVar4 = FUN_00affd90(*(undefined8 *)(param_1 + 0x8a8),param_2);
        *(int *)(*(longlong *)(param_1 + 0x8a8) + 0x10) = param_2;
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(lVar4 + 8));
        if ((iVar2 != 0) || (*(char *)(param_1 + 0x8c0) != *(char *)(lVar4 + 0x1c))) {
          FUN_00af2060(param_1,lVar4);
        }
        FUN_00af6000(param_1,*(undefined4 *)(lVar4 + 0x18));
        uVar5 = *(undefined8 *)(param_1 + 0x8a8);
        uVar3 = FUN_00affd30(uVar5,*(undefined8 *)(lVar4 + 8),param_2);
        lVar4 = FUN_00affd90(uVar5,uVar3);
        FUN_00afec50(param_1,*(undefined8 *)(lVar4 + 0x20));
        FUN_00410f20(*(undefined8 *)(lVar4 + 0x20));
        *(undefined8 *)(lVar4 + 0x20) = 0;
        if (*(longlong *)(param_1 + 0x558) != 0) {
          (**(code **)(param_1 + 0x558))(*(undefined8 *)(param_1 + 0x560),param_1);
        }
      }
    }
  }
  return;
}

