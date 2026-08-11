/* Ghidra address: 01519450 */
/* Ghidra symbol: FUN_01519450 */


void FUN_01519450(longlong *param_1,longlong param_2,ushort param_3,int *param_4,longlong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 local_3d;
  int local_3c;
  
  dVar9 = (double)(**(code **)(*param_1 + 0x110))(param_1);
  if (*param_5 != 0) {
    FUN_01cc6030(*param_5);
  }
  lVar3 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
  *param_5 = lVar3;
  FUN_01cc6020(*param_5);
  iVar7 = -1;
  uVar1 = *(undefined8 *)(*param_5 + 8);
  iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar6);
      plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01106728);
      if (*(char *)((longlong)plVar5 + 0x11) != '\0') {
        uVar4 = FUN_01cc34d0(uVar1,plVar5[1],0,2);
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar4);
        iVar7 = iVar7 + 1;
        local_3c = 0;
        iVar8 = param_3 + 1;
        do {
          if (local_3c < (int)(uint)param_3) {
            local_3d = (&DAT_01f5eba4)
                       [(int)(*(uint *)(param_2 + (longlong)local_3c * 4) >>
                              ((char)iVar6 * '\x02' & 0x1fU) & 3)];
          }
          FUN_01d347d0(uVar1,iVar7);
          FUN_01cc56d0(*param_5,iVar7,(double)(local_3c - *param_4) * dVar9,local_3d);
          local_3c = local_3c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

