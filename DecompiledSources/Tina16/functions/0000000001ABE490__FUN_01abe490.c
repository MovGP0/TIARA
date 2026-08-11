/* Ghidra address: 01abe490 */
/* Ghidra symbol: FUN_01abe490 */


undefined8 FUN_01abe490(undefined8 param_1,longlong *param_2,double param_3,double *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_c0 [16];
  double local_b0 [16];
  
  uVar3 = 0;
  *param_4 = 0.0;
  local_b0[0] = 0.0;
  (**(code **)(*param_2 + 0x10))(param_2,param_1,0);
  dVar6 = 0.0;
  dVar10 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  do {
    while( true ) {
      cVar2 = (**(code **)(*param_2 + 0x88))(param_2,local_b0,local_c0);
      if (cVar2 == '\0') goto code_r0x01abe60b;
      dVar5 = (double)FUN_00c445d0(local_c0);
      dVar5 = dVar5 * 57.29577951308232;
      dVar4 = (double)FUN_0040c850(dVar5 - dVar6);
      if (180.0 < dVar4) {
        cVar2 = FUN_005270a0(dVar5 - dVar6);
        dVar5 = dVar5 - (double)(cVar2 * 0x168);
      }
      if (dVar5 == param_3) {
        *param_4 = local_b0[0];
        return 1;
      }
      dVar6 = dVar5;
      if ((dVar5 - param_3) * (dVar8 - param_3) <= 0.0) break;
      dVar8 = dVar5;
      dVar7 = local_b0[0];
      if (dVar9 != 0.0) goto code_r0x01abe60b;
    }
    dVar10 = dVar5;
    dVar9 = local_b0[0];
  } while (dVar7 == 0.0);
code_r0x01abe60b:
  if (0.0 <= (dVar8 - param_3) * (dVar10 - param_3)) {
    bVar1 = false;
  }
  else {
    dVar5 = (double)FUN_01cc92d0(param_2,param_1);
    dVar6 = dVar9;
    if (dVar7 < dVar9) {
      dVar6 = dVar7;
    }
    bVar1 = dVar5 <= dVar6;
  }
  if (bVar1) {
    dVar5 = (double)(**(code **)(*param_2 + 0xa0))(param_2,param_1);
    dVar6 = dVar9;
    if (dVar9 < dVar7) {
      dVar6 = dVar7;
    }
    if (dVar6 <= dVar5) {
      *param_4 = dVar7 + ((dVar9 - dVar7) * (param_3 - dVar8)) / (dVar10 - dVar8);
      uVar3 = 1;
    }
  }
  return uVar3;
}

