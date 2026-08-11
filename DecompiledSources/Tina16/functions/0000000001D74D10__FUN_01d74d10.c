/* Ghidra address: 01d74d10 */
/* Ghidra symbol: FUN_01d74d10 */


void FUN_01d74d10(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  double *pdVar2;
  double *pdVar3;
  char cVar4;
  double dVar5;
  undefined8 uVar6;
  double unaff_XMM6_Qa;
  undefined8 local_d0;
  double local_c8 [8];
  double local_88 [12];
  
  cVar4 = '\b';
  pdVar2 = local_88;
  puVar1 = param_1;
  do {
    dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*puVar1,param_1[0xc],0);
    *pdVar2 = dVar5;
    pdVar2 = pdVar2 + 1;
    puVar1 = puVar1 + 1;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[8],param_1[0xc],0);
  uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[10],param_1[0xc],0);
  cVar4 = FUN_016eacf0(param_2,2,1);
  if (cVar4 == '\0') {
    unaff_XMM6_Qa = (double)FUN_01d74bb0(param_2,local_88,uVar6,param_5,local_c8,&local_d0);
  }
  cVar4 = '\0';
  pdVar2 = local_c8;
  pdVar3 = local_88;
  do {
    FUN_016ed220(param_2,param_1[0xd] + cVar4 + '\b',*pdVar2,0);
    unaff_XMM6_Qa = unaff_XMM6_Qa - *pdVar2 * *pdVar3;
    cVar4 = cVar4 + '\x01';
    pdVar3 = pdVar3 + 1;
    pdVar2 = pdVar2 + 1;
  } while (cVar4 != '\b');
  FUN_016ed5d0(param_2,param_1[0xd] + '\x11',local_d0,0,0,0x4024000000000000,0);
  FUN_016ed320(param_2,param_1[0xd] + '\x13',unaff_XMM6_Qa,0x4024000000000000,0);
  return;
}

