/* Ghidra address: 014f7f20 */
/* Ghidra symbol: FUN_014f7f20 */


void FUN_014f7f20(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  longlong local_90 [16];
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0[0] = 0;
  dVar2 = (double)FUN_016eb0a0(param_1,10);
  dVar5 = dVar2 - 0.0;
  dVar4 = dVar5 / 2.0;
  FUN_016ee260(param_1,local_90,0x48,0);
  dVar3 = (double)FUN_016ed780(param_2,param_3);
  dVar7 = *(double *)(local_90[0] + 0x20) / 8.0;
  uVar6 = 0x3ff0000000000000;
  FUN_014f7c40(local_90[0],dVar3);
  cVar1 = *(char *)(local_90[0] + 0x31);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(local_90[0] + 0x30);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') goto LAB_014f827d;
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            dVar5 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                         *(undefined8 *)(local_90[0] + 0x20));
            uVar6 = 0x412e848000000000;
            dVar2 = dVar2 + (dVar4 - dVar2) * dVar5;
          }
          else {
            FUN_00de8980(&local_a8,0x522,*(undefined8 *)(param_2 + 0x1310));
            FUN_016fd8d0(local_a8);
            dVar2 = local_c0;
          }
          goto LAB_014f827d;
        }
      }
      dVar4 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                   *(undefined8 *)(local_90[0] + 0x20));
      dVar2 = dVar2 - dVar5 * dVar4;
      goto LAB_014f827d;
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        FUN_00de8980(&local_b8,0x522,*(undefined8 *)(param_2 + 0x1310));
        FUN_016fd8d0(local_b8);
        dVar2 = local_c0;
        goto LAB_014f827d;
      }
      cVar1 = *(char *)(local_90[0] + 0x30);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          dVar5 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                       *(undefined8 *)(local_90[0] + 0x20));
          dVar2 = dVar4 + (dVar2 - dVar4) * dVar5;
          goto LAB_014f827d;
        }
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            uVar6 = 0x412e848000000000;
            dVar2 = dVar4;
          }
          else {
            FUN_00de8980(&local_b0,0x522,*(undefined8 *)(param_2 + 0x1310));
            FUN_016fd8d0(local_b0);
            dVar2 = local_c0;
          }
          goto LAB_014f827d;
        }
      }
      dVar2 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                   *(undefined8 *)(local_90[0] + 0x20));
      dVar2 = dVar4 + (0.0 - dVar4) * dVar2;
      goto LAB_014f827d;
    }
  }
  cVar1 = *(char *)(local_90[0] + 0x30);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      dVar2 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                   *(undefined8 *)(local_90[0] + 0x20));
      dVar2 = dVar5 * dVar2 + 0.0;
      goto LAB_014f827d;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        dVar2 = (double)FUN_00de92a0(dVar3 - *(double *)(local_90[0] + 0x40),
                                     *(undefined8 *)(local_90[0] + 0x20));
        uVar6 = 0x412e848000000000;
        dVar2 = (dVar4 - 0.0) * dVar2 + 0.0;
      }
      else {
        FUN_00de8980(local_a0,0x522,*(undefined8 *)(param_2 + 0x1310));
        FUN_016fd8d0(local_a0[0]);
        dVar2 = local_c0;
      }
      goto LAB_014f827d;
    }
  }
  local_c0 = 0.0;
  dVar2 = local_c0;
LAB_014f827d:
  local_c0 = dVar2;
  FUN_016ed5d0(param_1,1,local_c0,0,0,uVar6,0);
  if (*(double *)(local_90[0] + 0x38) - dVar7 <= dVar3) {
    if (*(char *)(local_90[0] + 0x30) == *(char *)(local_90[0] + 0x2a)) {
      dVar2 = *(double *)(local_90[0] + 0x10) / *(double *)(local_90[0] + 0x18);
    }
    else {
      dVar2 = (1.0 - *(double *)(local_90[0] + 0x10)) / *(double *)(local_90[0] + 0x18);
    }
    if (*(double *)(local_90[0] + 0x20) <= dVar2) {
      dVar2 = *(double *)(local_90[0] + 0x20);
    }
    FUN_016ed960(param_1,param_2,dVar2 / 10.0,0);
  }
  else {
    FUN_016ed960(param_1,param_2,(*(double *)(local_90[0] + 0x38) - dVar7 / 2.0) - dVar3,0);
  }
  FUN_00414560(&local_b8,4);
  return;
}

