/* Ghidra address: 01998340 */
/* Ghidra symbol: FUN_01998340 */


void FUN_01998340(longlong param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  longlong local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
  cVar2 = FUN_0198a580(uVar6);
  if (cVar2 == '\x01') {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
    cVar2 = FUN_0198a580(uVar6);
    if (cVar2 == '\x02') {
      plVar7 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
      sVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (sVar3 == 0x95) {
        plVar7 = (longlong *)
                 FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
        iVar4 = (**(code **)(*DAT_02110768 + 0xb0))(DAT_02110768,local_30);
        if (iVar4 == -1) {
          uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
          (**(code **)(*DAT_02110768 + 0x80))(DAT_02110768,local_30,uVar6);
        }
        else {
          plVar7 = (longlong *)(**(code **)(*DAT_02110768 + 0x30))(DAT_02110768,iVar4);
          uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
          *(undefined4 *)(param_1 + 0x74) = uVar5;
        }
      }
      else {
        plVar7 = (longlong *)
                 FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
        iVar4 = (**(code **)(*DAT_02110770 + 0xb0))(DAT_02110770,local_30);
        if (iVar4 == -1) {
          uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
          (**(code **)(*DAT_02110770 + 0x80))(DAT_02110770,local_30,uVar6);
        }
        else {
          plVar7 = (longlong *)(**(code **)(*DAT_02110770 + 0x30))(DAT_02110770,iVar4);
          lVar8 = (**(code **)(*plVar7 + 0x250))(plVar7,0);
          plVar7 = (longlong *)
                   FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
          lVar9 = (**(code **)(*plVar7 + 0x250))(plVar7,0);
          iVar4 = *(int *)(lVar9 + 0x10);
          iVar11 = 0;
          if (-1 < iVar4 + -1) {
            do {
              lVar10 = FUN_004aeac0(lVar9,iVar11);
              if (((lVar10 != 0) && (iVar11 < *(int *)(lVar8 + 0x10))) &&
                 (lVar10 = FUN_004aeac0(lVar8,iVar11), lVar10 != 0)) {
                uVar6 = FUN_004aeac0(lVar9,iVar11);
                uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x18))
                                  (*(longlong **)(param_1 + 0xd0),uVar6);
                *(undefined4 *)(param_1 + 0x50) = uVar5;
                plVar7 = (longlong *)FUN_004aeac0(lVar8,iVar11);
                uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
                *(undefined4 *)(param_1 + 0x74) = uVar5;
                *(undefined4 *)(param_1 + 0x4c) = 0;
                if (-1 < *(int *)(param_1 + 0x74)) {
                  FUN_01997020(param_1,*(undefined4 *)(param_1 + 0x50),
                               *(undefined4 *)(param_1 + 0x4c));
                  FUN_01998310(param_1);
                }
              }
              iVar11 = iVar11 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
    }
    else {
      uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
      cVar2 = FUN_0198a580(uVar6);
      if (cVar2 == '\x03') {
        plVar7 = (longlong *)
                 FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
        iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) + -1;
        bVar1 = false;
        if (local_30 != 0) {
LAB_019986e2:
          do {
            if (*(int *)(param_1 + 0x5c) + -1 < iVar4) {
              plVar7 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
              (**(code **)(*plVar7 + 0x288))(plVar7,local_40);
              if (local_30 == local_40[0]) {
                bVar12 = true;
              }
              else if ((local_30 == 0) || (local_40[0] == 0)) {
                bVar12 = false;
              }
              else {
                iVar11 = FUN_0043e420(local_30,local_40[0]);
                bVar12 = iVar11 == 0;
              }
              if (bVar12) {
                uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50)
                                    );
                FUN_017ff570(uVar6,&local_48);
                uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
                FUN_017ff570(uVar6,&local_50);
                iVar11 = FUN_00416db0(local_48,local_50);
                if (iVar11 == 0) {
                  bVar12 = false;
                  goto LAB_019987a6;
                }
              }
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
LAB_019987a6:
            if (bVar12) {
              iVar4 = iVar4 + -1;
              goto LAB_019986e2;
            }
            if (*(int *)(param_1 + 0x5c) + -1 < iVar4) {
              plVar7 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
              (**(code **)(*plVar7 + 0x288))(plVar7,&local_58);
              if (local_30 == local_58) {
                bVar12 = true;
              }
              else if ((local_30 == 0) || (local_58 == 0)) {
                bVar12 = false;
              }
              else {
                iVar11 = FUN_0043e420(local_30,local_58);
                bVar12 = iVar11 == 0;
              }
              if (bVar12) {
                uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50)
                                    );
                FUN_017ff570(uVar6,&local_60);
                uVar6 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
                FUN_017ff570(uVar6,&local_68);
                iVar11 = FUN_00416db0(local_60,local_68);
                if ((iVar11 == 0) && (cVar2 = FUN_01996fd0(param_1,iVar4,0), cVar2 != '\0')) {
                  bVar1 = true;
                  plVar7 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
                  uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
                  *(undefined4 *)(param_1 + 0x74) = uVar5;
                }
              }
            }
            iVar4 = iVar4 + -1;
          } while (*(int *)(param_1 + 0x5c) + -1 < iVar4 && !bVar1);
        }
      }
    }
  }
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_30);
  return;
}

