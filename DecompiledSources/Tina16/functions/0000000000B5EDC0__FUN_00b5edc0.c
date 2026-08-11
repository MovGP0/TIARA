/* Ghidra address: 00b5edc0 */
/* Ghidra symbol: FUN_00b5edc0 */


void FUN_00b5edc0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  byte local_2b;
  ushort local_2a;
  
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  if (((-1 < *(int *)(param_1 + 0x48)) && (-1 < *(int *)(param_1 + 0x4c))) &&
     (-1 < *(int *)(param_1 + 0x50))) {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2a);
    FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2b);
    bVar8 = (local_2b & 1) == 1;
    FUN_004144d0(&local_38);
    bVar1 = false;
    for (iVar7 = 0; iVar7 < (int)(uint)local_2a; iVar7 = iVar7 + iVar6) {
      iVar3 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
      if (iVar3 == 0) {
        cVar2 = FUN_00b5ca90(param_1);
        if (cVar2 == '\0') break;
        iVar3 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
        if (iVar3 < 1) {
          cVar2 = FUN_00b5ca90(param_1);
          if (cVar2 == '\0') break;
        }
        FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_2b);
        bVar8 = (local_2b & 1) == 1;
        iVar3 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
      }
      if (bVar8) {
        if (!bVar1) {
          FUN_00b14ea0(local_50,&local_38);
          FUN_00414c70(&local_38,local_50[0]);
          bVar1 = true;
        }
        iVar6 = iVar3 / 2;
        if ((int)((uint)local_2a - iVar7) <= iVar3 / 2) {
          iVar6 = (uint)local_2a - iVar7;
        }
        FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_40,iVar6 * 2);
      }
      else {
        iVar6 = iVar3;
        if ((int)((uint)local_2a - iVar7) <= iVar3) {
          iVar6 = (uint)local_2a - iVar7;
        }
        FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_40,iVar6);
        if (bVar1) {
          FUN_00b14ea0(&local_58,&local_40);
          FUN_00414c70(&local_40,local_58);
        }
      }
      FUN_004155b0(&local_38,local_40);
    }
    lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    if (bVar1) {
      uVar5 = FUN_00b4fb40(*(undefined8 *)(lVar4 + 0x10),*(undefined2 *)(param_1 + 0x48),
                           *(undefined2 *)(param_1 + 0x4c));
      FUN_00b15310(&local_60,local_38);
      FUN_004689d0(&local_78,local_60);
      FUN_00b4f030(uVar5,&local_78);
    }
    else {
      uVar5 = FUN_00b4fb40(*(undefined8 *)(lVar4 + 0x10),*(undefined2 *)(param_1 + 0x48),
                           *(undefined2 *)(param_1 + 0x4c));
      FUN_00468910(&local_90,local_38);
      FUN_00b4f030(uVar5,&local_90);
    }
    uVar5 = FUN_00b4fb40(*(undefined8 *)(lVar4 + 0x10),*(undefined2 *)(param_1 + 0x48),
                         *(undefined2 *)(param_1 + 0x4c));
    FUN_00b5d680(param_1,uVar5,*(undefined2 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00417840(&local_90,&DAT_004013d8,2);
  FUN_00414520(&local_60);
  FUN_00414590(&local_58,2);
  FUN_00414590(&local_40,2);
  return;
}

