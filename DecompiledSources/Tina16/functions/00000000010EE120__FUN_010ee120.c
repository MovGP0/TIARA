/* Ghidra address: 010ee120 */
/* Ghidra symbol: FUN_010ee120 */


void FUN_010ee120(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int local_98;
  int local_94;
  undefined1 local_88 [8];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [11];
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (iVar4 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x28))((longlong *)plVar1[0x1b]), iVar4 == 1)
     ) {
    uVar6 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
    cVar3 = FUN_004113d0(uVar6,&DAT_01cdd500);
    if (cVar3 != '\0') {
      lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
      iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x28))(*(longlong **)(lVar7 + 0x70));
      if (iVar4 == 1) {
        lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
        iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x28))(*(longlong **)(lVar7 + 0x78));
        if (iVar4 == 1) {
          lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
          uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                            (*(longlong **)(lVar7 + 0x70),0);
          uVar5 = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x48));
          *(undefined4 *)(param_1 + 0x68) = uVar5;
          lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
          uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                            (*(longlong **)(lVar7 + 0x78),0);
          uVar5 = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x50));
          *(undefined4 *)(param_1 + 0x6c) = uVar5;
          lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
          uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))
                            (*(longlong **)(lVar7 + 0x70),0);
          uVar5 = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x70) = uVar5;
          lVar7 = (**(code **)(*(longlong *)plVar1[0x1b] + 0x30))((longlong *)plVar1[0x1b],0);
          uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))
                            (*(longlong **)(lVar7 + 0x78),0);
          uVar5 = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x60));
          *(undefined4 *)(param_1 + 0x74) = uVar5;
          return;
        }
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,local_88);
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_98);
    uVar5 = FUN_0040c770((double)local_78 +
                         *(double *)(param_1 + 0x48) * (double)(local_80 - local_98));
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,local_88);
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_98);
    uVar5 = FUN_0040c770((double)local_74 +
                         *(double *)(param_1 + 0x50) * (double)(local_7c - local_94));
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,local_88);
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_98);
    uVar5 = FUN_0040c770((double)local_78 +
                         *(double *)(param_1 + 0x58) * (double)(local_80 - local_98));
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,local_88);
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_98);
    uVar5 = FUN_0040c770((double)local_74 +
                         *(double *)(param_1 + 0x60) * (double)(local_7c - local_94));
    *(undefined4 *)(param_1 + 0x74) = uVar5;
  }
  else {
    (**(code **)(*plVar2 + 0xf0))
              (plVar2,(*(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x58)) / 2.0,
               (*(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x60)) / 2.0,local_4c,&local_50)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf0))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x50),&local_54,&local_58);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf0))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60),&local_5c,&local_60);
    dVar8 = (double)(local_5c - local_54) /
            (double)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    dVar9 = (double)(local_60 - local_58) /
            (double)(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c));
    dVar10 = ((double)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68)) * (dVar8 + dVar9)) / 2.0
    ;
    dVar8 = ((double)(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c)) * (dVar8 + dVar9)) / 2.0;
    uVar5 = FUN_0040c770((double)local_4c[0] - dVar10 / 2.0);
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    uVar5 = FUN_0040c770((double)local_50 - dVar8 / 2.0);
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    uVar5 = FUN_0040c770((double)local_4c[0] + dVar10 / 2.0);
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    uVar5 = FUN_0040c770((double)local_50 + dVar8 / 2.0);
    *(undefined4 *)(param_1 + 0x74) = uVar5;
  }
  return;
}

