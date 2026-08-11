/* Ghidra address: 016cab70 */
/* Ghidra symbol: FUN_016cab70 */


void FUN_016cab70(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (((*(char *)(*(longlong *)(param_2 + 8) + 1) == 'D') &&
          (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x9a9) != '\0')) &&
         (*(longlong *)(param_1 + 0xf0) != 0)) {
        FUN_004169a0(&local_20,*(undefined8 *)(param_2 + 0x10));
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xb0))
                          (*(longlong **)(param_1 + 0xf0),local_20);
        if (iVar4 < 0) {
          uVar2 = FUN_016bc310(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_1 + 0xd8),0);
          FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,uVar2,0);
        }
        else {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x30))
                            (*(longlong **)(param_1 + 0xf0),iVar4);
          FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,uVar2,0);
        }
      }
      else {
        uVar2 = FUN_016bc310(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0x10),
                             *(undefined8 *)(param_1 + 0xd8),0);
        FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,uVar2,0);
      }
    }
    else {
      uVar2 = FUN_016bc310(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0x10),
                           *(undefined8 *)(param_1 + 0xd8),0);
      uVar3 = FUN_016bc310(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0x18),
                           *(undefined8 *)(param_1 + 0xd8),0);
      FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,uVar2,uVar3);
    }
  }
  else {
    lVar5 = FUN_016c4bb0(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_2 + 0x20),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x9b8));
    if (lVar5 == 0) {
      FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10),0xc,
                   *(undefined8 *)(param_2 + 0x20),0xffffffff);
    }
    else if (*(char *)(*(longlong *)(param_2 + 8) + 1) == 'V') {
      if (*(byte *)(param_2 + 0x30) == 0) {
        if ((*(byte *)(param_2 + 0x30) == 0) || (*(char *)(param_2 + 0x31) == '\0')) {
          lVar6 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),0);
          lVar5 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),1);
          FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined4 *)(lVar6 + 0x18),
                       *(undefined4 *)(lVar5 + 0x18));
        }
        else {
          lVar6 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),*(byte *)(param_2 + 0x30) - 1);
          lVar5 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),*(byte *)(param_2 + 0x31) - 1);
          FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined4 *)(lVar6 + 0x18),
                       *(undefined4 *)(lVar5 + 0x18));
        }
      }
      else {
        lVar5 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),*(byte *)(param_2 + 0x30) - 1);
        FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined4 *)(lVar5 + 0x18),0);
      }
    }
    else {
      if (*(byte *)(param_2 + 0x30) == 0) {
        lVar6 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),0);
        FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined4 *)(lVar6 + 0x18),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x998));
        lVar5 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),0);
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x998);
      }
      else {
        lVar6 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),*(byte *)(param_2 + 0x30) - 1);
        FUN_014e3bf0(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined4 *)(lVar6 + 0x18),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x998));
        lVar5 = FUN_01d347d0(*(undefined8 *)(lVar5 + 0x30),*(byte *)(param_2 + 0x30) - 1);
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x998);
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x998);
      *piVar1 = *piVar1 + 1;
    }
  }
  FUN_00414480(&local_20);
  return;
}

