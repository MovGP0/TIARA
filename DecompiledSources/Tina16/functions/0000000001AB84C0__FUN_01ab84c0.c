/* Ghidra address: 01ab84c0 */
/* Ghidra symbol: FUN_01ab84c0 */


void FUN_01ab84c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  double dVar10;
  undefined1 local_99;
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
  if (*(char *)(param_1[0x13] + 0x19) == '\0') {
    iVar9 = *(int *)(param_1[0x1f] + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        plVar6 = (longlong *)FUN_004aeac0(param_1[0x1f],iVar7);
        (**(code **)(*plVar6 + 0x120))(plVar6,param_3,param_2);
        (**(code **)(*plVar6 + 0x118))(plVar6);
        (**(code **)(*plVar6 + 0x128))(plVar6,param_3,param_2);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    param_1[0x15] = 0;
    if (((param_1[0x10] != 0) && (param_1[0x1d] != 0)) && (param_1[0x1e] != 0)) {
      iVar9 = *(int *)(param_1[0x1d] + 0xe8);
      iVar7 = *(int *)(param_1[0x1d] + 0xec);
      FUN_00498350(local_78,iVar9,*(undefined4 *)(param_1[0x1e] + 0xec),iVar7,
                   *(undefined4 *)(param_1[0x1e] + 0xe8));
      (**(code **)(*param_1 + 0xb0))(param_1,local_78);
      dVar10 = (double)(iVar7 - iVar9) /
               (*(double *)(param_1[0x1d] + 0xc0) - *(double *)(param_1[0x1d] + 0xb8));
      cVar3 = FUN_004113d0(param_1[0x13],&PTR_FUN_01cb46a8);
      if (cVar3 != '\0') {
        FUN_00414ad0(param_1[0x13] + 0x48,param_1[0x1c]);
      }
      (**(code **)(*(longlong *)param_1[0x10] + 0x18))
                ((longlong *)param_1[0x10],param_1[0x13],param_4,0);
      *(undefined8 *)PTR_DAT_02005620 = 0;
      *(undefined8 *)PTR_DAT_020041f8 = 0;
      if (*(char *)(param_1[0x10] + 0x98) == '\0') {
        (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                  ((longlong *)param_1[0x10],local_40,&local_49,0);
        *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
        uVar8 = 0;
        while (cVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                                 ((longlong *)param_1[0x10],&local_48,&local_4a,0), cVar3 != '\0') {
          lVar1 = param_1[0x1d];
          iVar4 = FUN_0040c770((local_40[0] - *(double *)(lVar1 + 0xb8)) * dVar10 + (double)iVar9);
          iVar7 = *(int *)(lVar1 + 0xec);
          iVar5 = iVar7;
          if (iVar4 < iVar7) {
            iVar5 = iVar4;
          }
          iVar4 = *(int *)(lVar1 + 0xe8);
          iVar2 = iVar4;
          if (iVar4 < iVar5) {
            iVar2 = iVar5;
          }
          iVar5 = FUN_0040c770((local_48 - *(double *)(param_1[0x1d] + 0xb8)) * dVar10 +
                               (double)iVar9);
          if (iVar7 <= iVar5) {
            iVar5 = iVar7;
          }
          if (iVar5 <= iVar4) {
            iVar5 = iVar4;
          }
          if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
              (*(double *)(param_1[0x1d] + 0xb8) <= local_48)) &&
             ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
               local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
              (local_48 < *(double *)(param_1[0x1d] + 0xc0) ||
               local_48 == *(double *)(param_1[0x1d] + 0xc0))))) {
            FUN_01ab70f0(param_1,iVar2,iVar5,local_49,local_99,uVar8);
          }
          uVar8 = 1;
          local_99 = local_49;
          local_40[0] = local_48;
          local_49 = local_4a;
        }
        FUN_0040c770((local_40[0] - *(double *)(param_1[0x1d] + 0xb8)) * dVar10 + (double)iVar9);
        FUN_0040c770(((double)param_1[0x18] - *(double *)(param_1[0x1d] + 0xb8)) * dVar10 +
                     (double)iVar9);
      }
      else {
        (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                  ((longlong *)param_1[0x10],local_40,&local_58,0);
        *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
        while (cVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                                 ((longlong *)param_1[0x10],&local_48,&local_60,0), cVar3 != '\0') {
          do {
            iVar7 = FUN_00416db0(local_60,local_58);
            if (iVar7 != 0) break;
            cVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                              ((longlong *)param_1[0x10],&local_48,&local_60);
          } while (cVar3 != '\0');
          lVar1 = param_1[0x1d];
          iVar5 = FUN_0040c770((local_40[0] - *(double *)(lVar1 + 0xb8)) * dVar10 + (double)iVar9);
          iVar7 = *(int *)(lVar1 + 0xec);
          if (iVar5 < *(int *)(lVar1 + 0xec)) {
            iVar7 = iVar5;
          }
          iVar5 = *(int *)(lVar1 + 0xe8);
          if (iVar5 < iVar7) {
            iVar5 = iVar7;
          }
          iVar7 = FUN_0040c770((local_48 - *(double *)(param_1[0x1d] + 0xb8)) * dVar10 +
                               (double)iVar9);
          if (*(int *)(lVar1 + 0xec) <= iVar7) {
            iVar7 = *(int *)(lVar1 + 0xec);
          }
          if (iVar7 <= *(int *)(lVar1 + 0xe8)) {
            iVar7 = *(int *)(lVar1 + 0xe8);
          }
          if (((*(double *)(param_1[0x1d] + 0xb8) <= local_40[0]) ||
              (*(double *)(param_1[0x1d] + 0xb8) <= local_48)) &&
             ((local_40[0] < *(double *)(param_1[0x1d] + 0xc0) ||
               local_40[0] == *(double *)(param_1[0x1d] + 0xc0) ||
              (local_48 < *(double *)(param_1[0x1d] + 0xc0) ||
               local_48 == *(double *)(param_1[0x1d] + 0xc0))))) {
            FUN_01ab76c0(param_1,param_2,iVar5,iVar7,local_58,0);
          }
          local_40[0] = local_48;
          FUN_00414b50(&local_58,local_60);
        }
      }
    }
  }
  FUN_00414560(&local_68,3);
  return;
}

