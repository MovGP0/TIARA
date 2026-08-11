/* Ghidra address: 018cb9b0 */
/* Ghidra symbol: FUN_018cb9b0 */


void FUN_018cb9b0(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_98 [36];
  int local_74;
  undefined1 *local_70;
  char local_5a;
  char local_59;
  longlong *local_58;
  longlong *local_50;
  double local_48;
  double local_40;
  double local_38;
  int local_2c;
  longlong local_28;
  char local_1d;
  
  local_70 = auStack_98;
  local_1d = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
  if (local_1d != '\0') {
    param_1[0x15] = (longlong)param_2;
  }
  local_59 = '\0';
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if ((param_2 != (longlong *)param_1[0x29]) &&
     (FUN_00414ad0(param_1[8] + 0x158,param_2[2]), local_1d != '\0')) {
    (**(code **)(*param_2 + 0x278))(param_2);
    FUN_01973050(param_1[8],param_2);
  }
  local_5a = '\0';
  iVar2 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
  local_74 = iVar2 + -1;
  local_2c = 0;
  if (-1 < local_74) {
    do {
      local_74 = iVar2;
      local_50 = (longlong *)
                 (**(code **)(*(longlong *)param_2[0x10] + 0x20))
                           ((longlong *)param_2[0x10],local_2c);
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0192bd20);
      if ((cVar1 != '\0') && ((char)local_50[0x56] != '\0')) {
        local_59 = '\x01';
      }
      if (((param_2 != (longlong *)param_1[0x29]) || (local_2c < (int)param_2[0x33])) &&
         (param_3 == '\0')) {
        FUN_00414ad0(param_1[8] + 0x158,local_50[2]);
        (**(code **)(*local_50 + 0x278))(local_50);
        if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
          local_28 = param_1[0x15];
          FUN_01973050(param_1[8],local_50);
          param_1[0x15] = local_28;
          if ((*(char *)((longlong)local_50 + 0xc5) != '\0') &&
             (*(char *)(local_50[0x52] + 8) == '\0')) {
            (**(code **)(*local_50 + 0x280))(local_50);
            FUN_01973030(param_1[8],local_50,local_50[0x2b],0);
          }
        }
      }
      FUN_018cfd00(param_1[0x2e],local_50,0);
      if (((*(char *)((longlong)param_2 + 0xc5) != '\0') &&
          (*(char *)((longlong)local_50 + 0xc5) != '\0')) &&
         ((cVar1 = FUN_004113d0(local_50,&PTR_FUN_01923c30), cVar1 != '\0' &&
          (((char)local_50[0x55] != '\0' || (*(char *)((longlong)local_50 + 0x2a9) != '\0')))))) {
        local_40 = (double)local_50[0x16];
        local_38 = (double)(**(code **)(*local_50 + 800))(local_50);
        if ((((char)local_50[0x55] != '\0') && (local_40 < local_38)) ||
           ((*(char *)((longlong)local_50 + 0x2a9) != '\0' && (local_38 < local_40)))) {
          FUN_018cfd00(param_1[0x2e],local_50,local_38 - local_40);
          dVar3 = (double)FUN_0040c850(local_38 - (double)local_50[0x16]);
          if (0.0001 < dVar3) {
            (**(code **)(*local_50 + 0xe0))(local_50,local_38);
          }
          local_5a = '\x01';
        }
      }
      local_2c = local_2c + 1;
      local_74 = local_74 + -1;
      iVar2 = local_74;
    } while (local_74 != 0);
  }
  if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
    if (local_5a != '\0') {
      FUN_018d0aa0(param_1[0x2e],param_2);
    }
    if (local_59 != '\0') {
      FUN_018cb5d0(auStack_98);
    }
    local_48 = 0.0;
    local_58 = (longlong *)0x0;
    iVar2 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_50 = (longlong *)
                   (**(code **)(*(longlong *)param_2[0x10] + 0x20))
                             ((longlong *)param_2[0x10],local_2c);
        if (local_48 < (double)local_50[0x14] + (double)local_50[0x16]) {
          local_48 = (double)local_50[0x14] + (double)local_50[0x16];
          local_58 = local_50;
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (((local_58 != (longlong *)0x0) &&
        (cVar1 = FUN_004113d0(local_58,&PTR_FUN_018820e0), cVar1 != '\0')) &&
       ((*(byte *)(local_58[0x38] + 0x3d) & 8) != 0)) {
      local_48 = local_48 + (double)*(int *)PTR_DAT_020052f0;
    }
    if ((local_1d == '\0') || (*(char *)((longlong)param_2 + 0x1ca) != '\0')) {
      (**(code **)(*param_2 + 0xe0))(param_2,local_48);
    }
    FUN_00414ad0(param_1[8] + 0x158,param_2[2]);
    if (local_1d != '\0') {
      FUN_01973030(param_1[8],param_2,param_2[0x37],0);
    }
    iVar2 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_50 = (longlong *)
                   (**(code **)(*(longlong *)param_2[0x10] + 0x20))
                             ((longlong *)param_2[0x10],local_2c);
        cVar1 = FUN_018cb070(param_1,local_50);
        if (cVar1 != '\0') {
          (**(code **)(*local_50 + 0xe0))(local_50,local_48 - (double)local_50[0x14]);
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_018820e0);
          if ((cVar1 != '\0') && ((*(byte *)(local_50[0x38] + 0x3d) & 8) != 0)) {
            (**(code **)(*local_50 + 0xe0))
                      (local_50,(double)local_50[0x16] - (double)*(int *)PTR_DAT_020052f0);
          }
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

