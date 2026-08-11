/* Ghidra address: 015d5840 */
/* Ghidra symbol: FUN_015d5840 */


void FUN_015d5840(longlong *param_1,char param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_378 [32];
  longlong *local_358;
  longlong *local_350;
  undefined8 local_330 [5];
  undefined8 local_302;
  undefined8 local_2a0 [5];
  undefined8 local_272;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200 [5];
  undefined8 local_1d2;
  undefined8 local_170 [16];
  char local_ee;
  undefined8 local_e0 [16];
  char local_5e;
  undefined1 *local_50;
  byte local_3a;
  char local_39;
  longlong *local_38;
  int local_30;
  char local_29;
  undefined8 local_20;
  
  puVar3 = local_330;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_2a0;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_210 = 0;
  local_208 = 0;
  puVar3 = local_200;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_170;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_e0;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_20 = 0;
  local_38 = (longlong *)0x0;
  local_50 = auStack_378;
  FUN_015ca180(param_1);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x101) = 1;
  if (param_3 == -1) {
    iVar1 = FUN_015c2df0();
    local_30 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_e0,local_30);
        if (local_5e != '\0') {
          *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
        }
        local_30 = local_30 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
  }
  if ((param_2 == '\x04') || (param_2 == '\x05')) {
    local_358 = param_1 + 0x20;
    (**(code **)(*param_1 + 0x98))(param_1,0,param_2,0);
  }
  if ((char)param_1[0x20] == '\0') {
    local_30 = 0;
    if (param_3 != -1) {
      local_30 = param_3;
    }
    while (iVar1 = FUN_015c2df0(*(undefined8 *)(param_1[0x47] + 0x28)), local_30 < iVar1) {
      FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_170,local_30);
      if (local_ee == '\0') {
        local_30 = local_30 + 1;
      }
      else {
        lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_30);
        *(char *)(lVar2 + 0x8e) = param_2;
        do {
          local_29 = '\x01';
          FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_200,local_30);
          FUN_00414b50(&local_20,local_1d2);
          local_358 = (longlong *)CONCAT71(local_358._1_7_,1);
          FUN_015bf370(&local_208,local_20,&DAT_015d6088,&DAT_015d6098);
          FUN_00414b50(&local_20,local_208);
          (**(code **)(*param_1 + 0xb8))(param_1,local_20,param_2,&local_39);
          if (local_39 == '\0') {
            if (param_2 == '\x02') {
              local_30 = local_30 + 1;
            }
          }
          else {
            if (param_1[0xf] == 0) {
              FUN_015bf890(&local_210);
              FUN_00414ad0(param_1 + 0xf,local_210);
            }
            FUN_015c1190(&local_38,param_1[0x16],param_1[0xf]);
            if ((param_2 == '\x04') || (param_2 == '\x05')) {
              FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_2a0,local_30);
              local_358 = (longlong *)((ulonglong)local_358 & 0xffffffffffffff00);
              local_350 = param_1 + 0x20;
              (**(code **)(*param_1 + 0xa0))(param_1,local_272,0,param_2);
            }
            if ((char)param_1[0x20] != '\0') break;
            if (param_2 == '\x02') {
              FUN_015d60a0(param_1,local_30);
            }
            else if (param_2 == '\x03') {
              FUN_015d60c0(param_1,local_30,local_20,local_38);
            }
            else if (param_2 == '\x04') {
              FUN_015d64b0(param_1,local_30,local_20,local_38);
            }
            else if (param_2 == '\x05') {
              FUN_015d6f60(param_1,local_30,local_20);
            }
            local_3a = *(byte *)(param_1 + 0x20);
            if ((param_2 == '\x04') || (param_2 == '\x05')) {
              FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_330,local_30);
              local_358 = (longlong *)CONCAT71(local_358._1_7_,2);
              local_350 = param_1 + 0x20;
              (**(code **)(*param_1 + 0xa0))(param_1,local_302,0x4059000000000000,param_2);
            }
            *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | local_3a;
            if ((char)param_1[0x20] != '\0') break;
            *(int *)((longlong)param_1 + 0xe4) = *(int *)((longlong)param_1 + 0xe4) + 1;
          }
        } while (local_29 == '\0');
        if ((local_29 == '\x02') || ((char)param_1[0x20] != '\0')) break;
        if (param_2 != '\x02') {
          local_30 = local_30 + 1;
        }
      }
      if (param_3 != -1) break;
    }
    local_3a = *(byte *)(param_1 + 0x20);
    if ((param_2 == '\x04') || (param_2 == '\x05')) {
      local_358 = param_1 + 0x20;
      (**(code **)(*param_1 + 0x98))(param_1,0x4059000000000000,param_2,2);
    }
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | local_3a;
  }
  if (((char)param_1[0x20] != '\0') || (local_29 == '\x02')) {
    FUN_015dd040(param_1);
  }
  FUN_015ca1a0(param_1);
  FUN_00417840(local_330,&DAT_015b9418,2);
  FUN_00414560(&local_210,2);
  FUN_00417840(local_200,&DAT_015b9418,3);
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  return;
}

