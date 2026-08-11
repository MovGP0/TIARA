/* Ghidra address: 015cd2b0 */
/* Ghidra symbol: FUN_015cd2b0 */


char FUN_015cd2b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                 int param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined1 *local_1b0;
  short local_172;
  ulonglong local_170;
  char local_161;
  ulonglong local_160;
  undefined1 local_156 [26];
  ushort local_13c;
  ushort local_13a;
  ulonglong local_138;
  undefined8 local_118;
  undefined8 *local_100;
  char local_f1;
  undefined8 local_e6;
  ushort local_de;
  uint local_d6;
  uint local_d2;
  uint local_ce;
  longlong local_b8;
  uint local_4c;
  
  local_1b0 = auStack_1e8;
  local_b8 = FUN_015c1c10(&DAT_015b87c8,1);
  local_161 = '\0';
  puVar4 = param_4;
  puVar5 = &local_e6;
  for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
  *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
  local_f1 = (local_de & 1) == 1;
  if ((((bool)local_f1) && (*(ushort *)((longlong)param_4 + 6) < 0x4114)) &&
     ((*(char *)((longlong)param_4 + 0x4e) == '\x01' ||
      ((*(char *)((longlong)param_4 + 0x4e) == '\x02' ||
       (*(char *)((longlong)param_4 + 0x4e) == '\x03')))))) {
    local_100 = (undefined8 *)FUN_004095c0(8);
    if (*(char *)((longlong)param_4 + 0x4e) == '\x01') {
      local_1c8 = *(undefined2 *)(param_1 + 0x240);
      uVar2 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0x80,2);
      *local_100 = uVar2;
    }
    else if (*(char *)((longlong)param_4 + 0x4e) == '\x02') {
      local_1c8 = *(undefined2 *)(param_1 + 0x240);
      uVar2 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0xc0,2);
      *local_100 = uVar2;
    }
    else {
      local_1c8 = *(undefined2 *)(param_1 + 0x240);
      uVar2 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0x100,2);
      *local_100 = uVar2;
    }
    (**(code **)(*(longlong *)*local_100 + 0x20))((longlong *)*local_100,1,param_4);
    (*(code *)**(undefined8 **)*local_100)
              ((undefined8 *)*local_100,*(undefined8 *)(param_1 + 0x248));
  }
  local_118 = 0;
  local_160 = 0;
  if (*(short *)((longlong)param_4 + 0x22) == -1) {
    if (*(char *)(*(longlong *)(param_1 + 0x238) + 0xa8) == '\0') {
      FUN_015c1bf0(local_b8,0);
    }
    else {
      FUN_015c1bf0(local_b8,*(undefined4 *)(param_4 + 0xd));
    }
  }
  else {
    FUN_015c1bf0(local_b8,*(undefined2 *)((longlong)param_4 + 0x22));
  }
  if (*(short *)(*(longlong *)(param_1 + 0x238) + 0x88) == -1) {
    if (*(char *)(*(longlong *)(param_1 + 0x238) + 0xa8) == '\0') {
      *(undefined4 *)(local_b8 + 0x10) = 0;
    }
    else {
      *(int *)(local_b8 + 0x10) = *(int *)(*(longlong *)(param_1 + 0x238) + 0x48) + -1;
    }
  }
  else {
    *(uint *)(local_b8 + 0x10) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x238) + 0x88);
  }
  FUN_004b84c0(param_2,local_156,0x1e);
  (**(code **)(*param_2 + 0x48))(param_2,(uint)local_13c + (uint)local_13a,1);
  local_4c = 0xffffffff;
  if (local_d2 == 0xffffffff) {
    local_138 = param_4[0xb];
  }
  else {
    local_138 = (ulonglong)local_d2;
  }
  if (local_ce == 0xffffffff) {
    local_170 = param_4[10];
  }
  else {
    local_170 = (ulonglong)local_ce;
  }
  if (*(char *)(param_1 + 0x103) == '\0') {
    lVar3 = FUN_004b6da0(param_2);
    if (*(longlong *)(*(longlong *)(param_1 + 0x238) + 0xb0) < (longlong)(lVar3 + local_138)) {
      lVar3 = FUN_004b6da0(param_2);
      local_138 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0xb0) - lVar3;
    }
  }
  if (param_5 + param_6 == 0) {
    *(ulonglong *)(param_1 + 0x120) = local_170;
  }
  else {
    *(longlong *)(param_1 + 0x120) = param_5 + param_6;
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    *(undefined8 *)(param_1 + 0x120) = 2;
  }
  local_172 = *(short *)((longlong)param_4 + 0x8b);
  *(undefined1 *)(param_1 + 0x102) = 0;
  if ((local_172 == 0) || (local_172 == 8)) {
    local_161 = FUN_015cc950(auStack_1e8);
  }
  else if (local_172 == 9) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x37,0);
    FUN_004134c0(uVar2);
  }
  else if (local_e6._6_2_ < 0xb) {
    local_161 = '\0';
  }
  if (param_5 == 0) {
    if (local_ce == 0xffffffff) {
      if (local_160 != param_4[10]) {
        local_161 = '\0';
      }
    }
    else if (local_160 != local_ce) {
      local_161 = '\0';
    }
  }
  if (local_161 == '\0') {
    FUN_015cd970(0,local_1b0);
  }
  else {
    if ((*(char *)(param_1 + 0x102) == '\0') && (param_5 == 0)) {
      if (*(ushort *)((longlong)param_4 + 6) < 0x4114) {
        if ((local_f1 == '\0') ||
           (((*(char *)((longlong)param_4 + 0x4e) != '\x01' &&
             (*(char *)((longlong)param_4 + 0x4e) != '\x02')) &&
            (*(char *)((longlong)param_4 + 0x4e) != '\x03')))) {
          if ((local_f1 == '\0') ||
             ((local_f1 != '\0' && (*(char *)((longlong)param_4 + 0x4e) == '\0')))) {
            if (local_d6 == ~local_4c) {
              local_161 = '\x01';
            }
            else {
              local_161 = '\0';
            }
          }
        }
        else {
          (**(code **)(*(longlong *)*local_100 + 0x60))((longlong *)*local_100,param_2,0);
          cVar1 = (**(code **)(*(longlong *)*local_100 + 0x70))
                            ((longlong *)*local_100,param_4,~local_4c);
          if (cVar1 == '\0') {
            local_161 = '\x01';
          }
          else {
            local_161 = '\0';
          }
        }
      }
    }
    else {
      local_161 = '\x01';
    }
    FUN_00410f20(local_b8);
    if (((*(ushort *)((longlong)param_4 + 6) < 0x4114) && (local_f1 != '\0')) &&
       ((*(char *)((longlong)param_4 + 0x4e) == '\x01' ||
        ((*(char *)((longlong)param_4 + 0x4e) == '\x02' ||
         (*(char *)((longlong)param_4 + 0x4e) == '\x03')))))) {
      (**(code **)(*(longlong *)*local_100 + -0x20))((longlong *)*local_100,1);
      FUN_004095f0(local_100);
    }
  }
  return local_161;
}

