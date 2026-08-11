/* Ghidra address: 01be36d0 */
/* Ghidra symbol: FUN_01be36d0 */


undefined8 FUN_01be36d0(longlong *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  char local_81;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  int *local_68;
  int local_5c;
  undefined1 local_58 [8];
  int local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_28;
  longlong local_20;
  
  local_a0 = auStack_d8;
  local_28 = 0;
  if (*(char *)((longlong)param_1 + 0x592) == '\0') {
    (**(code **)(*param_1 + 1000))(param_1);
    local_20 = FUN_01be3560(&PTR_FUN_01be3360,1,param_1);
    do {
      local_b8 = 1;
      iVar3 = thunk_FUN_04166556(local_58,0,0,0);
      if (iVar3 == 0) {
        FUN_01be5120(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0xcc) = 0;
        if (((local_50[0] != 0x7b) || (cVar1 = FUN_004113d0(param_1[0xba]), cVar1 == '\0')) &&
           (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 ||
            (cVar1 = FUN_0080c7f0(*(undefined8 *)PTR_DAT_02004030), cVar1 == '\0')))) {
          cVar1 = FUN_01be2700(param_1);
          if (cVar1 == '\0') {
            if (local_50[0] < 0x100) {
              if (local_50[0] < 0xa2) {
                if (local_50[0] == 0xa1) {
                  local_78 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                  uVar4 = thunk_FUN_04129e10(local_78);
                  local_70 = FUN_006485b0(uVar4);
                  if (local_70 == 0) {
                    local_81 = '\0';
                  }
                  else {
                    local_80 = FUN_0064d3a0(local_70,&local_78);
                    local_b8 = local_b8 & 0xffffff00;
                    local_90 = FUN_00656230(local_70,&local_80);
                    local_81 = FUN_004113d0(local_90);
                  }
                  if (local_81 == '\0') {
                    (**(code **)(*param_1 + 0x408))(param_1);
                  }
                  *(char *)(param_1 + 0xcc) = local_81;
                  FUN_01be5380(param_1[0xba]);
                  thunk_FUN_040da573(local_58);
                }
                else {
                  if (local_50[0] == 0x10) goto LAB_01be3a7e;
                  if (local_50[0] == 0x12) {
                    *(undefined1 *)((longlong)param_1 + 0x592) = 0;
                    thunk_FUN_03fcecfa(local_48);
                  }
                  else {
                    if (local_50[0] != 0x4d) goto LAB_01be3cce;
                    sVar2 = FUN_007f9a50();
                    if (sVar2 == 0) {
                      uVar4 = FUN_01be0910(param_1[0xc9]);
                      lVar5 = FUN_01be2d90(uVar4);
                      if (lVar5 != 0) {
                        uVar4 = FUN_01be0910(param_1[0xc9]);
                        lVar5 = FUN_01be2d90(uVar4);
                        local_5c = *(int *)(lVar5 + 0xac);
                        if (local_5c == 0) {
                          local_5c = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) +
                                             0x2a8);
                        }
                        (**(code **)(*param_1 + 0x408))(param_1);
                        if ((*(byte *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) + 0x4d0)
                            & 8) == 0) {
                          FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030);
                        }
                        else {
                          FUN_0080db80(*(undefined8 *)PTR_DAT_02004030);
                        }
                      }
                    }
                  }
                }
              }
              else if ((local_50[0] == 0xa4) || (local_50[0] == 0xa7)) {
LAB_01be3a7e:
                (**(code **)(*param_1 + 0x408))(param_1);
                FUN_01be5380(param_1[0xba]);
                thunk_FUN_040da573(local_58);
              }
              else {
LAB_01be3cce:
                thunk_FUN_040cea4c(local_58);
                thunk_FUN_040da573(local_58);
              }
            }
            else if (local_50[0] < 0xb403) {
              if (local_50[0] == 0xb402) {
                FUN_01be2180(param_1);
              }
              else if (local_50[0] - 0x100U < 10) {
                if ((char)param_1[0x9f] == '\0') {
                  (**(code **)(*param_1 + 0x330))(param_1);
                }
                if ((local_50[0] == 0x104) && (CONCAT44(uStack_44,local_48) == 0x12)) {
                  (**(code **)(*param_1 + 0x408))(param_1);
                  *(undefined1 *)(param_1 + 0xc5) = 1;
                  thunk_FUN_040cea4c(local_58);
                  thunk_FUN_040da573(local_58);
                }
                else if ((CONCAT44(uStack_44,local_48) != 0x70) ||
                        ((sVar2 = FUN_007f9a50(), sVar2 == 4 &&
                         (cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar1 == '\0')))) {
                  local_68 = local_50;
                  plVar6 = (longlong *)FUN_01be0910(param_1[0xc9]);
                  (**(code **)(*plVar6 + -0x40))(plVar6);
                }
              }
              else {
                if (0xe < local_50[0] - 0x200U) {
                  if (local_50[0] == 0xb021) goto LAB_01be3a7e;
                  goto LAB_01be3cce;
                }
                if (local_50[0] == 0x20a) goto LAB_01be3d14;
                if (local_50[0] == 0x200) {
                  local_a8 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                  cVar1 = FUN_00498330(param_1 + 200);
                  if (cVar1 != '\0') goto LAB_01be3d14;
                }
                (**(code **)(*param_1 + 0x400))(param_1);
              }
            }
            else if (local_50[0] == 0xb403) {
              lVar5 = (**(code **)(*param_1 + 0x3a8))(param_1);
              param_1[0xcb] = lVar5;
            }
            else if (local_50[0] == 0xb404) {
              lVar5 = (**(code **)(*param_1 + 0x3b8))(param_1);
              param_1[0xcb] = lVar5;
            }
            else {
              if (local_50[0] != 0xb405) goto LAB_01be3cce;
              lVar5 = (**(code **)(*param_1 + 0x3b0))(param_1);
              param_1[0xcb] = lVar5;
            }
            if (*(char *)(local_20 + 0x78) == '\0') {
              FUN_01be1b30(param_1);
            }
          }
          else {
            thunk_FUN_040cea4c(local_58);
            thunk_FUN_040da573(local_58);
          }
        }
      }
LAB_01be3d14:
    } while ((*(char *)(local_20 + 0x78) == '\0') && (*(char *)((longlong)param_1 + 0x592) != '\0'))
    ;
    if (*(char *)(local_20 + 0x78) == '\0') {
      (**(code **)(*param_1 + 0x3c0))(param_1);
    }
    FUN_00410f20(local_20);
  }
  return local_28;
}

