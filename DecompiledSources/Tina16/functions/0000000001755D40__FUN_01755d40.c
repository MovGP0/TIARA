/* Ghidra address: 01755d40 */
/* Ghidra symbol: FUN_01755d40 */


void FUN_01755d40(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                 undefined1 param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_1[0xb] == 0) goto LAB_0175640a;
  if (param_2 == 0) {
LAB_01755e2d:
    if (local_res18 == (longlong *)0x0) goto LAB_0175640a;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_01755e2d;
  }
  if ((*(char *)(param_1[5] + 0xb) != '\0') ||
     ((param_2 != 0 && (*(char *)(param_2 + 0x12d) != '\0')))) goto LAB_0175640a;
  (**(code **)(*param_1 + 8))(param_1,&local_58,param_2,param_5,param_6);
  FUN_01d048c0(param_1[5],local_58,local_54,&local_34,&local_38,local_res18 == (longlong *)0x0,1);
  FUN_01d048c0(param_1[5],local_50,local_4c,&local_3c,&local_40,local_res18 == (longlong *)0x0,1);
  if (param_2 == 0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 400;
    local_24 = 200;
  }
  else {
    FUN_01a98380(param_2,local_34,local_38,&local_30,&local_2c);
    FUN_01a98380(param_2,local_3c,local_40,&local_28,&local_24);
    local_2c = local_2c + 1;
    local_24 = local_24 + -1;
    local_28 = local_28 + -2;
    local_30 = local_30 + 2;
  }
  (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_30);
  iVar3 = FUN_00b905f0(local_28 - local_30,local_24 - local_2c);
  uVar4 = FUN_0040c770((double)iVar3 * 0.05);
  uVar4 = FUN_00b905f0(0xe,uVar4);
  uVar4 = FUN_00b905e0(8,uVar4);
  *(undefined4 *)(param_1[0xb] + 0x90) = uVar4;
  if (param_6 == '\0') {
LAB_0175607d:
    lVar1 = param_1[0xb];
    *(undefined4 *)(lVar1 + 0x48) = 0xffffff;
    *(undefined4 *)(lVar1 + 0xa8) = 0xc0c0c0;
  }
  else {
    cVar2 = FUN_01d07320(param_1[5]);
    if (cVar2 < '\0') goto LAB_0175607d;
    plVar5 = (longlong *)FUN_00609e10(DAT_0210ffb0);
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0,0);
    lVar1 = param_1[0xb];
    *(undefined4 *)(lVar1 + 0x48) = uVar4;
    *(undefined4 *)(lVar1 + 0xa8) = 0x808080;
  }
  if ((param_2 != 0) && (param_1[0xb] != 0)) {
    uVar6 = FUN_01a97e00(param_2);
    (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar6,0);
    FUN_01cea900(param_1[0xb],uVar6);
    FUN_01a97ea0(param_2,uVar6);
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x100))(local_res18,&local_68);
    (**(code **)(*local_68 + 0x100))(local_68,&local_60,L"updatesmallinstr");
    cVar2 = FUN_0043fc50(local_60,0);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],0);
      uVar4 = FUN_004230a0(&local_30);
      (**(code **)(*(longlong *)param_1[8] + 0x88))((longlong *)param_1[8],uVar4);
      uVar4 = FUN_004230c0(&local_30);
      (**(code **)(*(longlong *)param_1[8] + 0x70))((longlong *)param_1[8],uVar4);
      uVar6 = FUN_00609e10(param_1[8]);
      (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar6,0);
      uVar6 = FUN_00609e10(param_1[8]);
      FUN_01cea900(param_1[0xb],uVar6);
      (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],param_1[8]);
      FUN_004b9ec0(param_1[10]);
      (**(code **)(*(longlong *)param_1[9] + 200))((longlong *)param_1[9],param_1[10]);
      FUN_004b6dc0(param_1[10],0);
      FUN_00c7ba40(param_1[10],&local_48);
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x148))(local_res18,&local_20,L"shape");
        (**(code **)(*local_res20 + 0x98))(local_res20,&local_70,local_20);
        (**(code **)(*local_20 + 0x108))(local_20,L"type",L"image");
        FUN_0043f750(&local_80,0xffffffd9);
        FUN_0043f750(&local_88,0xffffffe1);
        FUN_00416cd0(&local_78,3,local_80,&DAT_017565d4,local_88);
        (**(code **)(*local_20 + 0x108))(local_20,L"position",local_78);
        FUN_0043f750(&local_98,0x4f);
        FUN_0043f750(&local_a0,0x26);
        FUN_00416cd0(&local_90,3,local_98,&DAT_017565d4,local_a0);
        (**(code **)(*local_20 + 0x108))(local_20,L"size",local_90);
        FUN_00416ba0(&local_b8,L"data:image/gif;base64,",local_48);
        (**(code **)(*local_res18 + 0x128))(local_res18,&local_b0,local_b8);
        (**(code **)(*local_20 + 0x98))(local_20,&local_a8,local_b0);
      }
    }
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((longlong)param_1 + 0x39);
LAB_0175640a:
  FUN_00414480(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414560(&local_a0,6);
  FUN_0041b800(&local_70);
  FUN_0041b800(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_48);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

