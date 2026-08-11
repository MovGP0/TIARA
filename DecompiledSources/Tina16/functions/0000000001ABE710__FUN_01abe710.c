/* Ghidra address: 01abe710 */
/* Ghidra symbol: FUN_01abe710 */


undefined8 FUN_01abe710(undefined8 param_1,longlong *param_2,double param_3,double *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_a0 [16];
  double local_90 [12];
  
  uVar3 = 0;
  *param_4 = 0.0;
  local_90[0] = 0.0;
  (**(code **)(*param_2 + 0x10))(param_2,param_1,0);
  dVar8 = 0.0;
  dVar9 = 1.0;
  dVar10 = 0.0;
  dVar7 = 1.0;
  do {
    while( true ) {
      cVar2 = (**(code **)(*param_2 + 0x88))(param_2,local_90,local_a0);
      dVar5 = dVar7;
      if (cVar2 == '\0') goto code_r0x01abe82e;
      uVar4 = FUN_00c44590(local_a0);
      dVar5 = (double)FUN_00c44470(uVar4,0);
      if (dVar5 == param_3) {
        *param_4 = local_90[0];
        return 1;
      }
      if ((dVar5 - param_3) * (dVar9 - param_3) <= 0.0) break;
      dVar8 = local_90[0];
      dVar9 = dVar5;
      dVar5 = dVar7;
      if (dVar10 != 0.0) goto code_r0x01abe82e;
    }
    dVar10 = local_90[0];
    dVar7 = dVar5;
  } while (dVar8 == 0.0);
code_r0x01abe82e:
  if (0.0 <= (dVar9 - param_3) * (dVar5 - param_3)) {
    bVar1 = false;
  }
  else {
    dVar6 = (double)FUN_01cc92d0(param_2,param_1);
    dVar7 = dVar10;
    if (dVar8 < dVar10) {
      dVar7 = dVar8;
    }
    bVar1 = dVar6 <= dVar7;
  }
  if (bVar1) {
    dVar6 = (double)(**(code **)(*param_2 + 0xa0))(param_2,param_1);
    dVar7 = dVar10;
    if (dVar10 < dVar8) {
      dVar7 = dVar8;
    }
    if (dVar7 <= dVar6) {
      *param_4 = dVar8 + ((dVar10 - dVar8) * (param_3 - dVar9)) / (dVar5 - dVar9);
      uVar3 = 1;
    }
  }
  return uVar3;
}

