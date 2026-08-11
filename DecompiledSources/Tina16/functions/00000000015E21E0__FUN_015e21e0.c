/* Ghidra address: 015e21e0 */
/* Ghidra symbol: FUN_015e21e0 */


void FUN_015e21e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_608 [18];
  undefined8 local_578 [18];
  undefined8 local_4e8;
  undefined2 local_4dc;
  undefined8 local_458;
  undefined2 local_44a;
  undefined8 local_3c8;
  undefined2 local_3bc;
  undefined8 local_338;
  undefined2 local_32a;
  undefined8 local_2a8 [5];
  undefined8 local_27a;
  undefined8 local_218 [5];
  undefined8 local_1ea;
  undefined8 local_188 [5];
  undefined8 local_15a;
  undefined8 local_f8 [5];
  undefined8 local_ca;
  undefined8 local_58;
  undefined8 local_50;
  char local_42;
  char local_41;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar4 = local_608;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_578;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_4e8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_458;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_3c8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_338;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_2a8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_218;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_188;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_f8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_50 = 0;
  local_58 = 0;
  local_3c = FUN_015c2df0(*param_2);
  local_38 = local_3c;
  iVar2 = FUN_015c2df0();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_015c29e0(*param_3,local_f8,local_34);
      FUN_015c33c0(*param_2,local_ca,&local_40);
      if (local_40 == -1) {
        local_3c = local_3c + 1;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_015c2ad0(*param_2,local_3c);
  local_3c = local_38;
  iVar2 = FUN_015c2df0();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_015c29e0(*param_3,local_188,local_34);
      FUN_015c33c0(*param_2,local_15a,&local_40);
      if (local_40 == -1) {
        FUN_015c29e0(*param_3,local_608,local_34);
        FUN_015c24e0(*param_2,local_3c,local_608);
        lVar3 = FUN_015c2a60(*param_2,local_3c);
        *(undefined1 *)(lVar3 + 0x82) = 1;
        local_3c = local_3c + 1;
      }
      else {
        local_42 = '\0';
        cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0xb);
        if (cVar1 == '\0') {
          FUN_015c29e0(*param_3,local_218,local_34);
          FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0x78),&LAB_015e2778,local_1ea);
          FUN_015c29e0(*param_2,local_2a8,local_40);
          FUN_00416cd0(&local_58,3,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88),
                       &LAB_015e2778,local_27a);
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0xb0))
                    (*(longlong **)(param_1 + 0x70),local_50,&local_58,&local_41);
          if (local_41 == '\0') break;
          local_42 = '\x01';
        }
        else if (cVar1 == '\x01') {
          local_42 = '\x01';
        }
        else if ((byte)(cVar1 - 3U) < 2) {
          FUN_015c29e0(*param_2,&local_338,local_40);
          local_2c._2_2_ = local_32a;
          FUN_015c29e0(*param_2,&local_3c8,local_40);
          local_2c = CONCAT22(local_2c._2_2_,local_3bc);
          FUN_015c29e0(*param_3,&local_458,local_34);
          local_30._2_2_ = local_44a;
          FUN_015c29e0(*param_3,&local_4e8,local_34);
          local_30 = CONCAT22(local_30._2_2_,local_4dc);
          if (((local_2c < local_30) ||
              (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0xb) != '\x03')) &&
             ((local_30 < local_2c ||
              (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0xb) != '\x04')))) {
            local_42 = '\x01';
          }
        }
        if (local_42 != '\0') {
          FUN_015c29e0(*param_3,local_578,local_34);
          FUN_015c24e0(*param_2,local_40,local_578);
          lVar3 = FUN_015c2a60(*param_2,local_40);
          *(undefined1 *)(lVar3 + 0x82) = 1;
        }
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00417840(local_608,&DAT_015b9418,10);
  FUN_00414560(&local_58,2);
  return;
}

