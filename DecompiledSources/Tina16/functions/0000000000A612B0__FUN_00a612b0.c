/* Ghidra address: 00a612b0 */
/* Ghidra symbol: FUN_00a612b0 */


double FUN_00a612b0(longlong param_1,double param_2,double param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  int local_50;
  int local_4c;
  longlong local_48;
  double local_40;
  
  local_68 = 0;
  local_60[0] = 0;
  local_48 = 0;
  FUN_00414480(&local_48);
  local_40 = (double)FUN_00410100(param_1,&local_4c);
  bVar6 = local_4c == 1;
  if (!bVar6) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    if (local_4c == 0) {
      local_4c = iVar3 + 1;
    }
    local_50 = FUN_004170c0(&DAT_00a61a88,param_1,1);
    if ((0 < local_50) && (local_50 < local_4c)) {
      local_4c = local_50;
    }
    if (local_4c <= iVar3) {
      FUN_00416dc0(local_60,param_1,1,local_4c + -1);
      local_40 = (double)FUN_00410100(local_60[0],&local_50);
      FUN_00416dc0(&local_68,param_1,local_4c,(iVar3 - local_4c) + 1);
      FUN_0043ea00(&local_48,local_68);
    }
  }
  local_70 = param_3;
  if (bVar6) {
    FUN_00414b50(&local_48,param_1);
    uVar5 = (uint)(param_4 != '\0');
    iVar3 = FUN_00416db0(local_48,L"smaller");
    if (iVar3 == 0) {
      bVar2 = 4;
      dVar7 = param_2 - DAT_02014490;
LAB_00a61615:
      cVar1 = FUN_00527050(dVar7);
      if (cVar1 == -1) {
        bVar4 = bVar2 - 1;
        dVar8 = param_2 - *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
        if (0.0 <= dVar8) {
          dVar7 = (double)FUN_0040c850(dVar7);
          dVar8 = (double)FUN_0040c850(dVar8);
          if (dVar7 < dVar8) {
            bVar4 = bVar2;
          }
          goto code_r0x00a616d7;
        }
      }
      else {
        bVar4 = bVar2;
        if (cVar1 != '\x01') goto code_r0x00a616d7;
        bVar4 = bVar2 + 1;
        dVar8 = param_2 - *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
        if (dVar8 <= 0.0) {
          dVar7 = (double)FUN_0040c850(dVar7);
          dVar8 = (double)FUN_0040c850(dVar8);
          if (dVar8 < dVar7) {
            bVar4 = bVar2;
          }
code_r0x00a616d7:
          bVar2 = bVar4 - 1;
          if (bVar2 == 0) {
            bVar4 = bVar4 + 1;
            bVar2 = 1;
          }
          else if (7 < bVar2) {
            bVar4 = (bVar4 - bVar2) + 7;
            bVar2 = 7;
          }
          local_70 = param_2;
          if (bVar4 != bVar2) {
            local_70 = (param_2 * *(double *)(&DAT_02014470 + (ulonglong)bVar2 * 2)) /
                       *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
          }
          goto code_r0x00a619d2;
        }
      }
      if ((bVar4 == 1) || (bVar2 = bVar4, dVar7 = dVar8, bVar4 == 7)) goto code_r0x00a616d7;
      goto LAB_00a61615;
    }
    iVar3 = FUN_00416db0(local_48,L"larger");
    if (iVar3 == 0) {
      bVar2 = 4;
      dVar7 = param_2 - DAT_02014490;
LAB_00a61763:
      cVar1 = FUN_00527050(dVar7);
      if (cVar1 == -1) {
        bVar4 = bVar2 - 1;
        dVar8 = param_2 - *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
        if (0.0 <= dVar8) {
          dVar7 = (double)FUN_0040c850(dVar7);
          dVar8 = (double)FUN_0040c850(dVar8);
          if (dVar7 < dVar8) {
            bVar4 = bVar2;
          }
          goto code_r0x00a61825;
        }
      }
      else {
        bVar4 = bVar2;
        if (cVar1 != '\x01') goto code_r0x00a61825;
        bVar4 = bVar2 + 1;
        dVar8 = param_2 - *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
        if (dVar8 <= 0.0) {
          dVar7 = (double)FUN_0040c850(dVar7);
          dVar8 = (double)FUN_0040c850(dVar8);
          if (dVar8 < dVar7) {
            bVar4 = bVar2;
          }
code_r0x00a61825:
          bVar2 = bVar4 + 1;
          if (bVar2 == 0) {
            bVar4 = bVar4 + 1;
            bVar2 = 1;
          }
          else if (7 < bVar2) {
            bVar4 = (bVar4 - bVar2) + 7;
            bVar2 = 7;
          }
          local_70 = param_2;
          if (bVar4 != bVar2) {
            local_70 = (param_2 * *(double *)(&DAT_02014470 + (ulonglong)bVar2 * 2)) /
                       *(double *)(&DAT_02014470 + (ulonglong)bVar4 * 2);
          }
          goto code_r0x00a619d2;
        }
      }
      if ((bVar4 == 1) || (bVar2 = bVar4, dVar7 = dVar8, bVar4 == 7)) goto code_r0x00a61825;
      goto LAB_00a61763;
    }
    iVar3 = FUN_00416db0(local_48,L"xx-small");
    if (iVar3 == 0) {
      local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 1) * 2);
    }
    else {
      iVar3 = FUN_00416db0(local_48,L"x-small");
      if (iVar3 == 0) {
        local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 1) * 2);
      }
      else {
        iVar3 = FUN_00416db0(local_48,L"small");
        if (iVar3 == 0) {
          local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 2) * 2);
        }
        else {
          iVar3 = FUN_00416db0(local_48,L"medium");
          if (iVar3 == 0) {
            local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 3) * 2);
          }
          else {
            iVar3 = FUN_00416db0(local_48,L"large");
            if (iVar3 == 0) {
              local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 4) * 2);
            }
            else {
              iVar3 = FUN_00416db0(local_48,L"x-large");
              if (iVar3 == 0) {
                local_70 = *(double *)(&DAT_02014470 + (longlong)(int)(uVar5 + 5) * 2);
              }
              else {
                iVar3 = FUN_00416db0(local_48,L"xx-large");
                if (iVar3 == 0) {
                  local_70 = DAT_020144a0;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61a98);
    if (iVar3 == 0) {
      local_70 = local_40 * 72.0;
    }
    else {
      iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61aac);
      if (iVar3 == 0) {
        local_70 = local_40 * 28.34645669291339;
      }
      else {
        iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61ac0);
        if (iVar3 == 0) {
          local_70 = local_40 * 2.8346456692913384;
        }
        else {
          iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61ad4);
          if (iVar3 == 0) {
            local_70 = local_40;
          }
          else {
            iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61ae8);
            if (iVar3 == 0) {
              local_70 = (local_40 * 72.0) / (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98);
            }
            else {
              iVar3 = FUN_00416db0(local_48,&DAT_00a61afc);
              if (iVar3 == 0) {
                local_70 = local_40 * 12.0;
              }
              else {
                iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61b10);
                if (iVar3 == 0) {
                  local_70 = local_40 * param_2;
                }
                else {
                  iVar3 = FUN_00416db0(local_48,&PTR_DAT_00a61b24);
                  if (iVar3 == 0) {
                    local_70 = local_40 * param_2 * 0.5;
                  }
                  else {
                    iVar3 = FUN_00416db0(local_48,&DAT_00a61b38);
                    if (iVar3 == 0) {
                      local_70 = local_40 * param_2 * 0.01;
                    }
                    else if (local_48 == 0) {
                      local_70 = (local_40 * 72.0) /
                                 (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x00a619d2:
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_48);
  return local_70;
}

