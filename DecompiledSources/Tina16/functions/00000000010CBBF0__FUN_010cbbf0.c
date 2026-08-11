/* Ghidra address: 010cbbf0 */
/* Ghidra symbol: FUN_010cbbf0 */


void FUN_010cbbf0(double param_1,double *param_2,double *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  double dVar5;
  double local_res8;
  undefined1 auStack_58 [40];
  double local_30;
  
  bVar3 = 0;
  dVar5 = (double)FUN_0040c850(param_1);
  if ((dVar5 <= 1.0) || (dVar5 = (double)FUN_0040c850(param_1), 10.0 <= dVar5)) {
    if (param_1 == 0.0) {
      *param_2 = 0.0;
      *param_3 = 0.0;
    }
    else {
      dVar5 = (double)FUN_0040c850(param_1);
      local_res8 = param_1;
      if (1.0 < dVar5) {
        bVar1 = false;
        while ((dVar5 = (double)FUN_0040c850(local_res8), 10.0 <= dVar5 ||
               (cVar2 = FUN_010cbb40(auStack_58), cVar2 != '\0'))) {
          local_res8 = local_res8 / 10.0;
          bVar3 = bVar3 + 1;
        }
        *param_3 = (double)bVar3;
      }
      else {
        bVar1 = true;
        while (dVar5 = (double)FUN_0040c850(local_res8), dVar5 < 1.0) {
          local_res8 = local_res8 * 10.0;
          bVar3 = bVar3 + 1;
        }
        *param_3 = (double)(int)-(uint)bVar3;
      }
      *param_2 = local_res8;
      if (bVar1) {
        local_30 = local_res8;
        for (bVar4 = 0; (cVar2 = FUN_010cbaa0(&local_30), cVar2 == '\0' && (bVar4 < 3));
            bVar4 = bVar4 + 1) {
          local_30 = local_30 * 10.0;
        }
        dVar5 = (double)FUN_0040af10(local_30);
        *param_3 = (double)(int)(-(uint)bVar4 - (uint)bVar3);
        *param_2 = dVar5;
      }
    }
  }
  else {
    *param_2 = param_1;
    *param_3 = 0.0;
  }
  return;
}

