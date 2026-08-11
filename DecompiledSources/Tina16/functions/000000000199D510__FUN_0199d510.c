/* Ghidra address: 0199d510 */
/* Ghidra symbol: FUN_0199d510 */


void FUN_0199d510(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  int local_94;
  int local_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  FUN_00417580(&local_50,&DAT_00e021a8);
  if (((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0xb) == '\0')) &&
     (cVar2 = FUN_0198a580(param_2), cVar2 == '\x04')) {
    iVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
    FUN_01d03160();
    local_94 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,local_94);
        if ((*(char *)(param_1 + 0x58) == '\0') ||
           (cVar2 = FUN_015661f0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0xe8) + 0x23d0),
                                 param_2,local_94), cVar2 != '\0')) {
          if (*(char *)(param_1 + 0x58) == '\0') {
            (**(code **)(param_1 + 0x50))
                      (&local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x220),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x228),uVar4);
          }
          else {
            uVar7 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xe8));
            if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0xe8) + 0x23e1) != '\0')
            break;
            (**(code **)(param_1 + 0x50))
                      (&local_50,uVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x228),uVar4)
            ;
          }
          iVar5 = FUN_00416db0(local_50,&DAT_0199dc2c);
          if (iVar5 == 0) {
            lVar8 = FUN_019afd80(*(undefined8 *)(param_1 + 0x40),uVar4);
            if (((lVar8 == 0) || (*(char *)(lVar8 + 0x2d8) == '\0')) ||
               (cVar2 = FUN_019a1770(*(undefined8 *)(param_1 + 0x40),0x86,0,uVar4), cVar2 == '\0'))
            {
              if (local_48 < 0) {
                cVar2 = -(char)local_48;
                (**(code **)(*param_2 + 0x1f0))(param_2,local_94,&local_34,&local_38);
                FUN_0199c990(*(undefined8 *)(param_1 + 0x40),local_34 + -2,local_38 + -2,
                             *(undefined4 *)(&DAT_01fbdfb4 + (ulonglong)(byte)(cVar2 - 1) * 8));
              }
              else {
                FUN_01aa0e50(&local_30,local_48);
                (**(code **)(*param_2 + 0x1f0))(param_2,local_94,&local_34,&local_38);
                local_34 = local_34 + -6;
                local_38 = local_38 + -7;
                (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                          (*(longlong **)(param_1 + 0x40),local_34,local_38);
                FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_34,local_38,1,local_30,0);
              }
            }
            else {
              (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_58);
              cVar2 = *local_58;
              plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
              FUN_017c4360(lVar8,plVar9);
              FUN_00414480(&local_30);
              bVar1 = false;
              uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
              iVar5 = (**(code **)(*plVar9 + 0x28))();
              local_7c = 0;
              if (-1 < iVar5 + -1) {
                do {
                  (**(code **)(*plVar9 + 0x18))(plVar9,&local_60,local_7c);
                  plVar10 = (longlong *)FUN_019aff50(*(undefined8 *)(param_1 + 0x40),local_60);
                  uVar6 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
                  (**(code **)(param_1 + 0x50))
                            (&local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x220),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x228),uVar6);
                  cVar11 = -1 - (char)local_48;
                  if ((cVar11 != '\0') && (cVar11 != '\x01')) {
                    bVar1 = true;
                  }
                  FUN_015f1c60(&local_68,
                               CONCAT71((int7)((ulonglong)param_1 >> 8),cVar11) & 0xffffffff);
                  FUN_00416ba0(&local_30,local_68,local_30);
                  local_7c = local_7c + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              if ((!bVar1) && (cVar2 != '\0')) {
                uVar6 = FUN_015fa280(local_30);
                if ((cVar2 == '\x03') || (cVar2 == '\x01')) {
                  FUN_01aa0e50(&local_30,uVar6);
                }
                else {
                  FUN_0043f750(&local_30,uVar6);
                }
                FUN_0160e3f0(&local_70,local_30,uVar4);
                FUN_00414b50(&local_30,local_70);
              }
              (**(code **)(*param_2 + 0x1f0))(param_2,0,&local_34,&local_38);
              FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_34,local_38,1,local_30,0);
              FUN_00410f20(plVar9);
            }
          }
          else {
            iVar5 = FUN_00416db0(local_50,&DAT_0199dc3c);
            if (iVar5 == 0) {
              if (local_48 < 0x10) {
                FUN_0043fba0(&local_30,local_48,1);
              }
              else {
                FUN_0043fba0(&local_30,local_48,2);
              }
              (**(code **)(*param_2 + 0x1f0))(param_2,local_94,&local_34,&local_38);
              local_34 = local_34 + -6;
              local_38 = local_38 + -7;
              (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                        (*(longlong **)(param_1 + 0x40),local_34,local_38);
              FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_34,local_38,1,local_30,0);
            }
            else {
              iVar5 = FUN_00416db0(local_50,&DAT_0199dc4c);
              if (iVar5 == 0) {
                FUN_01d43570(&local_30,local_40,2);
                (**(code **)(*param_2 + 0x1f0))(param_2,local_94,&local_34,&local_38);
                local_34 = local_34 + -6;
                local_38 = local_38 + -7;
                (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                          (*(longlong **)(param_1 + 0x40),local_34,local_38);
                FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_34,local_38,1,local_30,0);
              }
            }
          }
        }
        local_94 = local_94 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_70,3);
  FUN_00417740(&local_50,&DAT_00e021a8);
  FUN_00414480(&local_30);
  return;
}

