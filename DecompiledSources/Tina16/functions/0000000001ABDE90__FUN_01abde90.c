/* Ghidra address: 01abde90 */
/* Ghidra symbol: FUN_01abde90 */


void FUN_01abde90(longlong *param_1,undefined8 param_2,double param_3,double param_4,double *param_5
                 ,double *param_6,undefined8 *param_7,double *param_8,double *param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_158 [8];
  undefined1 local_118 [56];
  undefined1 local_e0 [56];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90 [13];
  
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  *param_8 = 1e+50;
  *param_9 = -1e+50;
  FUN_0040d200(local_e0,0x38,0);
  FUN_0040d200(local_118,0x38,0);
  iVar5 = 8;
  puVar4 = local_158;
  do {
    uVar3 = FUN_00409570(0x10);
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_90,&local_98,0);
  dVar7 = 0.0;
  dVar6 = 0.0;
  dVar1 = 0.0;
  if (cVar2 != '\0') {
    while (dVar10 = dVar1, dVar9 = dVar6, dVar8 = dVar7,
          cVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_a0,&local_a8,0), cVar2 != '\0') {
      if ((((param_3 <= local_90[0]) && (param_3 <= local_a0)) && (local_90[0] <= param_4)) &&
         (local_a0 <= param_4)) {
        dVar7 = (double)FUN_00b90650(*param_8,local_90[0]);
        *param_8 = dVar7;
        dVar7 = (double)FUN_00b90650(*param_8,local_a0);
        *param_8 = dVar7;
        dVar7 = (double)FUN_00b90620(*param_9,local_90[0]);
        *param_9 = dVar7;
        dVar7 = (double)FUN_00b90620(*param_9,local_a0);
        *param_9 = dVar7;
        dVar8 = dVar8 + ((local_a0 - local_90[0]) * (local_98 + local_a8)) / 2.0;
        dVar7 = (double)FUN_0040c850(local_98);
        dVar6 = (double)FUN_0040c850(local_a8);
        dVar9 = dVar9 + ((local_a0 - local_90[0]) * (dVar7 + dVar6)) / 2.0;
        dVar10 = dVar10 + ((local_a0 - local_90[0]) * (local_98 * local_98 + local_a8 * local_a8)) /
                          2.0;
      }
      local_90[0] = local_a0;
      local_98 = local_a8;
      dVar7 = dVar8;
      dVar6 = dVar9;
      dVar1 = dVar10;
    }
  }
  dVar7 = *param_9 - *param_8;
  *param_5 = dVar8 / dVar7;
  *param_6 = dVar9 / dVar7;
  uVar3 = FUN_0040c760(dVar10 / dVar7);
  *param_7 = uVar3;
  iVar5 = 8;
  puVar4 = local_158;
  do {
    FUN_004095f0(*puVar4);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

