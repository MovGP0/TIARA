/* Ghidra address: 01ab52a0 */
/* Ghidra symbol: FUN_01ab52a0 */


undefined8 FUN_01ab52a0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_98;
  double local_90 [12];
  
  cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 200),&PTR_FUN_01cb9c30);
  if (cVar3 == '\0') {
    iVar4 = 1;
    do {
      plVar2 = *(longlong **)(param_1 + 200);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0xe0),1);
      *(undefined8 *)PTR_DAT_02005620 = 0;
      *(undefined8 *)PTR_DAT_020041f8 = 0;
      if (iVar4 == 1) {
        dVar6 = *param_2;
        dVar5 = (double)(**(code **)(*plVar2 + 0x48))(plVar2,*param_2);
        (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0xe0),*param_2,1);
      }
      else {
        dVar6 = *(double *)(*(longlong *)(param_1 + 0xf8) + 0xb8);
        dVar5 = (double)(**(code **)(*plVar2 + 0x48))(plVar2,dVar6);
        (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0xe0),1);
      }
      *(undefined8 *)PTR_DAT_02005620 = 0;
      *(undefined8 *)PTR_DAT_020041f8 = 0;
      dVar7 = dVar6;
      dVar9 = dVar5;
      do {
        dVar8 = dVar9;
        dVar1 = dVar7;
        cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_90,&local_98,0);
        dVar7 = dVar6;
        dVar9 = dVar5;
        if (cVar3 == '\0') break;
        if (local_98 == *param_3) {
          *param_2 = local_90[0];
          return 1;
        }
        dVar7 = local_90[0];
        dVar9 = local_98;
      } while (0.0 < (local_98 - *param_3) * (dVar8 - *param_3));
      if ((dVar8 - *param_3) * (dVar9 - *param_3) < 0.0) {
        if (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x70) == '\0') {
          *param_2 = dVar1 + ((dVar7 - dVar1) * (*param_3 - dVar8)) / (dVar9 - dVar8);
        }
        else {
          dVar6 = (double)FUN_00c43d10(dVar1);
          dVar5 = (double)FUN_00c43d10(dVar7);
          dVar7 = (double)FUN_00c43d10(dVar1);
          dVar6 = (double)FUN_00c43d20(dVar6 + ((dVar5 - dVar7) * (*param_3 - dVar8)) /
                                               (dVar9 - dVar8));
          *param_2 = dVar6;
        }
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
  }
  return 0;
}

