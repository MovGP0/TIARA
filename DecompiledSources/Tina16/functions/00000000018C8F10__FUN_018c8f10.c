/* Ghidra address: 018c8f10 */
/* Ghidra symbol: FUN_018c8f10 */


void FUN_018c8f10(longlong param_1,longlong param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  char local_c1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_60;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_90 = 0;
  local_d0 = param_2;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x1a8) + 0x20)
      == '\0') {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x288) == '\0') {
    local_d8 = 0;
    local_d4 = 0;
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90);
    cVar6 = FUN_004113d0(local_d0,&PTR_FUN_01934910);
    if (cVar6 == '\0') {
      local_e0 = *(longlong *)(local_d0 + 0x208);
    }
    else {
      local_e0 = *(longlong *)(local_d0 + 0x240);
    }
    iVar8 = *(int *)(local_e0 + 0x10);
    local_e4 = 0;
    if (-1 < iVar8 + -1) {
      do {
        local_80 = FUN_004aeac0(local_e0,local_e4);
        plVar2 = *(longlong **)(local_80 + 600);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x2f8))(plVar2);
          *(undefined4 *)(local_80 + 0x228) = 1;
          *(undefined4 *)(local_80 + 0x22c) = 1;
          FUN_019694e0(local_80,1);
          local_c1 = '\x01';
          bVar5 = false;
          FUN_018c7b00(*(undefined8 *)(param_1 + 0x40),local_80);
          local_84 = 0;
          uVar10 = 0;
          local_60 = 0;
          local_50 = 0;
          local_70 = 0;
          local_74 = 0;
          FUN_0197f740(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38) + 0x48));
          while (cVar6 = (**(code **)(**(longlong **)(local_80 + 600) + 0x310))
                                   (*(longlong **)(local_80 + 600)), cVar6 == '\0') {
            if (((bVar5) && (*(char *)(local_80 + 0x272) != '\0')) &&
               (*(longlong *)(local_80 + 0x210) != 0)) {
              FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
              bVar5 = false;
            }
            FUN_0043ea00(&local_90,*(undefined8 *)(local_80 + 0x268));
            if (local_90 == 0) {
              cVar6 = '\x01';
            }
            else {
              FUN_01970cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40),&local_a8,
                           *(undefined8 *)(local_80 + 0x268),0);
              FUN_00468820(&local_c0,1);
              cVar6 = FUN_0046f320(&local_a8,&local_c0);
            }
            if ((cVar6 != '\0') &&
               (cVar6 = FUN_018c79b0(*(undefined8 *)(param_1 + 0x40),local_80,
                                     *(undefined1 *)(local_80 + 0x274)), cVar6 != '\0')) {
              if (local_c1 == '\0') {
                if (((*(longlong *)(local_80 + 0x220) == 0) && (*(char *)(local_80 + 0x273) != '\0')
                    ) && (!bVar5)) {
                  FUN_018cf230(*(undefined8 *)(param_1 + 0x40),local_80,0);
                }
              }
              else {
                if ((*(char *)(local_80 + 0x272) != '\0') && (*(longlong *)(local_80 + 0x210) != 0))
                {
                  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0xd8) != '\0') {
                    *(bool *)(*(longlong *)(param_1 + 0x40) + 0xd8) =
                         *(char *)(*(longlong *)(param_1 + 0x40) + 0xdb) == '\0';
                  }
                  *(bool *)(*(longlong *)(param_1 + 0x40) + 0xf2) =
                       *(char *)(*(longlong *)(param_1 + 0x40) + 0xd8) == '\0';
                  if ((1 < *(int *)(local_80 + 0x250)) && (*(int *)(local_80 + 0x254) == 1)) {
                    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
                    local_84 = (**(code **)(*plVar2 + 0xd0))(plVar2);
                    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90);
                  }
                  FUN_018cf230(*(undefined8 *)(param_1 + 0x40),local_80,0);
                  bVar5 = true;
                }
                FUN_018cb3b0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x210));
                (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                          (*(longlong **)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x210));
                if ((*(char *)(local_80 + 0x273) != '\0') && (!bVar5)) {
                  FUN_018cf230(*(undefined8 *)(param_1 + 0x40),local_80,0);
                }
              }
              lVar3 = *(longlong *)(local_80 + 0x220);
              if (lVar3 != 0) {
                if (local_c1 == '\0') {
                  local_f8 = uVar9;
                  FUN_018c8420(*(undefined8 *)(param_1 + 0x40),local_80,lVar3,local_d4);
                }
                else {
                  local_f8 = CONCAT71(local_f8._1_7_,1);
                  FUN_018c7d80(*(undefined8 *)(param_1 + 0x40),local_80,lVar3,0);
                }
              }
              if (*(char *)(local_80 + 0x271) != '\0') {
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
                local_d8 = (**(code **)(*plVar2 + 0xd0))(plVar2);
              }
              if ((1 < *(int *)(local_80 + 0x250)) && (*(int *)(local_80 + 0x254) == 1)) {
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
                local_d4 = (**(code **)(*plVar2 + 0xd0))(plVar2);
              }
              uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90);
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) =
                   *(undefined4 *)(local_80 + 0x228);
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14) =
                   *(undefined4 *)(local_80 + 0x22c);
              local_60 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                                   (*(longlong **)(param_1 + 0x40),local_80);
              *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xf2) = 0;
              FUN_018c8920(*(undefined8 *)(param_1 + 0x40),local_80);
              if ((local_c1 != '\0') &&
                 ((((*(char *)(local_80 + 0x271) == '\0' || (*(longlong *)(local_80 + 0x218) == 0))
                   && (*(char *)(local_80 + 0x272) != '\0')) &&
                  (*(longlong *)(local_80 + 0x210) != 0)))) {
                FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
                bVar5 = false;
              }
              local_c1 = '\0';
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0xe0);
              (**(code **)(*plVar2 + 0x80))
                        (plVar2,*(undefined8 *)(local_80 + 0x10),
                         (longlong)*(int *)(local_80 + 0x22c));
              *(int *)(local_80 + 0x228) = *(int *)(local_80 + 0x228) + 1;
              *(int *)(local_80 + 0x22c) = *(int *)(local_80 + 0x22c) + 1;
              local_f8 = uVar9;
              local_f0 = uVar10;
              FUN_018c8690(*(undefined8 *)(param_1 + 0x40),local_80,local_d4);
              FUN_018cf3c0(*(undefined8 *)(param_1 + 0x40),local_80);
              FUN_018c8f10(param_1,local_80);
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0xe0);
              iVar7 = (**(code **)(*plVar2 + 0x28))(plVar2);
              (**(code **)(*plVar2 + 0x98))(plVar2,iVar7 + -1);
              FUN_018cf630(*(undefined8 *)(param_1 + 0x40),local_80);
              *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xd8) = 0;
              if (*(char *)(local_80 + 0x270) != '\0') {
                if (*(char *)(local_80 + 0x271) == '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                            (*(longlong **)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x218));
                }
                else {
                  FUN_018cf230(*(undefined8 *)(param_1 + 0x40),local_80,local_d8);
                  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xf0) = 1;
                  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                            (*(longlong **)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x218));
                  FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
                  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xf0) = 0;
                }
              }
            }
            if (((*(longlong *)(local_80 + 0x220) == 0) && (*(char *)(local_80 + 0x273) != '\0')) &&
               (!bVar5)) {
              FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
            }
            (**(code **)(**(longlong **)(local_80 + 600) + 0x300))(*(longlong **)(local_80 + 600));
            if (((*(int *)(local_80 + 0x278) != 0) &&
                (*(int *)(local_80 + 0x278) < *(int *)(local_80 + 0x228))) ||
               (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x288) != '\0'))
            break;
          }
          FUN_019694e0(local_80,*(undefined4 *)(local_80 + 0x250));
          local_f8 = uVar9;
          local_f0 = uVar10;
          FUN_018c8690(*(undefined8 *)(param_1 + 0x40),local_80,local_d4);
          if (((*(char *)(local_80 + 0xc5) == '\0') && (1 < *(int *)(local_80 + 0x250))) &&
             (pdVar1 = (double *)(*(longlong *)(param_1 + 0x40) + 0x90),
             *pdVar1 <= *(double *)(local_80 + 0x290) && *(double *)(local_80 + 0x290) != *pdVar1))
          {
            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90) =
                 *(undefined8 *)(local_80 + 0x290);
          }
          puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + 0x38);
          local_4c = (**(code **)*puVar4)(puVar4);
          if (local_60 != 0) {
            if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) == 0) {
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
              local_50 = (**(code **)(*plVar2 + 0xd0))(plVar2);
              plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38) + 0x18);
              local_70 = (**(code **)(*plVar2 + 0x60))(plVar2);
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
              local_74 = (**(code **)(*plVar2 + 0xd8))(plVar2);
              *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x169) = 1;
            }
            else {
              FUN_018c8b70(auStack_118,0);
            }
          }
          if (local_c1 == '\0') {
            if (*(longlong *)(local_80 + 0x220) != 0) {
              FUN_018c7fc0(*(undefined8 *)(param_1 + 0x40),*(longlong *)(local_80 + 0x220),0);
            }
            if (*(char *)(*(longlong *)(param_1 + 0x40) + 0xf1) != '\0') {
              FUN_018cb4f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x210));
            }
            if (*(char *)(local_80 + 0x270) == '\0') {
              if ((*(char *)(local_80 + 0x271) != '\0') && (!bVar5)) {
                FUN_018cf230(*(undefined8 *)(param_1 + 0x40),local_80,local_d8);
              }
              *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xf0) = 1;
              (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                        (*(longlong **)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x218));
              if (*(char *)(local_80 + 0x271) != '\0') {
                FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
              }
              *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xf0) = 0;
            }
            FUN_018cb4f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(local_80 + 0x210));
            if ((*(longlong *)(local_80 + 0x220) != 0) && (*(char *)(local_80 + 0x273) != '\0')) {
              FUN_018cf2f0(*(undefined8 *)(param_1 + 0x40),local_80);
            }
          }
          if ((local_60 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) == 0)) {
            FUN_018c8b70(auStack_118,1);
          }
          FUN_0197f7b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38) + 0x48));
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x288) != '\0') break;
          *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xd8) = 0;
        }
        local_e4 = local_e4 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_00417840(&local_c0,&DAT_004013d8,2);
  FUN_00414480(&local_90);
  return;
}

