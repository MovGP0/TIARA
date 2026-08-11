/* Ghidra address: 01c3cd90 */
/* Ghidra symbol: FUN_01c3cd90 */


void FUN_01c3cd90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_48;
  int local_44;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_50 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28[0] = 0;
  local_30 = 0;
  local_38 = 0;
  lVar1 = *(longlong *)(param_1 + 0x920);
  puVar3 = auStack_a8;
  if (lVar1 != 0) {
    uVar5 = FUN_01c3cb30(param_1);
    cVar4 = FUN_01c28560(lVar1,uVar5);
    puVar3 = local_50;
    if (cVar4 == '\0') {
      FUN_01c3c530(param_1,&local_58);
      FUN_00441920(local_28,local_58);
      local_44 = 0;
      if (local_28[0] != 0) {
        local_44 = *(int *)(local_28[0] + -4);
      }
      local_3c = local_44;
      while ((0 < local_3c && (*(short *)(local_28[0] + -2 + (longlong)local_3c * 2) != 0x2e))) {
        local_3c = local_3c + -1;
      }
      if (0 < local_3c) {
        local_48 = 0;
        if (local_28[0] != 0) {
          local_48 = *(int *)(local_28[0] + -4);
        }
        FUN_00416e20(local_28,local_3c,(local_48 - local_3c) + 1);
      }
      FUN_01c3c530(param_1,&local_60);
      FUN_00414ad0(PTR_DAT_02003a40,local_60);
      (**(code **)(**(longlong **)PTR_DAT_02003930 + 0x90))(*(longlong **)PTR_DAT_02003930);
      uVar5 = FUN_01c3cb30(param_1);
      iVar6 = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),uVar5);
      uVar5 = FUN_01c3cb30(param_1);
      iVar7 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),uVar5);
      local_3c = iVar6;
      if (iVar6 <= iVar7) {
        iVar6 = (iVar7 - iVar6) + 1;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,local_3c);
          (**(code **)(**(longlong **)PTR_DAT_02003930 + 0x78))
                    (*(longlong **)PTR_DAT_02003930,local_68);
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      (**(code **)(**(longlong **)PTR_DAT_02002408 + 0x90))(*(longlong **)PTR_DAT_02002408);
      FUN_01c2fab0(local_28[0],L"[OpAmp]");
      (**(code **)(**(longlong **)PTR_DAT_02002408 + 0x18))
                (*(longlong **)PTR_DAT_02002408,local_28,1);
      FUN_01c27510(&local_30,local_28);
      FUN_01c27510(&local_30,local_28);
      uVar5 = FUN_01c3cb30(param_1);
      iVar6 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),uVar5);
      local_3c = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar5 = FUN_01c3cb30(param_1);
          FUN_01c27510(&local_70,local_28);
          FUN_01c285d0(*(undefined8 *)(param_1 + 0x920),uVar5,local_3c,local_70);
          local_3c = local_3c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_01c27510(&local_78,local_28);
      FUN_0043e1a0(&local_38,local_78);
      iVar6 = FUN_00416db0(L"<autoshape>",local_38);
      *(bool *)(*(longlong *)(param_1 + 0x920) + 0x28) = iVar6 == 0;
      puVar3 = local_50;
    }
  }
  local_50 = puVar3;
  FUN_00414560(&local_80,6);
  FUN_00414560(&local_38,3);
  return;
}

