/* Ghidra address: 019c79a0 */
/* Ghidra symbol: FUN_019c79a0 */


void FUN_019c79a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_bc;
  uint local_b8 [2];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78 = 0;
  local_70[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  if (((param_2 != 0) && (param_4 != (longlong *)0x0)) &&
     (lVar4 = FUN_014860c0(param_2,L"components"), lVar4 != 0)) {
    iVar9 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10);
    local_bc = 0;
    if (-1 < iVar9 + -1) {
      do {
        lVar6 = *(longlong *)(lVar4 + 0x10);
        if (*(uint *)(lVar6 + 0x10) <= local_bc) {
          FUN_00594f90();
        }
        uVar5 = FUN_004113f0(*(undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)(int)local_bc * 8)
                             ,&LAB_00f23b78);
        FUN_014861c0(uVar5,&local_30,L"label");
        lVar6 = FUN_014860c0(uVar5,L"pins");
        FUN_00419260(&local_50,&DAT_019c7958,1,
                     (longlong)*(int *)(*(longlong *)(lVar6 + 0x10) + 0x10));
        iVar10 = *(int *)(*(longlong *)(lVar6 + 0x10) + 0x10);
        uVar7 = 0;
        if (-1 < iVar10 + -1) {
          do {
            lVar1 = *(longlong *)(lVar6 + 0x10);
            if (*(uint *)(lVar1 + 0x10) <= uVar7) {
              FUN_00594f90();
            }
            plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar7 * 8);
            (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
            uVar3 = FUN_004586b0(local_60);
            *(undefined4 *)(local_50 + (longlong)(int)uVar7 * 4) = uVar3;
            uVar7 = uVar7 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        FUN_00414480(&local_58);
        FUN_00414480();
        iVar10 = 0;
        if (local_50 != 0) {
          iVar10 = (int)*(undefined8 *)(local_50 + -8);
        }
        iVar8 = 0;
        if (iVar10 - 1U < 0x80000000) {
          do {
            if (0 < iVar8) {
              FUN_00416ad0(&local_58,&DAT_019c7dec);
              FUN_00416ad0(&local_40,&DAT_019c7dec);
            }
            FUN_0043f750(local_70,*(undefined4 *)(local_50 + (longlong)iVar8 * 4));
            FUN_00416ad0(&local_58,local_70[0]);
            FUN_019c7730(param_1,&local_48,param_3,local_30,iVar8);
            FUN_00416ad0(&local_40,local_48);
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        local_b8[0] = local_bc;
        local_b0 = 0;
        local_a8 = local_30;
        local_a0 = 0x11;
        local_98 = local_58;
        local_90 = 0x11;
        local_88 = local_40;
        local_80 = 0x11;
        FUN_00442f70(&local_78,L"%d: %s(%s) [pin_names: %s]",local_b8,3);
        (**(code **)(*param_4 + 0x78))(param_4,local_78);
        local_bc = local_bc + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_60,2);
  FUN_00419430(&local_50,&DAT_019c7958);
  FUN_00414560(&local_48,4);
  return;
}

