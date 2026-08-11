/* Ghidra address: 011110d0 */
/* Ghidra symbol: FUN_011110d0 */


void FUN_011110d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  byte local_b9;
  undefined *local_b8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined1 local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 local_8a [90];
  
  local_94 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  local_b9 = 0;
  ppuVar9 = &PTR_u_MPPLAY_01f22678;
  do {
    bVar5 = 0;
    ppuVar8 = &PTR_s_E_01f22660;
    do {
      uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
      uVar6 = (ulonglong)local_b9;
      uVar7 = (ulonglong)bVar5;
      *(undefined8 *)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8) = uVar4;
      local_b8 = *ppuVar8;
      local_b0 = 10;
      local_a8 = *ppuVar9;
      local_a0 = 10;
      uVar4 = FUN_00442dd0(local_8a,L"%s_%s",&local_b8,1);
      uVar4 = thunk_FUN_041628f5(PTR_IMAGE_DOS_HEADER_0200c280,uVar4);
      FUN_0060b650(*(undefined8 *)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8),uVar4);
      plVar1 = *(longlong **)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8);
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
      if (*(int *)(param_1 + 0x5d8) < iVar2) {
        plVar1 = *(longlong **)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8);
        uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
        *(undefined4 *)(param_1 + 0x5d8) = uVar3;
      }
      plVar1 = *(longlong **)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8);
      iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
      if (*(int *)(param_1 + 0x5dc) < iVar2) {
        plVar1 = *(longlong **)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8);
        uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        *(undefined4 *)(param_1 + 0x5dc) = uVar3;
      }
      plVar1 = *(longlong **)(param_1 + 0x4a0 + uVar6 * 0x20 + uVar7 * 8);
      (**(code **)(*plVar1 + 0x80))(plVar1,1);
      bVar5 = bVar5 + 1;
      ppuVar8 = ppuVar8 + 1;
    } while (bVar5 != 3);
    local_b9 = local_b9 + 1;
    ppuVar9 = ppuVar9 + 1;
  } while (local_b9 != 9);
  *(int *)(param_1 + 0x5d8) = *(int *)(param_1 + 0x5d8) + 8;
  *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x5dc) + 4;
  return;
}

