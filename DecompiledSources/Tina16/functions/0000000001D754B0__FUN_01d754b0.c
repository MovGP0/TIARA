/* Ghidra address: 01d754b0 */
/* Ghidra symbol: FUN_01d754b0 */


void FUN_01d754b0(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  double *pdVar2;
  undefined1 *puVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  double unaff_XMM6_Qa;
  undefined8 in_stack_fffffffffffff948;
  undefined4 uVar8;
  undefined8 local_690;
  double local_688 [100];
  double local_368 [104];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff948 >> 0x20);
  iVar4 = *(int *)(param_1 + 0x8c);
  if (-1 < iVar4 + -1) {
    pdVar2 = local_368;
    puVar3 = param_1;
    do {
      dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*puVar3,param_1[0x88],0)
      ;
      uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffff948 >> 0x20);
      *pdVar2 = dVar6;
      pdVar2 = pdVar2 + 1;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0x84],param_1[0x88],0);
  uVar7 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0x86],param_1[0x88],0);
  cVar1 = FUN_016eacf0(param_2,2,1);
  if (cVar1 == '\0') {
    unaff_XMM6_Qa =
         (double)FUN_01d752d0(param_2,local_368,uVar7,param_5,local_688,&local_690,
                              CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x8c)));
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  cVar1 = '\0';
  if (-1 < iVar4 + -1) {
    pdVar2 = local_688;
    pdVar5 = local_368;
    do {
      FUN_016ed220(param_2,param_1[0x89] + param_1[0x8c] + cVar1,*pdVar2,0);
      unaff_XMM6_Qa = unaff_XMM6_Qa - *pdVar2 * *pdVar5;
      cVar1 = cVar1 + '\x01';
      pdVar5 = pdVar5 + 1;
      pdVar2 = pdVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_016ed5d0(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x01',local_690,0,0,
               0x4024000000000000,0);
  FUN_016ed320(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x03',unaff_XMM6_Qa,
               0x4024000000000000,0);
  return;
}

