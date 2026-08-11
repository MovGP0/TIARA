/* Ghidra address: 00de9660 */
/* Ghidra symbol: FUN_00de9660 */


void FUN_00de9660(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  char local_99;
  double local_98;
  double local_90 [17];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0[0] = 0;
  dVar2 = (double)FUN_016eb0a0(param_1,3);
  dVar6 = dVar2 - 0.0;
  dVar5 = dVar6 / 2.0;
  dVar3 = (double)FUN_016ed780(param_2,param_3);
  uVar7 = 0x3ff0000000000000;
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  cVar1 = FUN_00de94b0(param_1,dVar3,local_90,&local_98,&local_99);
  if (local_99 != '\0') {
    if (local_99 == '\x01') {
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') goto LAB_00de99d6;
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            dVar6 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
            uVar7 = 0x412e848000000000;
            dVar2 = dVar2 + (dVar5 - dVar2) * dVar6;
          }
          else {
            FUN_00de8980(&local_b8,0x523,*(undefined8 *)(param_2 + 0x1310));
            FUN_016fd8d0(local_b8);
            dVar2 = local_d0;
          }
          goto LAB_00de99d6;
        }
      }
      dVar5 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
      dVar2 = dVar2 - dVar6 * dVar5;
      goto LAB_00de99d6;
    }
    if (local_99 != '\x02') {
      if (local_99 != '\x03') {
        FUN_00de8980(&local_c8,0x523,*(undefined8 *)(param_2 + 0x1310));
        FUN_016fd8d0(local_c8);
        dVar2 = local_d0;
        goto LAB_00de99d6;
      }
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          dVar6 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
          dVar2 = dVar5 + (dVar2 - dVar5) * dVar6;
          goto LAB_00de99d6;
        }
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            uVar7 = 0x412e848000000000;
            dVar2 = dVar5;
          }
          else {
            FUN_00de8980(&local_c0,0x523,*(undefined8 *)(param_2 + 0x1310));
            FUN_016fd8d0(local_c0);
            dVar2 = local_d0;
          }
          goto LAB_00de99d6;
        }
      }
      dVar2 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
      dVar2 = dVar5 + (0.0 - dVar5) * dVar2;
      goto LAB_00de99d6;
    }
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      dVar2 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
      dVar2 = dVar6 * dVar2 + 0.0;
      goto LAB_00de99d6;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        dVar2 = (double)FUN_00de92a0(dVar3 - local_90[0],dVar4);
        uVar7 = 0x412e848000000000;
        dVar2 = (dVar5 - 0.0) * dVar2 + 0.0;
      }
      else {
        FUN_00de8980(local_b0,0x523,*(undefined8 *)(param_2 + 0x1310));
        FUN_016fd8d0(local_b0[0]);
        dVar2 = local_d0;
      }
      goto LAB_00de99d6;
    }
  }
  local_d0 = 0.0;
  dVar2 = local_d0;
LAB_00de99d6:
  local_d0 = dVar2;
  FUN_016ed5d0(param_1,1,local_d0,0,0,uVar7,0);
  if (local_98 - dVar4 / 8.0 <= dVar3) {
    FUN_016ed960(param_1,param_2,dVar4 / 10.0,0);
  }
  else {
    FUN_016ed960(param_1,param_2,(local_98 - (dVar4 / 8.0) / 2.0) - dVar3,0);
  }
  FUN_00414560(&local_c8,4);
  return;
}

