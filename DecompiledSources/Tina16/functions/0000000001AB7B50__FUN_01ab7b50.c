/* Ghidra address: 01ab7b50 */
/* Ghidra symbol: FUN_01ab7b50 */


void FUN_01ab7b50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  double dVar8;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar9;
  undefined1 local_89;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4a;
  undefined1 local_49;
  double local_48;
  double local_40 [3];
  
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (cVar2 != '\0') {
    iVar7 = *(int *)(param_1[0x1f] + 0x10);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar4 = (longlong *)FUN_004aeac0(param_1[0x1f],iVar5);
        (**(code **)(*plVar4 + 0x120))(plVar4,param_3,param_2);
        (**(code **)(*plVar4 + 0x118))(plVar4);
        (**(code **)(*plVar4 + 0x128))(plVar4,param_3,param_2);
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    param_1[0x15] = 0;
    if (((param_1[0x10] != 0) && (param_1[0x1d] != 0)) && (param_1[0x1e] != 0)) {
      iVar7 = *(int *)(param_1[0x1d] + 0xe8);
      iVar5 = *(int *)(param_1[0x1d] + 0xec);
      FUN_00498350(local_78,iVar7,*(undefined4 *)(param_1[0x1e] + 0xec),iVar5,
                   CONCAT44(uVar9,*(undefined4 *)(param_1[0x1e] + 0xe8)));
      (**(code **)(*param_1 + 0xb0))(param_1,local_78);
      dVar8 = (double)(iVar5 - iVar7) /
              (*(double *)(param_1[0x1d] + 0xc0) - *(double *)(param_1[0x1d] + 0xb8));
      cVar2 = FUN_004113d0(param_1[0x13],&PTR_FUN_01cb46a8);
      if (cVar2 != '\0') {
        FUN_00414ad0(param_1[0x13] + 0x48,param_1[0x1c]);
      }
      (**(code **)(*(longlong *)param_1[0x10] + 0x10))((longlong *)param_1[0x10],param_1[0x13],0);
      *(undefined8 *)PTR_DAT_02005620 = 0;
      *(undefined8 *)PTR_DAT_020041f8 = 0;
      if (*(char *)(param_1[0x10] + 0x98) == '\0') {
        (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                  ((longlong *)param_1[0x10],local_40,&local_49,0);
        *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
        uVar6 = 0;
        while (cVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                                 ((longlong *)param_1[0x10],&local_48,&local_4a,0), cVar2 != '\0') {
          if ((*(double *)(param_1[0xe] + 0xa0) == 0.0) ||
             (local_48 <= *(double *)(param_1[0xe] + 0xa0))) {
            lVar1 = param_1[0x1d];
            iVar3 = FUN_0040c770((local_40[0] - *(double *)(lVar1 + 0xb8)) * dVar8 + (double)iVar7);
            iVar5 = *(int *)(lVar1 + 0xec);
            if (iVar3 < *(int *)(lVar1 + 0xec)) {
              iVar5 = iVar3;
            }
            iVar3 = *(int *)(lVar1 + 0xe8);
            if (iVar3 < iVar5) {
              iVar3 = iVar5;
            }
            iVar5 = FUN_0040c770((local_48 - *(double *)(param_1[0x1d] + 0xb8)) * dVar8 +
                                 (double)iVar7);
            if (*(int *)(lVar1 + 0xec) <= iVar5) {
              iVar5 = *(int *)(lVar1 + 0xec);
            }
            if (iVar5 <= *(int *)(lVar1 + 0xe8)) {
              iVar5 = *(int *)(lVar1 + 0xe8);
            }
            if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
                (*(double *)(param_1[0x1d] + 0xb8) <= local_48)) &&
               ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
                 local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
                (local_48 < *(double *)(param_1[0x1d] + 0xc0) ||
                 local_48 == *(double *)(param_1[0x1d] + 0xc0))))) {
              FUN_01ab70f0(param_1,iVar3,iVar5,local_49,local_89,uVar6);
            }
            uVar6 = 1;
            local_89 = local_49;
            local_40[0] = local_48;
            local_49 = local_4a;
          }
        }
        lVar1 = param_1[0x1d];
        iVar3 = FUN_0040c770((local_40[0] - *(double *)(lVar1 + 0xb8)) * dVar8 + (double)iVar7);
        iVar5 = *(int *)(lVar1 + 0xec);
        if (iVar3 < *(int *)(lVar1 + 0xec)) {
          iVar5 = iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0xe8);
        if (iVar3 < iVar5) {
          iVar3 = iVar5;
        }
        iVar7 = FUN_0040c770(((double)param_1[0x18] - *(double *)(param_1[0x1d] + 0xb8)) * dVar8 +
                             (double)iVar7);
        if (*(int *)(lVar1 + 0xec) <= iVar7) {
          iVar7 = *(int *)(lVar1 + 0xec);
        }
        if (iVar7 <= *(int *)(lVar1 + 0xe8)) {
          iVar7 = *(int *)(lVar1 + 0xe8);
        }
        if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
            (*(double *)(param_1[0x1d] + 0xb8) < (double)param_1[0x18] ||
             *(double *)(param_1[0x1d] + 0xb8) == (double)param_1[0x18])) &&
           (((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
              local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
             ((double)param_1[0x18] < *(double *)(param_1[0x1d] + 0xc0) ||
              (double)param_1[0x18] == *(double *)(param_1[0x1d] + 0xc0))) &&
            (*(char *)(param_1[0x13] + 0x19) != '\0')))) {
          FUN_01ab70f0(param_1,iVar3,iVar7,local_49,local_89,2);
        }
      }
      else {
        (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                  ((longlong *)param_1[0x10],local_40,&local_58,0);
        *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
        while (cVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                                 ((longlong *)param_1[0x10],&local_48,&local_60,0), cVar2 != '\0') {
          if ((*(double *)(param_1[0xe] + 0xa0) == 0.0) ||
             (local_48 <= *(double *)(param_1[0xe] + 0xa0))) {
            do {
              iVar5 = FUN_00416db0(local_60,local_58);
              if (iVar5 != 0) break;
              cVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                                ((longlong *)param_1[0x10],&local_48,&local_60);
            } while (cVar2 != '\0');
            lVar1 = param_1[0x1d];
            iVar3 = FUN_0040c770((local_40[0] - *(double *)(lVar1 + 0xb8)) * dVar8 + (double)iVar7);
            iVar5 = *(int *)(lVar1 + 0xec);
            if (iVar3 < *(int *)(lVar1 + 0xec)) {
              iVar5 = iVar3;
            }
            iVar3 = *(int *)(lVar1 + 0xe8);
            if (iVar3 < iVar5) {
              iVar3 = iVar5;
            }
            iVar5 = FUN_0040c770((local_48 - *(double *)(param_1[0x1d] + 0xb8)) * dVar8 +
                                 (double)iVar7);
            if (*(int *)(lVar1 + 0xec) <= iVar5) {
              iVar5 = *(int *)(lVar1 + 0xec);
            }
            if (iVar5 <= *(int *)(lVar1 + 0xe8)) {
              iVar5 = *(int *)(lVar1 + 0xe8);
            }
            if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
                (*(double *)(param_1[0x1d] + 0xb8) <= local_48)) &&
               ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
                 local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
                (local_48 < *(double *)(param_1[0x1d] + 0xc0) ||
                 local_48 == *(double *)(param_1[0x1d] + 0xc0))))) {
              FUN_01ab76c0(param_1,param_2,iVar3,iVar5,local_58,0);
            }
            local_40[0] = local_48;
            FUN_00414b50(&local_58,local_60);
          }
        }
        if ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0)) &&
           (*(char *)(param_1[0x13] + 0x19) != '\0')) {
          iVar3 = FUN_0040c770((local_40[0] - *(double *)(param_1[0x1d] + 0xb8)) * dVar8 +
                               (double)iVar7);
          iVar5 = *(int *)(param_1[0x1d] + 0xec);
          if (iVar3 < *(int *)(param_1[0x1d] + 0xec)) {
            iVar5 = iVar3;
          }
          iVar3 = *(int *)(param_1[0x1d] + 0xe8);
          if (iVar3 < iVar5) {
            iVar3 = iVar5;
          }
          iVar7 = FUN_0040c770(((double)param_1[0x18] - *(double *)(param_1[0x1d] + 0xb8)) * dVar8 +
                               (double)iVar7);
          if (*(int *)(param_1[0x1d] + 0xec) <= iVar7) {
            iVar7 = *(int *)(param_1[0x1d] + 0xec);
          }
          if (iVar7 <= *(int *)(param_1[0x1d] + 0xe8)) {
            iVar7 = *(int *)(param_1[0x1d] + 0xe8);
          }
          if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
              (*(double *)(param_1[0x1d] + 0xb8) < (double)param_1[0x18] ||
               *(double *)(param_1[0x1d] + 0xb8) == (double)param_1[0x18])) &&
             ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
               local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
              ((double)param_1[0x18] < *(double *)(param_1[0x1d] + 0xc0) ||
               (double)param_1[0x18] == *(double *)(param_1[0x1d] + 0xc0))))) {
            FUN_01ab76c0(param_1,param_2,iVar3,iVar7,local_58,0);
          }
        }
      }
    }
  }
  FUN_00414560(&local_68,3);
  return;
}

