/* Ghidra address: 00dbd0a0 */
/* Ghidra symbol: FUN_00dbd0a0 */


double FUN_00dbd0a0(double param_1,double param_2,undefined8 param_3,double param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 local_7b8 [16];
  undefined8 local_738;
  double local_638;
  double local_630;
  double local_628;
  double local_398;
  undefined8 local_388;
  double local_318;
  double local_310;
  double local_308;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_290;
  double local_268;
  
  puVar2 = local_7b8;
  for (lVar1 = 0xe2; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar3 = (double)FUN_0040c850(local_738);
  if (param_2 <= local_628) {
    dVar4 = 0.0;
  }
  else {
    FUN_00b90620(((param_2 - local_628) / local_268 + local_398) / ((local_290 * 2.0) / local_630),
                 0x380b38fb9daa78e4);
    dVar4 = (double)FUN_0040c2f0();
    dVar4 = local_268 * dVar4;
  }
  dVar5 = (double)FUN_00c42670(param_3,local_388);
  dVar9 = dVar5 * 100000000.0 * local_2f8 * local_2e8 * local_2e8;
  dVar8 = (local_2f8 * (param_1 - local_638)) / 1.6021917e-19;
  if (dVar8 < 0.0) {
    dVar8 = 0.0;
  }
  dVar6 = (double)FUN_00b90650(param_2,local_628);
  dVar6 = (local_2f8 * ((param_1 - local_638) - dVar6)) / 1.6021917e-19;
  if (dVar6 < 0.0) {
    dVar6 = 0.0;
  }
  FUN_00b90620((dVar8 + 200000000000000.0) / (dVar6 + 200000000000000.0),0x380b38fb9daa78e4);
  dVar7 = (double)FUN_0040c2f0();
  return ((dVar3 * 2.212769725939143e-42 * param_4 * local_630) / dVar9) *
         (local_318 * dVar7 + local_310 * (dVar8 - dVar6) +
         local_308 * 0.5 * (dVar8 * dVar8 - dVar6 * dVar6)) +
         (((param_4 * 8.62e-05 * dVar3 * dVar3) /
          (dVar5 * 100000000.0 * local_2e8 * local_2e8 * local_2e0)) * dVar4 *
         (local_318 + local_310 * dVar6 + local_308 * dVar6 * dVar6)) /
         ((dVar6 + 200000000000000.0) * (dVar6 + 200000000000000.0));
}

