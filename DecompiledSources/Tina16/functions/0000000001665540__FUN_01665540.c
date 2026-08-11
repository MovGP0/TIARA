/* Ghidra address: 01665540 */
/* Ghidra symbol: FUN_01665540 */


double FUN_01665540(double param_1,double param_2,undefined8 param_3,double param_4,
                   undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_1468 [8];
  double local_1428;
  double local_1418;
  double local_1410;
  undefined8 local_1318;
  longlong local_11d8;
  undefined1 local_488;
  double local_1f0;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  
  local_488 = 0;
  puVar4 = local_1468;
  for (lVar3 = 0x278; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_5;
    param_5 = param_5 + 1;
    puVar4 = puVar4 + 1;
  }
  dVar5 = (double)FUN_0040c850(local_1318);
  if (param_2 <= local_1410) {
    dVar6 = 0.0;
  }
  else {
    FUN_00b90620(((param_2 - local_1410) / *(double *)(local_11d8 + 0xd0) + local_160) /
                 ((*(double *)(local_11d8 + 0x340) * 2.0) / local_1428),0x380b38fb9daa78e4);
    dVar6 = (double)FUN_0040c2f0();
    dVar6 = *(double *)(local_11d8 + 0xd0) * dVar6;
  }
  dVar7 = (double)FUN_00c42670(param_3,local_158);
  dVar11 = dVar7 * 100000000.0 * local_1f0;
  dVar1 = *(double *)(local_11d8 + 0x2e0);
  dVar2 = *(double *)(local_11d8 + 0x2e0);
  dVar10 = (local_1f0 * (param_1 - local_1418)) / 1.6021917e-19;
  if (dVar10 < 0.0) {
    dVar10 = 0.0;
  }
  dVar8 = (double)FUN_00b90650(param_2,local_1410);
  dVar8 = (local_1f0 * ((param_1 - local_1418) - dVar8)) / 1.6021917e-19;
  if (dVar8 < 0.0) {
    dVar8 = 0.0;
  }
  FUN_00b90620((dVar10 + 200000000000000.0) / (dVar8 + 200000000000000.0),0x380b38fb9daa78e4);
  dVar9 = (double)FUN_0040c2f0();
  return ((dVar5 * 2.212769725939143e-42 * param_4 * local_1428) / (dVar11 * dVar1 * dVar2)) *
         (local_178 * dVar9 + local_170 * (dVar10 - dVar8) +
         local_168 * 0.5 * (dVar10 * dVar10 - dVar8 * dVar8)) +
         (((param_4 * 8.62e-05 * dVar5 * dVar5) /
          (dVar7 * 100000000.0 * *(double *)(local_11d8 + 0x2e0) * *(double *)(local_11d8 + 0x2e0) *
          *(double *)(local_11d8 + 0x2e8))) * dVar6 *
         (local_178 + local_170 * dVar8 + local_168 * dVar8 * dVar8)) /
         ((dVar8 + 200000000000000.0) * (dVar8 + 200000000000000.0));
}

