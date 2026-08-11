/* Ghidra address: 00e46760 */
/* Ghidra symbol: FUN_00e46760 */


double FUN_00e46760(double param_1,undefined8 param_2,double param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_1318 [16];
  undefined8 local_1298;
  double local_1198;
  double local_1190;
  double local_1148;
  double local_e50;
  double local_dd8;
  double local_b60;
  double local_b30;
  double local_b18;
  double local_af8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4a0;
  undefined8 local_498;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  undefined1 local_338;
  
  local_338 = 0;
  puVar2 = local_1318;
  for (lVar1 = 0x24e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar3 = (double)FUN_0040c850(local_1298);
  local_1198 = local_1198 - local_480 * 2.0;
  dVar6 = local_1198 * local_1198;
  if (0.0 < local_4a0) {
    FUN_00b90620(((param_1 - local_4d0) / local_dd8 + local_4a0) / ((local_e50 * 2.0) / local_b30),
                 0x380b38fb9daa78e4);
    dVar4 = (double)FUN_0040c2f0();
    local_dd8 = local_dd8 * dVar4;
    if (local_dd8 < 0.0) {
      local_dd8 = 0.0;
    }
  }
  else {
    local_dd8 = 0.0;
  }
  dVar4 = (double)FUN_00c42670(param_2,local_498);
  dVar7 = (local_af8 * local_4d8) / 1.6021917e-19;
  dVar8 = (local_af8 * local_4d8 * (1.0 - local_b18 * local_4d0)) / 1.6021917e-19;
  FUN_00b90620((dVar7 + local_b60) / (dVar8 + local_b60),0x380b38fb9daa78e4);
  dVar5 = (double)FUN_0040c2f0();
  return ((dVar3 * 3.544083401655902e-61 * param_3 * local_b30) /
         (dVar4 * 10000000000.0 * local_4e0 * local_af8 * dVar6)) *
         (local_478 * dVar5 + local_470 * (dVar7 - dVar8) +
         local_468 * 0.5 * (dVar7 * dVar7 - dVar8 * dVar8)) +
         (((param_3 * 1.3806226e-23 * dVar3 * dVar3) /
          (dVar4 * 10000000000.0 * dVar6 * local_1190 * local_1148)) * local_dd8 *
         (local_478 + local_470 * dVar8 + local_468 * dVar8 * dVar8)) /
         ((dVar8 + local_b60) * (dVar8 + local_b60));
}

