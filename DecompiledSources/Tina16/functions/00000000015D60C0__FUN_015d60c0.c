/* Ghidra address: 015d60c0 */
/* Ghidra symbol: FUN_015d60c0 */


void FUN_015d60c0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  undefined2 local_284;
  undefined8 local_200;
  undefined2 local_1f2;
  undefined8 local_170 [4];
  uint local_14a;
  undefined8 local_e0 [4];
  uint local_ba;
  undefined1 *local_50;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_298 = 0;
  puVar3 = &local_290;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &local_200;
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
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_50 = auStack_2b8;
  FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_e0,param_2);
  if ((local_ba & 0x10) == 0) {
    FUN_015c1220(&local_40,param_4,param_3,param_1[0xf]);
    cVar1 = FUN_015bf1b0(local_40);
    if ((cVar1 != '\0') &&
       ((*(char *)(param_1[0x18] + 0xd) != '\0' ||
        (FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_170,param_2), (local_14a & 1) == 0
        )))) {
      cVar1 = *(char *)(param_1[0x18] + 0xb);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_38,param_3);
        (**(code **)(*param_1 + 0xb0))(param_1,local_40,&local_38,&local_41);
        if (local_41 == '\0') goto LAB_015d63e0;
      }
      else {
        if (cVar1 == '\x02') goto LAB_015d63e0;
        if ((byte)(cVar1 - 3U) < 2) {
          FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_200,param_2);
          local_1c._2_2_ = local_1f2;
          FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_290,param_2);
          local_1c = CONCAT22(local_1c._2_2_,local_284);
          local_2c = FUN_015bf8b0(local_40);
          if (((local_2c <= local_1c) && (*(char *)(param_1[0x18] + 0xb) == '\x03')) ||
             ((local_1c <= local_2c && (*(char *)(param_1[0x18] + 0xb) == '\x04'))))
          goto LAB_015d63e0;
        }
      }
      FUN_00414b50(&local_28,param_1[0xf]);
      FUN_015c1220(&local_298,param_1[0x16],0,param_1[0xf]);
      FUN_00414ad0(param_1 + 0xf,local_298);
      FUN_015d3aa0(param_1,param_2,local_40);
      FUN_00414ad0(param_1 + 0xf,local_28);
    }
  }
LAB_015d63e0:
  FUN_00414480(&local_298);
  FUN_00417840(&local_290,&DAT_015b9418,4);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_28);
  return;
}

