/* Ghidra address: 017e4180 */
/* Ghidra symbol: FUN_017e4180 */


double FUN_017e4180(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double unaff_XMM6_Qa;
  double local_2e0;
  undefined8 local_2d8 [69];
  undefined8 local_b0;
  longlong *local_a8;
  char local_98;
  
  puVar4 = local_2d8;
  for (lVar3 = 0x52; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_01cc7fc0(local_a8,local_b0);
  (**(code **)(*local_a8 + 0x10))(local_a8,local_b0,0);
  plVar1 = local_a8;
  cVar2 = FUN_01116830(local_98);
  if (cVar2 == '\0') {
    cVar2 = FUN_01116870(local_98);
    if (cVar2 == '\0') {
      if (local_98 == '\x06') {
        lVar3 = (longlong)*(int *)(param_1 + 0x370);
        unaff_XMM6_Qa =
             ((*(double *)(param_1 + 0x418 + lVar3 * 8) - *(double *)(param_1 + 0x468 + lVar3 * 8))
             / (double)(*(int *)(param_1 + 0x4b8 + lVar3 * 4) + -1)) * (double)param_2 +
             *(double *)(param_1 + 0x468 + (longlong)*(int *)(param_1 + 0x370) * 8);
        uVar5 = (**(code **)(*local_a8 + 0x48))(local_a8,unaff_XMM6_Qa);
        *param_4 = uVar5;
        param_4[1] = 0;
      }
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x370);
      unaff_XMM6_Qa =
           ((*(double *)(param_1 + 0x418 + lVar3 * 8) - *(double *)(param_1 + 0x468 + lVar3 * 8)) /
           (double)(*(int *)(param_1 + 0x4b8 + lVar3 * 4) + -1)) * (double)param_2 +
           *(double *)(param_1 + 0x468 + (longlong)*(int *)(param_1 + 0x370) * 8);
      uVar5 = (**(code **)(*local_a8 + 0x48))(local_a8,unaff_XMM6_Qa);
      *param_4 = uVar5;
      param_4[1] = 0;
    }
  }
  else {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01cbcb38);
    if (cVar2 == '\0') {
      FUN_01ccb260(local_a8,param_2,&local_2e0,param_4);
      unaff_XMM6_Qa = local_2e0;
    }
    else {
      FUN_01ccb260(local_a8,param_2,&local_2e0,param_4);
      unaff_XMM6_Qa = local_2e0;
    }
  }
  FUN_01cc8000(local_a8,local_b0);
  return unaff_XMM6_Qa;
}

