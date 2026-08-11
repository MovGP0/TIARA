/* Ghidra address: 01719380 */
/* Ghidra symbol: FUN_01719380 */


void FUN_01719380(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0040f590(param_2);
  FUN_00409900();
  uVar6 = FUN_0040f200(param_2,L"Subcircuits");
  FUN_0040f590(uVar6);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
                (*(longlong **)(param_1 + 0x60),&local_50,iVar8);
      uVar6 = FUN_0040f200(param_2,local_50);
      FUN_0040f590(uVar6);
      FUN_00409900();
      FUN_0040f590(param_2);
      FUN_00409900();
      (**(code **)(*plVar5 + 0x90))(plVar5);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                            (*(longlong **)(param_1 + 0x10),iVar9);
          FUN_00416880(&local_48,*(undefined8 *)(lVar7 + 0x20));
          iVar4 = FUN_00416db0(local_48,L"[Internal]");
          if (iVar4 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
                      (*(longlong **)(param_1 + 0x60),&local_58,iVar8);
            iVar4 = FUN_00416db0(local_48,local_58);
            if (iVar4 == 0) {
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                        (*(longlong **)(param_1 + 0x10),&local_60,iVar9);
              cVar1 = FUN_00ed0220(0,local_60,L"TINA");
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                          (*(longlong **)(param_1 + 0x10),&local_68,iVar9);
                uVar6 = FUN_0040f200(param_2,local_68);
                FUN_0040f590(uVar6);
                FUN_00409900();
              }
            }
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_0040f590(param_2);
      FUN_00409900();
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0040f590(param_2);
  FUN_00409900();
  uVar6 = FUN_0040f200(param_2,L"Models");
  FUN_0040f590(uVar6);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
                (*(longlong **)(param_1 + 0x68),&local_70,iVar8);
      uVar6 = FUN_0040f200(param_2,local_70);
      FUN_0040f590(uVar6);
      FUN_00409900();
      FUN_0040f590(param_2);
      FUN_00409900();
      (**(code **)(*plVar5 + 0x90))(plVar5);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                            (*(longlong **)(param_1 + 0x18),iVar9);
          FUN_00416880(&local_48,*(undefined8 *)(lVar7 + 0x20));
          iVar4 = FUN_00416db0(local_48,L"[Internal]");
          if (iVar4 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
                      (*(longlong **)(param_1 + 0x68),&local_78,iVar8);
            iVar4 = FUN_00416db0(local_48,local_78);
            if (iVar4 == 0) {
              iVar4 = FUN_00416db0(local_48,&DAT_017199a4);
              if ((((iVar4 == 0) || (iVar4 = FUN_00416db0(local_48,L"[DZ]"), iVar4 == 0)) ||
                  (iVar4 = FUN_00416db0(local_48,L"[DL]"), iVar4 == 0)) ||
                 ((iVar4 = FUN_00416db0(local_48,L"[DV]"), iVar4 == 0 ||
                  (iVar4 = FUN_00416db0(local_48,L"[DS]"), iVar4 == 0)))) {
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                          (*(longlong **)(param_1 + 0x18),&local_80,iVar9);
                cVar1 = FUN_00ed0220(3,local_80,L"TINA");
              }
              else {
                iVar4 = FUN_00416db0(local_48,L"[NPN]");
                if ((iVar4 == 0) || (iVar4 = FUN_00416db0(local_48,L"[PNP]"), iVar4 == 0)) {
                  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                            (*(longlong **)(param_1 + 0x18),&local_88,iVar9);
                  cVar1 = FUN_00ed0220(1,local_88,L"TINA");
                }
                else {
                  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                            (*(longlong **)(param_1 + 0x18),&local_90,iVar9);
                  cVar1 = FUN_00ed0220(2,local_90,L"TINA");
                }
              }
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                          (*(longlong **)(param_1 + 0x10),&local_98,iVar9);
                uVar6 = FUN_0040f200(param_2,local_98);
                FUN_0040f590(uVar6);
                FUN_00409900();
              }
            }
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_0040f590(param_2);
      FUN_00409900();
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_98,0xc);
  return;
}

