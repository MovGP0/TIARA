/* Ghidra address: 01c074b0 */
/* Ghidra symbol: FUN_01c074b0 */


void FUN_01c074b0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  int local_20;
  int local_1c;
  
  local_70 = auStack_98;
  local_1c = 0;
  puVar1 = auStack_98;
  if (*(longlong *)(param_1 + 800) != 0) {
    local_60 = FUN_01bfd960(*(longlong *)(param_1 + 800));
    iVar3 = *(int *)(*(longlong *)(local_60 + 0x10) + 0x10);
    local_20 = 0;
    puVar1 = local_70;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
        lVar6 = FUN_01bfb960(uVar5,local_20);
        if (*(longlong *)(lVar6 + 0x80) != 0) {
          uVar5 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
          lVar6 = FUN_01bfb960(uVar5,local_20);
          if (*(char *)(*(longlong *)(lVar6 + 0x80) + 0x328) != '\0') {
            local_1c = local_20;
            puVar1 = local_70;
            break;
          }
        }
        local_20 = local_20 + 1;
        iVar3 = iVar3 + -1;
        puVar1 = local_70;
      } while (iVar3 != 0);
    }
  }
  local_70 = puVar1;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf2778);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
    if (cVar2 != '\0') {
      lVar6 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
      if (*(longlong *)(*(longlong *)(param_2 + 0x58) + 8) == lVar6) {
        iVar3 = FUN_004b1870(*(undefined8 *)(param_2 + 0x58));
        iVar4 = FUN_004b1870(*(undefined8 *)(param_1 + 800));
        if (iVar3 < iVar4) {
          local_1c = local_1c + -1;
        }
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))
                  (*(longlong **)(param_2 + 0x58),local_1c);
        lVar6 = FUN_01c07120(param_1);
        if ((*(char *)(lVar6 + 0x4c0) != '\0') && (DAT_01fe2178 != (longlong *)0x0)) {
          (**(code **)(*DAT_01fe2178 + 0x40))(DAT_01fe2178,*(undefined8 *)(param_2 + 0x58));
        }
      }
      else {
        uVar5 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))(*(longlong **)(param_2 + 0x58),uVar5);
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))
                  (*(longlong **)(param_2 + 0x58),local_1c);
        lVar6 = FUN_01c07120(param_1);
        FUN_01bfe240(*(undefined8 *)(param_2 + 0x58),
                     *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x4a0) + 0xe0) + 0x48));
      }
    }
  }
  else {
    local_68 = FUN_01c07120(param_1);
    *(short *)(local_68 + 0x318) = *(short *)(local_68 + 0x318) + 1;
    uVar5 = FUN_01c07120(param_1);
    plVar7 = (longlong *)FUN_01c019a0(uVar5);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    local_58 = FUN_004113f0(param_2,&PTR_FUN_01bf2778);
    iVar3 = FUN_01bfee50();
    local_20 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = FUN_01c07120(param_1);
        uVar5 = FUN_01c019a0(uVar5);
        local_28 = (longlong *)FUN_004b23b0(uVar5,local_1c);
        lVar6 = FUN_01c07120(param_1);
        FUN_01bfe240(local_28,*(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar6 + 0x4a0) + 0xe0) + 0x48));
        uVar5 = FUN_01bfee10(local_58,local_20);
        FUN_01bfde30(local_28,uVar5);
        (**(code **)(*local_28 + 0x28))(local_28,local_1c);
        local_20 = local_20 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar5 = FUN_01c07120(param_1);
    plVar7 = (longlong *)FUN_01c019a0(uVar5);
    (**(code **)(*plVar7 + 0x48))(plVar7);
    uVar5 = FUN_01c07120(param_1);
    FUN_00654410(uVar5);
  }
  uVar5 = FUN_01c07120(param_1);
  FUN_01bf6300(uVar5);
  local_48[0] = 0xb411;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00654c30(*(undefined8 *)(param_1 + 0x78),local_48);
  return;
}

