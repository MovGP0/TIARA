/* Ghidra address: 01c6dbd0 */
/* Ghidra symbol: FUN_01c6dbd0 */


void FUN_01c6dbd0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  short *local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = (short *)0x0;
  if ((*(longlong *)(param_2 + 6) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 7000), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  if (*(longlong *)(param_2 + 6) == 0) {
    iVar6 = *param_2;
    if (iVar6 == 0x100) {
      sVar4 = FUN_01c6db60(auStack_198);
      iVar6 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002c40 + 0x38) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_004b3cf0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x38),local_40,iVar9);
          sVar5 = FUN_007dca30(local_40[0]);
          if (sVar5 == sVar4) {
            FUN_004b5390(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x38),local_30,iVar9);
            iVar6 = FUN_004170c0(L"$TINA",local_30[0],1);
            if ((iVar6 == 1) ||
               (iVar6 = FUN_004170c0(&LAB_01c6e1d4,local_30[0],1), psVar2 = local_30[0], iVar6 == 1)
               ) {
              FUN_00b928f0(&local_48,local_30[0],0);
              FUN_00414ad0(param_1 + 0x2760,local_48);
              local_178 = 1;
              FUN_01c6ec30(param_1,0x39,1,1);
            }
            else if (*local_30[0] == 0x23) {
              *(undefined4 *)(param_1 + 0x1840) = 0x39;
              uVar7 = 0;
              if (local_30[0] != (short *)0x0) {
                uVar7 = *(undefined4 *)(local_30[0] + -2);
              }
              FUN_00416dc0(&local_58,local_30[0],2,uVar7);
              FUN_00648720(&local_50,local_58);
              FUN_00414ad0(param_1 + 0x1848,local_50);
              uVar7 = 0;
              if (psVar2 != (short *)0x0) {
                uVar7 = *(undefined4 *)(psVar2 + -2);
              }
              FUN_00416dc0(&local_68,local_30[0],2,uVar7);
              FUN_00648780(&local_60,local_68);
              FUN_00414ad0(param_1 + 0x1850,local_60);
              *(undefined8 *)(param_1 + 0x1858) = 0;
              FUN_00416910(local_168,*(undefined8 *)(param_1 + 0x1848),0xff);
              uVar3 = FUN_017178f0(*(undefined8 *)(param_1 + 0x2520),local_168);
              *(undefined1 *)(param_1 + 0x1860) = uVar3;
              local_178 = 1;
              FUN_01c6ec30(param_1,0x39,0,1);
            }
            else {
              uVar7 = FUN_0043fc00(local_30[0]);
              local_178 = 1;
              FUN_01c6ec30(param_1,uVar7,0,0);
            }
            break;
          }
          iVar9 = iVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      sVar4 = thunk_FUN_040bd713(0x11);
      if (((longlong)sVar4 & 0x8000U) == 0) {
        iVar6 = param_2[2];
        if (iVar6 < 0x6c) {
          if (iVar6 == 0x6b) {
            FUN_01c6d2f0(param_1,param_2);
            goto LAB_01c6e154;
          }
          if (iVar6 < 0x2e) {
            if (iVar6 == 0x2d) {
              FUN_01c773a0(param_1,0);
              goto LAB_01c6e154;
            }
            if (iVar6 == 0x1b) {
              FUN_01c6cf20(param_1);
              if (*(char *)(param_1 + 0x24fa) != '\0') {
                FUN_01995220(*(undefined8 *)(param_1 + 0x27a8),1);
                *(undefined1 *)(param_1 + 0x24fa) = 0;
              }
              goto LAB_01c6e154;
            }
            if (iVar6 == 0x20) {
              FUN_01c773b0(param_1,0);
              goto LAB_01c6e154;
            }
          }
          else {
            if (iVar6 == 0x2e) {
              FUN_01c76c90(param_1,0);
              goto LAB_01c6e154;
            }
            if (iVar6 == 0x6a) {
              FUN_01c6d440(param_1,param_2);
              goto LAB_01c6e154;
            }
          }
        }
        else {
          if (iVar6 == 0x6d) {
            FUN_01c6d1a0(param_1,param_2);
            goto LAB_01c6e154;
          }
          if (iVar6 == 0x74) {
            FUN_01c76fd0(param_1,0);
            goto LAB_01c6e154;
          }
          if (iVar6 == 0x78) goto LAB_01c6e154;
          if (iVar6 == 0x7a) {
            FUN_01607d20(0,0,1);
            goto LAB_01c6e154;
          }
        }
        if ((*(longlong *)(param_1 + 0x27a8) != 0) && (lVar8 = FUN_01c8a450(param_1), lVar8 != 0)) {
          FUN_019abdf0(lVar8,param_2);
        }
      }
    }
    else if (iVar6 == 0x101) {
      if ((*(longlong *)(param_1 + 0x27a8) != 0) && (lVar8 = FUN_01c8a450(param_1), lVar8 != 0)) {
        FUN_019abdf0(lVar8,param_2);
      }
    }
    else if (((iVar6 == 0x102) && (*(longlong *)(param_1 + 0x27a8) != 0)) &&
            (lVar8 = FUN_01c8a450(param_1), lVar8 != 0)) {
      FUN_019abdf0(lVar8,param_2);
    }
  }
LAB_01c6e154:
  FUN_00414560(&local_68,6);
  FUN_00414480(local_30);
  return;
}

