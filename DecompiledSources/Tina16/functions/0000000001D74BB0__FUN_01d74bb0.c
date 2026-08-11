/* Ghidra address: 01d74bb0 */
/* Ghidra symbol: FUN_01d74bb0 */


double FUN_01d74bb0(undefined8 param_1,undefined8 *param_2,double param_3,undefined1 *param_4,
                   longlong param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  double *pdVar3;
  char cVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double local_a0;
  undefined8 local_98 [7];
  undefined8 local_60 [6];
  
  puVar2 = local_98;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar7 = 0.0;
  cVar4 = -8;
  puVar2 = local_60;
  pdVar3 = (double *)(param_5 + 0x38);
  do {
    param_3 = param_3 / 2.0;
    dVar5 = (double)FUN_00dd1640(*puVar2,&local_a0,*param_4);
    dVar7 = dVar7 + param_3 * dVar5;
    *pdVar3 = param_3 * local_a0;
    pdVar3 = pdVar3 + -1;
    puVar2 = puVar2 + -1;
    cVar4 = cVar4 + '\x01';
  } while (cVar4 != '\0');
  uVar6 = FUN_016eb990(param_1,1,4);
  *param_6 = uVar6;
  return dVar7;
}

