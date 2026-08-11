/* Ghidra address: 01ae5650 */
/* Ghidra symbol: FUN_01ae5650 */


void FUN_01ae5650(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int extraout_var;
  int extraout_var_00;
  longlong lVar5;
  int extraout_var_01;
  int extraout_var_02;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_60 [4];
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  
  FUN_01ae5cb0();
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10);
  local_74 = 1;
  if (0 < iVar7) {
    do {
      iVar6 = local_74 + -1;
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
      cVar1 = FUN_004113d0(uVar2,&LAB_00f12330);
      if (cVar1 == '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01a5c280);
        if (cVar1 == '\0') {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
          cVar1 = FUN_004113d0(uVar2,&PTR_FUN_010ecd58);
          if (cVar1 == '\0') {
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
            cVar1 = FUN_004113d0(uVar2,&LAB_00f10748);
            if (cVar1 == '\0') {
              uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
              cVar1 = FUN_004113d0(uVar2,&PTR_FUN_010ef9a8);
              if (cVar1 == '\0') {
                uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01abefa0);
                if (cVar1 == '\0') {
                  iVar6 = local_74 + -1;
                  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                  cVar1 = FUN_004113d0(uVar2,&DAT_01ccbf00);
                  if (cVar1 != '\0') {
                    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                    uVar2 = FUN_01cd6670(uVar2);
                    if ((byte)uVar2 < 8) {
                      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
                               ((byte)uVar2 & 0x1f) & 0x30U) != 0;
                    }
                    else {
                      bVar8 = false;
                    }
                    if (bVar8) {
                      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                      FUN_01acfa60(*(undefined8 *)(lVar4 + 0x60));
                      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                      FUN_01aceb90(*(undefined8 *)(lVar4 + 0x60),1);
                      goto LAB_01ae5c67;
                    }
                  }
                  plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                  (**(code **)(*plVar3 + 0xc0))
                            (plVar3,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78))
                  ;
                  local_48 = *(undefined8 *)((longlong)plVar3 + 0x14);
                  local_40 = (int)*(undefined8 *)((longlong)plVar3 + 0x1c);
                  local_3c = (int)((ulonglong)*(undefined8 *)((longlong)plVar3 + 0x1c) >> 0x20);
                  _local_40 = CONCAT44(local_3c,local_40 + 100);
                  FUN_01a8dcd0(*(undefined8 *)(param_1 + 0x78),&local_48,param_1 + 0x98);
                  plVar3 = *(longlong **)(param_1 + 0x70);
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x180))(plVar3);
                  }
                }
                else {
                  plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                  if (plVar3[0xb] == 0) {
                    if (plVar3[10] != 0) {
                      lVar4 = plVar3[10];
                      lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                                        (*(longlong **)(lVar4 + 0x70),0);
                      iVar6 = FUN_004230d0(&local_48);
                      local_48 = CONCAT44(local_48._4_4_,(*(int *)(lVar5 + 0xe8) - iVar6 / 2) + 5);
                      lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                                        (*(longlong **)(lVar4 + 0x78),
                                         *(undefined4 *)(plVar3[10] + 0x94));
                      FUN_004230d0(&local_48);
                      FUN_004230d0(&local_48);
                      local_48 = CONCAT44((*(int *)(lVar5 + 0xec) - extraout_var_01) -
                                          extraout_var_02 / 2,(undefined4)local_48);
                      lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                                        (*(longlong **)(lVar4 + 0x70),0);
                      iVar6 = FUN_004230d0(&local_48);
                      _local_40 = CONCAT44(local_3c,*(int *)(lVar5 + 0xec) + iVar6 / 2);
                      lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                                        (*(longlong **)(lVar4 + 0x78),
                                         *(undefined4 *)(plVar3[10] + 0x94));
                      _local_40 = CONCAT44(*(int *)(lVar4 + 0xec) + -6,local_40);
                    }
                  }
                  else {
                    lVar4 = FUN_01abd500(plVar3[0xb]);
                    iVar6 = FUN_004230d0(&local_48);
                    local_48 = CONCAT44(local_48._4_4_,(*(int *)(lVar4 + 0xe8) - iVar6 / 2) + 5);
                    lVar4 = FUN_01abd550(plVar3[0xb],(longlong)iVar6 % 2 & 0xffffffff);
                    FUN_004230d0(&local_48);
                    FUN_004230d0(&local_48);
                    local_48 = CONCAT44((*(int *)(lVar4 + 0xec) - extraout_var) -
                                        extraout_var_00 / 2,(undefined4)local_48);
                    lVar4 = FUN_01abd500(plVar3[0xb],extraout_var_00 % 2);
                    iVar6 = FUN_004230d0(&local_48);
                    _local_40 = CONCAT44(local_3c,*(int *)(lVar4 + 0xec) + iVar6 / 2);
                    lVar4 = FUN_01abd550(plVar3[0xb],(longlong)iVar6 % 2 & 0xffffffff);
                    _local_40 = CONCAT44(*(int *)(lVar4 + 0xec) + -6,local_40);
                  }
                  FUN_01ac1cf0(plVar3,*(undefined8 *)(param_1 + 0x80),1);
                  (**(code **)(*plVar3 + 0xc0))
                            (plVar3,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78))
                  ;
                  FUN_01ac1cf0(plVar3,*(undefined8 *)(param_1 + 0x80),0);
                  FUN_01a8dcd0(*(undefined8 *)(param_1 + 0x78),&local_48,param_1 + 0x98);
                  plVar3 = *(longlong **)(param_1 + 0x70);
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x180))(plVar3);
                  }
                }
              }
              else {
                plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
                local_50 = FUN_00498310((int)plVar3[0x10],*(undefined4 *)((longlong)plVar3 + 0x84));
                (**(code **)(*plVar3 + 0xd8))
                          (plVar3,*(undefined8 *)(param_1 + 0x78),&local_50,
                           *(undefined8 *)(param_1 + 0x80));
              }
            }
            else {
              plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
              FUN_00f11460(plVar3,local_60);
              FUN_00f11460(plVar3,local_70);
              local_50 = FUN_00498310(local_60[0],local_6c);
              (**(code **)(*plVar3 + 0xd8))
                        (plVar3,*(undefined8 *)(param_1 + 0x78),&local_50,
                         *(undefined8 *)(param_1 + 0x80));
            }
          }
          else {
            plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
            local_50 = FUN_00498310((int)plVar3[0xd],*(undefined4 *)((longlong)plVar3 + 0x6c));
            (**(code **)(*plVar3 + 0xd8))
                      (plVar3,*(undefined8 *)(param_1 + 0x78),&local_50,
                       *(undefined8 *)(param_1 + 0x80));
          }
        }
        else {
          plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
          local_50 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          (**(code **)(*plVar3 + 0xd8))
                    (plVar3,*(undefined8 *)(param_1 + 0x78),&local_50,
                     *(undefined8 *)(param_1 + 0x80));
        }
      }
      else {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar6);
        local_50 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        (**(code **)(*plVar3 + 0xd8))
                  (plVar3,*(undefined8 *)(param_1 + 0x78),&local_50,*(undefined8 *)(param_1 + 0x80))
        ;
      }
LAB_01ae5c67:
      local_74 = local_74 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8));
  return;
}

