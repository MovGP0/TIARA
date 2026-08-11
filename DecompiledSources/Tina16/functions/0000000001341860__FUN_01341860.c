/* Ghidra address: 01341860 */
/* Ghidra symbol: FUN_01341860 */


void FUN_01341860(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) && (2 < *(int *)(param_1 + 0xc))) {
    uVar2 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1,*(longlong *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar2 = FUN_01cc6540(uVar2);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8),iVar5);
        if (*(char *)(param_1 + 0x27) == '\0') {
          FUN_01cc0ac0(lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
        }
        if (*(char *)(lVar3 + 8) == '\0') {
          *(undefined1 *)(lVar3 + 0x19) = 0;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(char *)(param_1 + 0x27) != '\0') {
      FUN_01341600(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                   *(undefined8 *)(param_1 + 0x28));
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      uVar2 = FUN_00b90650(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),
                           *(undefined8 *)(param_1 + 0x30));
      FUN_013d2f60(*(undefined8 *)(param_1 + 0x70),1,uVar2);
    }
    else {
      uVar2 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0xe8));
      _enable_preview(uVar2,2);
      uVar4 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0xe8));
      cVar1 = *(char *)(param_1 + 0x27);
      uVar2 = FUN_00b90650(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),
                           *(undefined8 *)(param_1 + 0x30));
      if (cVar1 != '\0') {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390);
      }
      _set_preview_time(uVar4,uVar2);
      FUN_015f7080(*(longlong *)(param_1 + 0x68) + 0xc0,*(longlong *)(param_1 + 0x68) + 200,0,
                   *(undefined8 *)(param_1 + 0x68),1);
      lVar3 = *(longlong *)(param_1 + 0x68);
      uVar2 = FUN_00b90650(*(undefined8 *)(lVar3 + 0x390),*(undefined8 *)(param_1 + 0x30));
      FUN_013e5a30(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(lVar3 + 0xc0),1,uVar2);
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390);
    if (*(longlong *)PTR_DAT_02004a28 == 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x1418);
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(longlong *)PTR_DAT_02004a28 + 0x24);
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}

