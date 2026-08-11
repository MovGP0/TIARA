/* Ghidra address: 01d752d0 */
/* Ghidra symbol: FUN_01d752d0 */


double FUN_01d752d0(undefined8 param_1,undefined8 *param_2,double param_3,undefined1 *param_4,
                   longlong param_5,undefined8 *param_6,int param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double local_380;
  undefined8 local_378 [105];
  
  puVar2 = local_378;
  for (lVar1 = 100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar6 = 0.0;
  param_7 = param_7 + -1;
  dVar4 = 0.0;
  if (-1 < param_7) {
    puVar2 = local_378 + param_7;
    pdVar3 = (double *)(param_5 + (longlong)param_7 * 8);
    do {
      param_3 = param_3 / 2.0;
      dVar4 = (double)FUN_00dd1640(*puVar2,&local_380,*param_4);
      dVar6 = dVar6 + param_3 * dVar4;
      *pdVar3 = param_3 * local_380;
      param_7 = param_7 + -1;
      pdVar3 = pdVar3 + -1;
      puVar2 = puVar2 + -1;
      dVar4 = dVar6;
    } while (param_7 != -1);
  }
  uVar5 = FUN_016eb990(param_1,1,4);
  *param_6 = uVar5;
  return dVar4;
}

