/* Ghidra address: 004c7a80 */
/* Ghidra symbol: FUN_004c7a80 */


void FUN_004c7a80(undefined8 param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 in_XMM1_Qa;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  ushort *local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_3c;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  uVar6 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_60 = auStack_a8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = (longlong *)0x0;
  cVar1 = FUN_0046ca60(param_2);
  if (cVar1 != '\0') {
    uVar3 = FUN_0044d710(&PTR_FUN_00471da0,1,PTR_PTR_02003760);
    FUN_004134c0(uVar3);
  }
  uVar4 = (ulonglong)(*param_2 & 0xfff);
  local_58 = param_2;
  if (uVar4 < 8) {
    if (uVar4 == 7) {
      uVar3 = FUN_00464c60(param_2);
      FUN_004c55a0(param_1,uVar3);
      goto code_r0x004c7f1a;
    }
    if (uVar4 < 5) {
      if (uVar4 == 4) {
        dVar5 = (double)FUN_00464c60(param_2);
        FUN_004c54e0(param_1,CONCAT44(uVar6,(float)dVar5));
        goto code_r0x004c7f1a;
      }
      if (uVar4 == 0) {
        FUN_004c8510(param_1,0xd);
        goto code_r0x004c7f1a;
      }
      if (uVar4 == 1) {
        FUN_004c8510(param_1,0);
        goto code_r0x004c7f1a;
      }
      if (uVar4 - 2 < 2) goto LAB_004c7c40;
    }
    else {
      if (uVar4 == 5) {
        uVar3 = FUN_00464c60(param_2);
        FUN_004c5490(param_1,uVar3);
        goto code_r0x004c7f1a;
      }
      if (uVar4 == 6) {
        uVar3 = FUN_00465930(param_2);
        FUN_004c5560(param_1,uVar3);
        goto code_r0x004c7f1a;
      }
    }
  }
  else if (uVar4 < 0x10) {
    if (uVar4 == 8) {
      FUN_00467e90(&local_68,param_2);
      FUN_004c81b0(param_1,local_68);
      goto code_r0x004c7f1a;
    }
    if (uVar4 == 0xb) {
      iVar2 = FUN_004644a0(param_2);
      if (iVar2 == 0) {
        FUN_004c8510(param_1,8);
      }
      else {
        FUN_004c8510(param_1,9);
      }
      goto code_r0x004c7f1a;
    }
  }
  else {
    if (uVar4 - 0x10 < 3) {
LAB_004c7c40:
      uVar3 = FUN_004634b0(param_2);
      FUN_004c5830(param_1,uVar3);
      goto code_r0x004c7f1a;
    }
    if (uVar4 - 0x13 < 2) {
      local_50 = FUN_004634b0(param_2);
      FUN_004c5830(param_1,local_50);
      goto code_r0x004c7f1a;
    }
    if (uVar4 - 0x13 == 0xed) {
      FUN_00467e90(&local_70,param_2);
      FUN_004c81b0(param_1,local_70);
      goto code_r0x004c7f1a;
    }
  }
  cVar1 = FUN_0046eed0(*param_2,&local_38);
  if (cVar1 != '\0') {
    FUN_00468340(&local_78,param_2);
    uVar3 = FUN_0041b800(&local_48);
    cVar1 = FUN_00452340(local_78,&DAT_004c8004,uVar3);
    if (cVar1 != '\0') {
      local_28 = (undefined8 *)0x0;
      local_30 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_28 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_20 = FUN_004baeb0(&PTR_FUN_004812f0,1,local_30,0x400);
      (**(code **)(*local_48 + 0x20))(local_48,param_2,local_28);
      local_3c = (**(code **)*local_28)(local_28);
      FUN_00410ae0(*local_38,&local_88);
      FUN_004c81b0(local_20,local_88);
      FUN_004c3930(local_20,&local_3c,4);
      FUN_004c3930(local_20,local_28[1],(longlong)local_3c);
      FUN_00410f20(local_20);
      local_3c = (**(code **)*local_30)(local_30);
      FUN_004c8510(param_1,10);
      FUN_004c3930(param_1,&local_3c,4);
      FUN_004c3930(param_1,local_30[1],(longlong)local_3c);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
      goto code_r0x004c7f1a;
    }
  }
  FUN_00467e90(&local_80,param_2);
  FUN_004c81b0(param_1,local_80);
code_r0x004c7f1a:
  FUN_00414560(&local_88,2);
  FUN_0041b800(&local_78);
  FUN_00414560(&local_70,2);
  FUN_0041b800(&local_48);
  return;
}

