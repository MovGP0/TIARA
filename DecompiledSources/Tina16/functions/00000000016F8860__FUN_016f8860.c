/* Ghidra address: 016f8860 */
/* Ghidra symbol: FUN_016f8860 */


void FUN_016f8860(longlong param_1,byte param_2,char param_3,undefined8 param_4,longlong *param_5,
                 longlong param_6,longlong param_7)

{
  undefined7 uVar3;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  local_50 = 0;
  FUN_0041b910(param_5);
  if (param_6 == 0) {
    param_6 = *(longlong *)(param_1 + 0xb0);
  }
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  if ((*PTR_DAT_02003ed0 == '\0') || (param_3 != '\x06')) {
    uVar5 = 0;
    lVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x691)) {
      uVar6 = uVar5;
      if (param_3 == '\b') {
        FUN_01cc47e0(param_6,param_4);
        uVar6 = 0;
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          uVar10 = FUN_00409570((longlong)(*(int *)(param_1 + 0x691) << 4));
          *(undefined8 *)(param_1 + 0x1a0) = uVar10;
          uVar6 = uVar5;
        }
      }
      else {
        FUN_01cc4620(param_6,param_4);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          uVar10 = FUN_00409570((longlong)(*(int *)(param_1 + 0x691) * 8));
          *(undefined8 *)(param_1 + 0x1a0) = uVar10;
        }
      }
      for (; (int)uVar6 < *(int *)(param_1 + 0x691); uVar6 = uVar6 + 1) {
        lVar2 = *(longlong *)(param_1 + 0x4f0);
        if (*(uint *)(lVar2 + 0x10) <= uVar6) {
          FUN_00594f90();
        }
        lVar8 = (longlong)(int)uVar6;
        if (**(char **)(*(longlong *)(lVar2 + 8) + lVar8 * 8) != '\0') {
          if (param_3 == '\b') {
            if (param_5 == (longlong *)0x0) {
              lVar2 = *(longlong *)(param_1 + 0x4f0);
              if (*(uint *)(lVar2 + 0x10) <= uVar6) {
                FUN_00594f90();
              }
              FUN_017c8650(local_48,param_1,*(undefined8 *)(*(longlong *)(lVar2 + 8) + lVar8 * 8));
            }
            else {
              lVar2 = *(longlong *)(param_1 + 0x4f0);
              if (*(uint *)(lVar2 + 0x10) <= uVar6) {
                FUN_00594f90();
              }
              (**(code **)(*param_5 + 0x18))
                        (param_5,local_48,*(undefined8 *)(*(longlong *)(lVar2 + 8) + lVar8 * 8));
            }
            uVar10 = FUN_00c44590(local_48);
            uVar11 = FUN_00c445d0(local_48);
            if (param_7 == 0) {
              lVar2 = *(longlong *)(param_1 + 0x1a0);
              *(undefined8 *)(lVar2 + (longlong)(int)(uVar6 * 2) * 8) = uVar10;
              *(undefined8 *)(lVar2 + (longlong)(int)(uVar6 * 2 + 1) * 8) = uVar11;
            }
            else {
              *(undefined8 *)(param_7 + (longlong)(int)(uVar6 * 2) * 8) = uVar10;
              *(undefined8 *)(param_7 + (longlong)(int)(uVar6 * 2 + 1) * 8) = uVar11;
            }
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x4f0);
            if (*(uint *)(lVar2 + 0x10) <= uVar6) {
              FUN_00594f90();
            }
            uVar10 = FUN_017c83b0(param_1,*(undefined8 *)(*(longlong *)(lVar2 + 8) + lVar8 * 8));
            if (param_7 == 0) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + lVar8 * 8) = uVar10;
            }
            else {
              *(undefined8 *)(param_7 + lVar8 * 8) = uVar10;
            }
          }
        }
      }
      if (param_3 == '\b') {
        if (param_7 == 0) {
          lVar2 = FUN_01cc4b70(param_6,*(undefined8 *)(param_1 + 0x1a0),
                               *(undefined4 *)(param_1 + 0x691));
        }
        else {
          lVar2 = FUN_01cc4b70(param_6,param_7,*(undefined4 *)(param_1 + 0x691));
        }
      }
      else if (param_7 == 0) {
        lVar2 = FUN_01cc4700(param_6,*(undefined8 *)(param_1 + 0x1a0),
                             *(undefined4 *)(param_1 + 0x691));
      }
      else {
        lVar2 = FUN_01cc4700(param_6,param_7,*(undefined4 *)(param_1 + 0x691));
      }
    }
    if (param_2 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << (param_2 & 0x1f) & 0xfU) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      if (*(byte *)(param_1 + 0x108) < 8) {
        bVar9 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x108) & 0x1f) & 3U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        FUN_016f75f0(param_1,param_3,param_4);
      }
    }
  }
  else {
    **(undefined8 **)(DAT_0210fee8 + 0x30) = param_4;
    iVar4 = 1;
    iVar7 = DAT_0210fef0;
    if (0 < DAT_0210fef0) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x4f0);
        if (*(uint *)(lVar2 + 0x10) <= iVar4 - 1U) {
          FUN_00594f90();
        }
        uVar10 = FUN_017c83b0(param_1,*(undefined8 *)
                                       (*(longlong *)(lVar2 + 8) + (longlong)(int)(iVar4 - 1U) * 8))
        ;
        *(undefined8 *)(*(longlong *)(DAT_0210fee8 + 0x30) + (longlong)iVar4 * 8) = uVar10;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_00da9bf0(DAT_0210fee8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_01cc4620(param_6,*puVar1);
      uVar10 = FUN_01cc4700(param_6,puVar1 + 1,DAT_0210fef0);
      if (param_2 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << (param_2 & 0x1f) & 0xdU) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        if (*(byte *)(param_1 + 0x108) < 8) {
          bVar9 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x108) & 0x1f) & 3U) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          FUN_016f75f0(param_1,6,*puVar1);
        }
      }
    }
  }
  FUN_00414480(&local_50);
  FUN_0041b800(&param_5);
  return;
}

