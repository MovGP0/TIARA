/* Ghidra address: 00bf8d00 */
/* Ghidra symbol: FUN_00bf8d00 */


void FUN_00bf8d00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 *puVar11;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar14;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulonglong in_stack_ffffffffffffff78;
  undefined1 *puVar15;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  
  local_30 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = *(int *)(*(longlong *)(param_1 + 0x130) + 0x910) + 2;
  *(int *)(param_1 + 0x74) =
       (*(int *)(param_1 + 0x140) - *(int *)(*(longlong *)(param_1 + 0x130) + 0x534)) *
       *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x538) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d0);
    if (iVar5 < 0x80) {
      iVar5 = 0x80;
    }
    *(int *)(param_1 + 0xc4) = iVar5;
    FUN_004169f0(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xc4));
  }
  local_70 = *(int *)(param_1 + 0xb0);
  if (local_70 <= *(int *)(param_1 + 0xac)) {
    local_68 = (*(int *)(param_1 + 0xac) - local_70) + 1;
    do {
      if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x498) == '\0') ||
         (cVar2 = FUN_00be08e0(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4a8),local_70),
         cVar2 == '\0')) {
        FUN_00bcf900(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4e8),&local_30,local_70 + -1
                    );
        FUN_00bf6d50(*(undefined8 *)(param_1 + 0x130),&local_38,local_30);
        *(bool *)(param_1 + 0xb7) = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4cc) == local_70;
        lVar7 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x130));
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(lVar7 + 0x28);
        uVar4 = FUN_00bf7050();
        *(undefined4 *)(param_1 + 0xb8) = uVar4;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x318))
                          (*(longlong **)(param_1 + 0x130),local_70,param_1 + 0xbc,param_1 + 0xb8);
        *(undefined1 *)(param_1 + 0x7a) = uVar3;
        if (*(char *)(param_1 + 0x7a) == '\0') {
          *(undefined4 *)(param_1 + 0xa4) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x540) + 0xc);
          *(undefined4 *)(param_1 + 0xa8) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x540) + 8);
        }
        else {
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb8);
          *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xbc);
        }
        iVar5 = FUN_00c11030(*(undefined8 *)(param_1 + 0x130),local_70);
        local_6c = *(int *)(param_1 + 0x140);
        if (local_6c < iVar5) {
          local_6c = iVar5;
        }
        iVar6 = FUN_00c11030(*(undefined8 *)(param_1 + 0x130),local_70 + 1);
        iVar5 = iVar6 + -1;
        if (*(int *)(param_1 + 0x148) <= iVar6 + -1) {
          iVar5 = *(int *)(param_1 + 0x148);
        }
        if (iVar5 <= local_6c) {
          iVar5 = local_6c;
        }
        if (local_6c <= iVar5) {
          local_5c = (iVar5 - local_6c) + 1;
          do {
            cVar2 = FUN_00c10e70(*(undefined8 *)(param_1 + 0x130));
            if (cVar2 == '\0') {
              local_64 = *(int *)(param_1 + 0x150);
              local_60 = *(int *)(param_1 + 0x158);
            }
            else {
              local_44 = local_6c;
              if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x538) == 0) {
                local_48 = 1;
              }
              else {
                local_48 = *(undefined4 *)(param_1 + 0x150);
              }
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x5f8);
              local_64 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
              local_48 = *(undefined4 *)(param_1 + 0x158);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x5f8);
              local_60 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
            }
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
            uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
            *(undefined1 *)(param_1 + 0x87) = 0;
            *(undefined4 *)(param_1 + 0x80) = 0;
            *(undefined4 *)(param_1 + 0x7c) = 0;
            if (((*(char *)(param_1 + 0xb6) != '\0') && (*(int *)(param_1 + 0xfc) <= local_6c)) &&
               (local_6c <= *(int *)(param_1 + 0xf4))) {
              *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x150);
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x158) + 1;
              if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x5f5) == '\x02') ||
                 ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x5f5) == '\0' &&
                  (local_6c == *(int *)(param_1 + 0xfc))))) {
                if (*(int *)(param_1 + 0x158) < *(int *)(param_1 + 0xf8)) {
                  *(undefined4 *)(param_1 + 0x80) = 0;
                  *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else if (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0xf8)) {
                  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xf8);
                  *(undefined1 *)(param_1 + 0x87) = 1;
                }
              }
              if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x5f5) == '\x02') ||
                 ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x5f5) == '\0' &&
                  (local_6c == *(int *)(param_1 + 0xf4))))) {
                if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0x150)) {
                  *(undefined4 *)(param_1 + 0x80) = 0;
                  *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0x158)) {
                  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xf0);
                  *(undefined1 *)(param_1 + 0x87) = 1;
                }
              }
            }
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x74);
            *(int *)(param_1 + 0x74) =
                 *(int *)(param_1 + 0x74) + *(int *)(*(longlong *)(param_1 + 0x130) + 0x52c);
            if ((*(char *)(param_1 + 0x87) == '\0') && (0 < *(int *)(param_1 + 0x80))) {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            *(undefined1 *)(param_1 + 0x7b) = uVar3;
            *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_1 + 0x70);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
            if ((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 0x8c) == '\0')) {
              if ((local_64 == *(int *)(param_1 + 0x150)) && (local_60 == *(int *)(param_1 + 0x158))
                 ) {
                FUN_00416dc0(&local_40,local_38,1,local_60);
              }
              else {
                FUN_00416dc0(&local_40,local_38,local_64,local_60 - local_64);
              }
              if (*(char *)(*(longlong *)(param_1 + 0x130) + 0x7e0) != '\0') {
                iVar5 = 0;
                if (local_38 != 0) {
                  iVar5 = *(int *)(local_38 + -4);
                }
                if (iVar5 < local_60) {
                  FUN_00416ad0(&local_40,&DAT_00bf9928);
                }
              }
              uVar10 = 0;
              if (local_40 != (undefined8 *)0x0) {
                uVar10 = *(undefined4 *)((longlong)local_40 + -4);
              }
              if (*(char *)(param_1 + 0x87) == '\0') {
                FUN_00bf7270(param_1,*(undefined1 *)(param_1 + 0x7b));
                in_stack_ffffffffffffff68 = CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x150));
                in_stack_ffffffffffffff70 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x158));
                FUN_00bf7350(param_1,local_40,uVar10,0,in_stack_ffffffffffffff68,
                             in_stack_ffffffffffffff70);
              }
              else {
                FUN_00bf7270(param_1,0);
                iVar5 = *(int *)(param_1 + 0x68);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x150));
                if (iVar6 < iVar5) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x94) = iVar6;
                iVar5 = *(int *)(param_1 + 0x70);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x80));
                if (iVar5 < iVar6) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x9c) = iVar6;
                uVar8 = CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x150));
                uVar12 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x80));
                FUN_00bf7350(param_1,local_40,uVar10,0,uVar8,uVar12);
                uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                iVar5 = *(int *)(param_1 + 0x68);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x7c));
                if (iVar6 < iVar5) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x94) = iVar6;
                iVar5 = *(int *)(param_1 + 0x70);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x158));
                if (iVar5 < iVar6) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x9c) = iVar6;
                uVar8 = CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x7c));
                uVar12 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x158));
                FUN_00bf7350(param_1,local_40,uVar10,0,uVar8,uVar12);
                uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                FUN_00bf7270(param_1,1);
                iVar5 = *(int *)(param_1 + 0x68);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x80));
                if (iVar6 < iVar5) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x94) = iVar6;
                iVar5 = *(int *)(param_1 + 0x70);
                iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x7c));
                if (iVar5 < iVar6) {
                  iVar6 = iVar5;
                }
                *(int *)(param_1 + 0x9c) = iVar6;
                in_stack_ffffffffffffff68 = CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x80));
                in_stack_ffffffffffffff70 = CONCAT44(uVar14,*(int *)(param_1 + 0x7c) + -1);
                FUN_00bf7350(param_1,local_40,uVar10,0,in_stack_ffffffffffffff68,
                             in_stack_ffffffffffffff70);
              }
            }
            else {
              if (local_70 == 1) {
                (**(code **)(*plVar1 + 0x168))(plVar1);
              }
              else {
                uVar8 = FUN_00bcfb80(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x4e8),
                                     local_70 + -2);
                (**(code **)(*plVar1 + 0x160))(plVar1,uVar8);
              }
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
              (**(code **)(*plVar1 + 0x150))(plVar1,local_30,local_38,local_70 + -1);
              *(undefined4 *)(param_1 + 0xc0) = 0;
              iVar6 = 0;
              iVar5 = 0;
              lVar7 = 0;
              while (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538),
                    cVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), cVar2 == '\0') {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                iVar6 = (**(code **)(*plVar1 + 0x108))(plVar1);
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                (**(code **)(*plVar1 + 0x100))(plVar1,&local_40);
                iVar5 = 0;
                if (local_40 != (undefined8 *)0x0) {
                  iVar5 = *(int *)((longlong)local_40 + -4);
                }
                if (local_64 <= iVar6 + iVar5) {
                  if (local_60 < iVar6 + iVar5) {
                    if (local_60 < iVar6) break;
                    cVar2 = FUN_00c10e70(*(undefined8 *)(param_1 + 0x130));
                    if (cVar2 == '\0') {
                      iVar5 = local_60 - iVar6;
                    }
                    else {
                      iVar5 = (local_60 - iVar6) + -1;
                    }
                  }
                  iVar6 = iVar6 - (local_64 - *(int *)(param_1 + 0x150));
                  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                  lVar7 = (**(code **)(*plVar1 + 0x128))(plVar1);
                  if (lVar7 == 0) {
                    local_4c = *(undefined4 *)(param_1 + 0xbc);
                    local_50 = *(undefined4 *)(param_1 + 0xb8);
                    lVar9 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x130));
                    local_51 = *(undefined1 *)(*(longlong *)(lVar9 + 0x18) + 0x31);
                  }
                  else {
                    local_4c = *(undefined4 *)(lVar7 + 0x10);
                    local_50 = *(undefined4 *)(lVar7 + 8);
                    local_51 = *(undefined1 *)(lVar7 + 0x28);
                  }
                  puVar11 = &local_4c;
                  puVar13 = &local_50;
                  puVar15 = &local_51;
                  FUN_00c0dbb0(*(undefined8 *)(param_1 + 0x130),local_70,iVar6,local_40,puVar11,
                               puVar13,puVar15);
                  in_stack_ffffffffffffff68 = CONCAT44((int)((ulonglong)puVar11 >> 0x20),local_4c);
                  in_stack_ffffffffffffff70 = CONCAT44((int)((ulonglong)puVar13 >> 0x20),local_50);
                  in_stack_ffffffffffffff78 = CONCAT71((int7)((ulonglong)puVar15 >> 8),local_51);
                  FUN_00bf8030(param_1,local_40,iVar6,iVar5,in_stack_ffffffffffffff68,
                               in_stack_ffffffffffffff70,in_stack_ffffffffffffff78);
                }
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                (**(code **)(*plVar1 + 0x148))(plVar1);
              }
              if (*(char *)(*(longlong *)(param_1 + 0x130) + 0x7e0) != '\0') {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                cVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
                uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
                if (cVar2 != '\0') {
                  if ((lVar7 == 0) ||
                     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538),
                     lVar9 = (**(code **)(*plVar1 + 0x98))(plVar1,0), lVar7 != lVar9)) {
                    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
                    lVar7 = (**(code **)(*plVar1 + 0x98))(plVar1,4);
                  }
                  in_stack_ffffffffffffff68 = CONCAT44(uVar4,*(undefined4 *)(lVar7 + 0x10));
                  in_stack_ffffffffffffff70 = CONCAT44(uVar14,*(undefined4 *)(lVar7 + 8));
                  in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
                  FUN_00bf8030(param_1,&DAT_00bf9928,iVar6 + iVar5,1,in_stack_ffffffffffffff68,
                               in_stack_ffffffffffffff70,in_stack_ffffffffffffff78);
                }
              }
              FUN_00bf7a50(param_1,1);
            }
            if (*(char *)(param_1 + 0x57) != '\0') {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
              (**(code **)(*plVar1 + 200))
                        (plVar1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c));
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
              (**(code **)(*plVar1 + 0xc0))
                        (plVar1,*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x74) + 1);
            }
            local_6c = local_6c + 1;
            local_5c = local_5c + -1;
          } while (local_5c != 0);
        }
        *(undefined1 *)(param_1 + 0xb7) = 0;
      }
      local_70 = local_70 + 1;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

