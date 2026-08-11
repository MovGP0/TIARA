/* Ghidra address: 018ca8a0 */
/* Ghidra symbol: FUN_018ca8a0 */


undefined1
FUN_018ca8a0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,double param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [43];
  undefined1 local_5d;
  int local_5c;
  undefined8 local_50;
  
  local_5d = 0;
  local_50 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_5c = 0;
  do {
    while( true ) {
      while( true ) {
        if (*(int *)(param_4 + 0x10) <= local_5c) {
          FUN_018ca570(auStack_88);
          FUN_00410f20(local_50);
          return local_5d;
        }
        plVar3 = (longlong *)FUN_004aeac0(param_4,local_5c);
        dVar8 = 0.0;
        dVar10 = (double)plVar3[0x16];
        bVar7 = (double)plVar3[0x14] + dVar10 <= param_5;
        cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01923c30);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(param_4,local_5c);
          plVar4[0x57] = plVar4[0x14];
          if ((double)plVar3[0x14] <= param_5 && param_5 != (double)plVar3[0x14]) {
            (**(code **)(*plVar4 + 0xe0))(plVar4,param_5 - (double)plVar4[0x14]);
            dVar8 = (double)(**(code **)(*plVar4 + 0x328))(plVar4);
            dVar10 = (double)plVar4[0x56];
            cVar1 = (**(code **)(*plVar4 + 0x338))(plVar4,param_5);
            bVar7 = cVar1 == '\0';
            if (bVar7) {
              dVar8 = (double)(**(code **)(*plVar4 + 0x340))(plVar4,param_5);
              dVar9 = (double)FUN_0040c850(dVar8);
              if (0.0001 < dVar9) {
                dVar10 = dVar10 + dVar8;
                (**(code **)(*plVar4 + 0xe0))(plVar4,dVar10);
                FUN_018ca3e0(auStack_88,plVar4,dVar8);
                iVar6 = 0;
                if (0 < local_5c) {
                  do {
                    uVar5 = FUN_004aeac0(param_4,iVar6);
                    iVar2 = FUN_004aeba0(local_50,uVar5);
                    if (iVar2 != -1) {
                      FUN_004ae870(param_4,iVar6);
                      FUN_004ae7e0(param_4,uVar5);
                      local_5c = local_5c + -1;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < local_5c);
                }
              }
            }
          }
        }
        if (!bVar7) break;
        (**(code **)(*plVar3 + 0xe0))(plVar3,dVar10);
        uVar5 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
        FUN_004ae7e0(*(undefined8 *)(param_2 + 0x80),uVar5);
        FUN_004aee30(param_4,plVar3);
      }
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01923c30);
      if (cVar1 == '\0') break;
      plVar3 = (longlong *)FUN_004aeac0(param_4,local_5c);
      if ((double)plVar3[0x14] <= param_5 && param_5 != (double)plVar3[0x14]) {
        FUN_018ca3e0(auStack_88,plVar3,dVar8);
        dVar10 = (double)FUN_0040c850(dVar8 - (double)plVar3[0x16]);
        if (0.0001 <= dVar10) {
          uVar5 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
          FUN_004ae7e0(*(undefined8 *)(param_2 + 0x80),uVar5);
          plVar3[0x56] = (longlong)(((double)plVar3[0x56] - (double)plVar3[0x16]) + dVar8);
          local_5d = 1;
        }
        else {
          (**(code **)(*plVar3 + 0xd0))(plVar3,param_5);
          (**(code **)(*plVar3 + 0xe0))(plVar3,plVar3[0x56]);
        }
      }
LAB_018cac61:
      local_5c = local_5c + 1;
    }
    dVar10 = (double)(**(code **)(*param_1 + 0x20))(param_1);
    dVar8 = (double)(**(code **)(*param_1 + 0x98))(param_1);
    if ((double)plVar3[0x16] <= dVar10 - dVar8) {
      if ((double)plVar3[0x14] <= param_5 && param_5 != (double)plVar3[0x14]) {
        FUN_018ca3e0(auStack_88,plVar3,param_5 - (double)plVar3[0x14]);
        (**(code **)(*plVar3 + 0xd0))(plVar3,param_5);
      }
      goto LAB_018cac61;
    }
    uVar5 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
    FUN_004ae7e0(*(undefined8 *)(param_2 + 0x80),uVar5);
    FUN_004aee30(param_4,plVar3);
  } while( true );
}

