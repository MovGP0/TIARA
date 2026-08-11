/* Ghidra address: 01abe230 */
/* Ghidra symbol: FUN_01abe230 */


void FUN_01abe230(longlong *param_1,undefined8 param_2,double param_3,double param_4,double *param_5
                 ,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90 [15];
  
  dVar12 = 0.0;
  dVar9 = 1e+50;
  dVar10 = -1e+50;
  dVar7 = 1e+50;
  dVar8 = -1e+50;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  cVar5 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
  dVar11 = 1e+50;
  dVar1 = -1e+50;
  dVar2 = 1e+50;
  dVar3 = -1e+50;
  dVar4 = 0.0;
  if (cVar5 != '\0') {
    while (dVar12 = dVar4, dVar8 = dVar3, dVar7 = dVar2, dVar10 = dVar1, dVar9 = dVar11,
          cVar5 = (**(code **)(*param_1 + 0x30))(param_1,&local_a0,&local_a8,0), cVar5 != '\0') {
      if ((param_3 <= local_90[0]) && (local_90[0] <= param_4)) {
        uVar6 = FUN_00b90650(dVar7,local_98);
        dVar7 = (double)FUN_00b90650(uVar6,local_a8);
        uVar6 = FUN_00b90620(dVar8,local_98);
        dVar8 = (double)FUN_00b90620(uVar6,local_a8);
        uVar6 = FUN_00b90650(dVar9,local_90[0]);
        dVar9 = (double)FUN_00b90650(uVar6,local_a0);
        uVar6 = FUN_00b90620(dVar10,local_90[0]);
        dVar10 = (double)FUN_00b90620(uVar6,local_a0);
        dVar12 = dVar12 + ((local_a0 - local_90[0]) * (local_98 + local_a8)) / 2.0;
      }
      local_90[0] = local_a0;
      local_98 = local_a8;
      dVar11 = dVar9;
      dVar1 = dVar10;
      dVar2 = dVar7;
      dVar3 = dVar8;
      dVar4 = dVar12;
    }
  }
  *param_5 = dVar8 - dVar7;
  dVar11 = (double)FUN_0040c850(dVar12 / (dVar10 - dVar9));
  *param_6 = (*param_5 / dVar11) * 100.0;
  return;
}

