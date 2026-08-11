/* Ghidra address: 0097ea60 */
/* Ghidra symbol: FUN_0097ea60 */


void FUN_0097ea60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_70 = auStack_d8;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 1;
  local_50 = 0;
  (**(code **)(*param_2 + 0x78))(param_2,&local_78);
  lVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  lVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  lVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x70))(param_2);
  local_98 = (**(code **)(*param_2 + 0x68))(param_2);
  local_b0 = lVar3 + -1;
  local_a8 = lVar4 + -1;
  local_b8 = lVar2;
  local_a0 = uVar5;
  local_30 = (longlong *)FUN_00963240(&PTR_FUN_00918a50,1,param_3,local_78);
  do {
    if ((char)local_30[0x14] == '\0') {
      FUN_00410f20(local_30);
      if (param_1[0x10] != 0) {
        local_38 = FUN_0096fb60(&PTR_FUN_0091bb20,1,param_1,param_2);
        FUN_00414b90(local_38 + 0x90,local_40);
        FUN_00414b90(local_38 + 0xb8,local_60);
        FUN_00414b90(local_38 + 0xc0,local_68);
        FUN_00414b90(local_38 + 0x88,local_58);
        *(longlong *)(local_38 + 0x98) = (longlong)local_44;
        *(longlong *)(local_38 + 0xa0) = (longlong)local_48;
        *(longlong *)(local_38 + 0xa8) = (longlong)local_50;
        *(longlong *)(local_38 + 0xb0) = (longlong)local_4c;
        (**(code **)(*(longlong *)param_1[0x10] + 0x90))((longlong *)param_1[0x10],local_38);
        FUN_00410f20(local_38);
      }
LAB_0097eeb6:
      FUN_004145c0(&local_80,2);
      FUN_004145c0(&local_68,3);
      FUN_00414520(&local_40);
      return;
    }
    (**(code **)(*local_30 + 0x70))(local_30);
    lVar2 = local_30[3];
    if ((char)lVar2 != '\0') {
      (**(code **)*local_30)(local_30,&local_80);
      if (local_30 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = local_30 + 0x16;
      }
      local_b8 = local_30[2];
      (**(code **)(*param_1 + 0x90))(param_1,(char)lVar2,plVar6,local_80);
      FUN_0097eef0(0,local_70);
      goto LAB_0097eeb6;
    }
    cVar1 = (char)local_30[0x14];
    if (cVar1 == '\x01') {
      local_44 = (**(code **)(*local_30 + 0x40))(local_30);
      local_48 = (**(code **)(*local_30 + 0x48))(local_30);
      local_48 = local_48 + -1;
      local_50 = (**(code **)(*local_30 + 0x50))(local_30);
      local_50 = local_50 + -1;
      local_4c = (**(code **)(*local_30 + 0x58))(local_30);
      if (local_50 == -1) {
        local_4c = local_4c + -1;
      }
      (**(code **)*local_30)(local_30,&local_58);
    }
    else if (cVar1 == '\x02') {
      (**(code **)*local_30)(local_30,&local_40);
    }
    else if (cVar1 == '\x03') {
      (**(code **)*local_30)(local_30,&local_60);
    }
    else if (cVar1 == '\x05') {
      (**(code **)*local_30)(local_30,&local_68);
    }
  } while( true );
}

