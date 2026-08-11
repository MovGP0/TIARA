/* Ghidra address: 017e89e0 */
/* Ghidra symbol: FUN_017e89e0 */


void FUN_017e89e0(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4,
                 undefined1 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 local_340;
  undefined1 local_338 [8];
  double local_330;
  double local_328;
  undefined8 local_308 [47];
  int local_190;
  undefined2 local_130;
  undefined1 local_d0 [184];
  
  local_340 = 0;
  puVar3 = local_308;
  for (lVar2 = 0x5e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 < 0x13d) {
    if (param_2 == 0x13c) {
      FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_190,local_338);
      cVar1 = FUN_010c7d50(param_5,local_338);
      if (cVar1 == '\0') {
        FUN_017e2900(param_1,0x106);
        goto LAB_017e8d7b;
      }
      if (local_330 <= 0.0) {
        FUN_017e2900(param_1,0x107);
        goto LAB_017e8d7b;
      }
      FUN_010c8c20(param_5,local_338);
    }
    else if (param_2 == 0x139) {
      if (local_190 == 0x104) {
        FUN_017e2900(param_1,0x105);
        goto LAB_017e8d7b;
      }
      FUN_017e8dc0(param_1,local_190,param_5);
    }
    else if (param_2 == 0x13a) {
      if (local_190 == 0x104) {
        FUN_017e2900(param_1,0x105);
        goto LAB_017e8d7b;
      }
      FUN_017e8f40(param_1,local_190,param_5);
    }
    else if (param_2 == 0x13b) {
      FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_190,local_338);
      cVar1 = FUN_010c7d50(param_5,local_338);
      if (cVar1 == '\0') {
        FUN_017e2900(param_1,0x106);
        goto LAB_017e8d7b;
      }
      FUN_004169a0(&local_340,local_d0);
      FUN_017e90f0(param_1,param_5,local_338,local_130,*(int *)(param_1 + 0x55c) + 2,local_340,
                   param_4);
    }
  }
  else if (param_2 == 0x13d) {
    FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_190,local_338);
    cVar1 = FUN_010c7d50(param_5,local_338);
    if (cVar1 == '\0') {
      cVar1 = FUN_010c7e30(param_5,local_338);
      if (cVar1 == '\0') {
        FUN_010c7a80(param_5);
        FUN_010c7a80(local_338);
        dVar4 = (double)FUN_0040c850(*(double *)(param_5 + 8) + local_330);
        if (dVar4 < 1e-30) {
          dVar4 = (double)FUN_0040c850(*(double *)(param_5 + 0x10) + local_328);
          if (dVar4 < 1e-30) {
            FUN_017e2900(param_1,0x100);
            goto LAB_017e8d7b;
          }
        }
      }
    }
    else {
      dVar4 = (double)FUN_0040c850(*(double *)(param_5 + 8) + local_330);
      if (dVar4 < 1e-30) {
        FUN_017e2900(param_1,0x100);
        goto LAB_017e8d7b;
      }
    }
    FUN_010c8bd0(param_5,local_338);
  }
  else if (param_2 == 0x153) {
    FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_190,local_338);
    FUN_010c8ba0(param_5,local_338);
  }
  else if (param_2 == 0x154) {
    FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),(undefined2)local_190,local_338);
    FUN_010c8b70(param_5,local_338);
  }
  cVar1 = FUN_010c7a10(*(undefined8 *)(param_5 + 0x10));
  if (cVar1 != '\0') {
    *(undefined8 *)(param_5 + 0x10) = 0;
    *param_5 = 0;
  }
LAB_017e8d7b:
  FUN_00414480(&local_340);
  return;
}

