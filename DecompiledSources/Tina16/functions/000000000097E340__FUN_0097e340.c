/* Ghidra address: 0097e340 */
/* Ghidra symbol: FUN_0097e340 */


void FUN_0097e340(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined *local_60;
  ushort local_58;
  ushort local_56;
  undefined1 *local_50;
  ushort local_42;
  undefined8 local_40;
  ushort *local_38;
  ushort *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_60 = (undefined *)0x0;
  local_20[0] = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res18);
  *local_res20 = 0;
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
  FUN_008f9470(local_28,1);
  *(undefined1 *)(local_28 + 2) = 2;
  local_38 = (ushort *)FUN_00415f70(local_res18);
  local_30 = local_38;
  while (cVar1 = FUN_008ff320(*local_38), cVar1 == '\0') {
    local_38 = local_38 + 1;
  }
  FUN_004147a0(local_res20,local_30,((longlong)local_38 - (longlong)local_30) / 2 & 0xffffffff);
  (**(code **)(*param_1 + 0x100))(param_1,param_2,*local_res20);
  local_30 = local_38;
  while (cVar1 = FUN_008ff300(*local_30), cVar1 != '\0') {
    local_30 = local_30 + 1;
  }
  do {
    if (*local_30 == DAT_01e32a90) {
      FUN_00410f20(local_28);
LAB_0097e7ae:
      FUN_00414520(&local_60);
      FUN_00414520(&local_40);
      FUN_00414520(local_20);
      FUN_00414520(&local_res18);
      return;
    }
    local_38 = local_30;
    while (cVar1 = FUN_008ff300(*local_38), cVar1 == '\0') {
      local_58 = DAT_01e32a90;
      local_56 = DAT_01e32a96;
      cVar1 = FUN_004322c0(local_38,&local_58,1);
      if (cVar1 != '\0') break;
      local_38 = local_38 + 1;
    }
    FUN_004147a0(local_20,local_30,((longlong)local_38 - (longlong)local_30) / 2 & 0xffffffff);
    local_30 = local_38;
    while (cVar1 = FUN_008ff300(*local_30), cVar1 != '\0') {
      local_30 = local_30 + 1;
    }
    if (*local_30 != DAT_01e32a96) {
      local_78 = &DAT_0097e850;
      (**(code **)(*param_1 + 0x90))(param_1,0x53,param_2,0);
LAB_0097e7a0:
      FUN_0097e7f0(0,local_50);
      goto LAB_0097e7ae;
    }
    do {
      local_30 = local_30 + 1;
      cVar1 = FUN_008ff300(*local_30);
    } while (cVar1 != '\0');
    local_58 = DAT_01e32a92;
    local_56 = DAT_01e32a94;
    cVar1 = FUN_004322c0(local_30,&local_58,1);
    if (cVar1 == '\0') {
      local_78 = &DAT_0097e858;
      (**(code **)(*param_1 + 0x90))(param_1,0x54,param_2,0);
      goto LAB_0097e7a0;
    }
    local_42 = *local_30;
    local_38 = local_30 + 1;
    local_30 = local_38;
    while( true ) {
      local_58 = DAT_01e32a90;
      local_56 = local_42;
      cVar1 = FUN_004322c0(local_38,&local_58,1);
      if (cVar1 != '\0') break;
      local_38 = local_38 + 1;
    }
    if (*local_38 == DAT_01e32a90) {
      FUN_00415e60(&local_60,local_42);
      local_78 = local_60;
      (**(code **)(*param_1 + 0x90))(param_1,0x54,param_2,0);
      goto LAB_0097e7a0;
    }
    FUN_004147a0(&local_40,local_30,((longlong)local_38 - (longlong)local_30) / 2 & 0xffffffff);
    (**(code **)(*local_28 + 0x68))(local_28,local_20[0]);
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,local_20[0],local_40);
    local_30 = local_38 + 1;
    cVar1 = FUN_008ff320(*local_30);
    if (cVar1 == '\0') {
      local_78 = &LAB_0097e860;
      (**(code **)(*param_1 + 0x90))(param_1,0x56,param_2,0);
      goto LAB_0097e7a0;
    }
    while (cVar1 = FUN_008ff300(*local_30), cVar1 != '\0') {
      local_30 = local_30 + 1;
    }
  } while( true );
}

