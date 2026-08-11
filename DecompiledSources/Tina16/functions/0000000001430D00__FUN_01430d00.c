/* Ghidra address: 01430d00 */
/* Ghidra symbol: FUN_01430d00 */


void FUN_01430d00(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  char local_39;
  undefined8 local_38;
  int local_2c;
  double local_28;
  char local_19;
  
  local_50 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_39 = '\x01';
  local_19 = '\0';
  FUN_01430b90(param_1,&local_38,param_2);
  iVar2 = (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
  iVar2 = iVar2 + -1;
  local_2c = 1;
  if (0 < iVar2) {
    do {
      (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],&local_60,local_2c);
      FUN_01430b90(param_1,&local_58,local_60);
      iVar3 = FUN_00416db0(local_58,local_38);
      if (iVar3 == 0) {
        local_19 = (char)local_2c;
        break;
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_19 == '\0') {
    if (local_39 == '\0') {
      local_28 = (double)FUN_00b8f030(param_2);
      if ((local_28 < -1e+50) || (1e+50 < local_28)) {
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_70,0x132);
        local_78 = 0x11;
        local_80 = param_2;
        FUN_00442f70(&local_68,local_70,&local_80,0);
        uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_68);
        FUN_004134c0(uVar4);
      }
      if ((param_1[0xc] != 0) &&
         (cVar1 = (*(code *)param_1[0xc])(param_1[0xd],&local_28,(int)param_1[3]), cVar1 == '\0')) {
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_90,0x133);
        local_78 = 0x11;
        local_80 = param_2;
        FUN_00442f70(&local_88,local_90,&local_80,0);
        uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_88);
        FUN_004134c0(uVar4);
      }
      FUN_01430ab0(param_1,local_28);
      FUN_01430af0(param_1,param_2);
      local_b8 = 1;
      FUN_00b8fd60(&local_98,*(undefined8 *)param_1[2],*PTR_DAT_02005310,0);
      (**(code **)(*(longlong *)param_1[4] + 0x40))((longlong *)param_1[4],0,local_98);
    }
    else {
      if (param_2 == 0) {
        FUN_0041ddd0(&local_a0,PTR_PTR_02003dd0);
        uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_a0);
        FUN_004134c0(uVar4);
      }
      FUN_01430af0(param_1,param_2);
      local_28 = (double)FUN_00b8f030(param_2);
      FUN_01430ab0(param_1,local_28);
      (**(code **)(*(longlong *)param_1[4] + 0x40))((longlong *)param_1[4],0,param_2);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_19);
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_70,4);
  FUN_00414480(&local_38);
  return;
}

