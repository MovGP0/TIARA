/* Ghidra address: 014c9450 */
/* Ghidra symbol: FUN_014c9450 */


void FUN_014c9450(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  FUN_004b67b0(*(undefined8 *)(param_1 + 0xf0),1);
  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x49) = 0;
  uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  FUN_004b67b0(*(undefined8 *)(param_1 + 0xe8),1);
  *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x49) = 0;
  uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
  uVar4 = _GetDDRChangeCount(uVar7,*(undefined4 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  iVar9 = *(int *)(param_1 + 0xe0);
  local_5c = 0;
  if (-1 < iVar9 + -1) {
    do {
      uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
      _GetDDRChangeRecord(uVar7,*(undefined4 *)(param_1 + 0xe4),local_5c,param_1 + 0x118,
                          param_1 + 0x110,param_1 + 0x10c,param_1 + 0x108,param_1 + 0x104);
      FUN_00442b00(local_40,*(undefined8 *)(param_1 + 0x110));
      FUN_00414b50(param_1 + 0xd8,local_40[0]);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        FUN_00414480(param_1 + 0xd0);
      }
      else {
        FUN_00442b00(&local_48,*(undefined8 *)(param_1 + 0x118));
        FUN_00414b50(param_1 + 0xd0,local_48);
      }
      *(undefined4 *)(param_1 + 0xc4) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x9c0) + 0x10);
      iVar5 = 0;
      iVar10 = *(int *)(param_1 + 0xc4);
      if (-1 < iVar10 + -1) {
        do {
          uVar7 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x9c0),iVar5);
          *(undefined8 *)(param_1 + 0xb8) = uVar7;
          *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x1c) = 0xffffffff;
          uVar1 = FUN_015755e0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x8d0),
                               *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18),param_1 + 0xf8)
          ;
          *(undefined1 *)(param_1 + 0xb7) = uVar1;
          iVar6 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0xa0),
                               *(undefined8 *)(param_1 + 0xd0));
          if ((((iVar6 == 0) && (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x49) != '\0')) &&
              (cVar2 = FUN_014c93e0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xd8))
              , cVar2 != '\0')) &&
             (*(int *)(*(longlong *)(param_1 + 0xf8) + 0x50) == *(int *)(param_1 + 0x10c))) {
            *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8);
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xa8);
            uVar3 = FUN_01d03160(*(undefined8 *)(param_1 + 0xa0));
            *(uint *)(param_1 + 0x9c) = (uint)uVar3;
            *(undefined4 *)(param_1 + 0x98) = 0;
            uVar4 = 1;
            iVar6 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x4c);
            if ((iVar6 == 0x800) || (iVar6 == 4)) {
              if (((*(char *)(*(longlong *)(param_1 + 0xb8) + 0x98) == '\0') ||
                  ((*(uint *)(param_1 + 0x104) & 1) == 0)) &&
                 ((*(char *)(*(longlong *)(param_1 + 0xb8) + 0x98) != '\0' ||
                  ((*(uint *)(param_1 + 0x104) & 1) != 0)))) {
                uVar4 = 0;
              }
              else if ((*(char *)(*(longlong *)(param_1 + 0xb8) + 0x98) != '\0') &&
                      ((*(uint *)(param_1 + 0x104) & 1) != 0)) {
                *(undefined4 *)(param_1 + 0x98) = 1;
              }
            }
            if (*(int *)(param_1 + 0x108) == 0) {
              if (*(int *)(param_1 + 0x9c) == 0x40a) {
                FUN_014c9130(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0),0,
                             *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18),
                             *(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x104));
              }
              if (*(int *)(param_1 + 0x9c) == 0x40b) {
                FUN_014c9130(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0),1,
                             *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18),
                             *(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x104));
                (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))
                          (*(longlong **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xd0));
              }
            }
            if (*(int *)(param_1 + 0x108) == 1) {
              if (*(int *)(param_1 + 0x9c) == 0x40a) {
                FUN_014c9130(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0),uVar4,
                             *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18),
                             *(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x104));
                (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))
                          (*(longlong **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xd0));
              }
              if (*(int *)(param_1 + 0x9c) == 0x40b) {
                FUN_014c9130(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0),
                             *(undefined4 *)(param_1 + 0x98),
                             *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18),
                             *(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x104));
              }
            }
          }
          iVar5 = iVar5 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x28))();
  local_5c = 0;
  if (-1 < iVar9 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                (*(longlong **)(param_1 + 0xf0),&local_50,local_5c);
      FUN_00414b50(param_1 + 0xd0,local_50);
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        uVar7 = FUN_014cdd30(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        FUN_00442620(uVar7,*(undefined8 *)(param_1 + 0xd0));
        uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        uVar8 = FUN_014cdd30(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        _mcu_act(uVar7,uVar8,0);
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))();
  local_5c = 0;
  if (-1 < iVar9 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))
                (*(longlong **)(param_1 + 0xe8),&local_58,local_5c);
      FUN_00414b50(param_1 + 0xd0,local_58);
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        uVar7 = FUN_014cdd30(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        FUN_00442620(uVar7,*(undefined8 *)(param_1 + 0xd0));
        uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        uVar8 = FUN_014cdd30(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
        _mcu_act(uVar7,uVar8,1);
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xe8));
    _ClearDDRChangeInfo(uVar7,*(undefined4 *)(param_1 + 0xe4));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe8));
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return;
}

