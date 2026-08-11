/* Ghidra address: 0131a360 */
/* Ghidra symbol: FUN_0131a360 */


void FUN_0131a360(longlong param_1,byte param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  byte local_5d;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_80 = auStack_168;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_a0 = 0;
  local_a8 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_20 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_01318500(param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
            (*(longlong **)(param_1 + 8),&local_88,L"testedCircuits");
  FUN_0041b840(param_1 + 0x18,local_88);
  local_5d = FUN_01315870(param_1);
  FUN_013181b0(param_1);
  local_50 = FUN_00448ea0();
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
            (*(longlong **)(param_1 + 0x10),&local_90,L"header");
  FUN_0041b890(&local_28,local_90,&DAT_0131ad32);
  (**(code **)(*local_28 + 0x20))(local_28,&local_98);
  iVar2 = (**(code **)(*local_98 + 0x18))();
  local_58 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_28 + 0x20))(local_28,&local_b0);
      (**(code **)(*local_b0 + 0x20))(local_b0,&local_a8,local_58);
      (**(code **)(*local_a8 + 0x40))(local_a8,&local_a0);
      iVar3 = FUN_00416db0(local_a0,L"delphiStartTime");
      if (iVar3 == 0) {
        (**(code **)(*local_28 + 0x20))(local_28,&local_c8);
        (**(code **)(*local_c8 + 0x20))(local_c8,&local_c0,local_58);
        (**(code **)(*local_c0 + 0xb8))(local_c0,&local_b8);
        local_70 = local_b8;
        local_48 = FUN_004486a0(local_b8,local_50,PTR_DAT_02004830);
        break;
      }
      local_58 = local_58 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
            (*(longlong **)(param_1 + 8),&local_30,L"footer");
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
            (*(longlong **)(param_1 + 0x10),&local_d0,local_30);
  FUN_00440030(&local_e0,*(undefined1 *)(param_1 + 0x73),1);
  FUN_00c7c750(&local_d8,local_30,L"success",local_e0);
  FUN_00414480(&local_20);
  FUN_0044a300(&local_20,local_50,PTR_DAT_02004830);
  FUN_00c7c750(&local_e8,local_30,L"endTime",local_20);
  FUN_00414480(&local_20);
  FUN_01319f60(auStack_168,&local_f8,local_50,local_48);
  FUN_00c7c750(&local_f0,local_30,L"duration",local_f8);
  if (*(char *)(param_1 + 0x73) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
              (*(longlong **)(param_1 + 8),&local_38,L"buglist");
    (**(code **)(*local_30 + 0x98))(local_30,&local_100,local_38);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    local_54 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                  (*(longlong **)(param_1 + 8),&local_40,&DAT_0131ae0c);
        (**(code **)(*local_38 + 0x98))(local_38,&local_108,local_40);
        FUN_004b3cf0(*(undefined8 *)(param_1 + 0x28),&local_118,local_54);
        FUN_00416ba0(&local_110,&DAT_0131ae3c,local_118);
        (**(code **)(*local_40 + 0x108))(local_40,L"circuit",local_110);
        FUN_004b5390(*(undefined8 *)(param_1 + 0x28),&local_120,local_54);
        (**(code **)(*local_40 + 0x108))(local_40,L"message",local_120);
        local_54 = local_54 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00441640(&local_128,*(undefined8 *)(param_1 + 0x30));
  cVar1 = FUN_00440b00(local_128,1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x180))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x30),0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  if (((local_5d & *(char *)(param_1 + 0x75) == '\0') != 0) &&
     (FUN_01b203b0(*(undefined8 *)(param_1 + 0x30),param_3 + 1), *(char *)(param_1 + 0x70) != '\0'))
  {
    FUN_004414c0(&local_130,*(undefined8 *)(param_1 + 0x30),L".html");
    cVar1 = FUN_00440a20(local_130,1);
    if (cVar1 != '\0') {
      FUN_004414c0(&local_138,*(undefined8 *)(param_1 + 0x30),L".html");
      uVar4 = FUN_00416740(local_138);
      local_148 = 0;
      local_140 = 1;
      thunk_FUN_0419adcc(0,L"open",uVar4,0);
    }
  }
  FUN_00410ef0(param_1,param_2 & 0xfc);
  FUN_00414560(&local_138,6);
  FUN_00417840(&local_108,&DAT_00b9f8e0,2);
  FUN_00414480(&local_f8);
  FUN_00417840(&local_f0,&DAT_00b9f8e0,2);
  FUN_00414480(&local_e0);
  FUN_00417840(&local_d8,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_c8);
  FUN_0041b800(&local_c0);
  FUN_00414480(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_a0);
  FUN_0041b800(&local_98);
  FUN_0041b800(&local_90);
  FUN_0041b800(&local_88);
  FUN_00417840(&local_40,&LAB_00b9fca0,4);
  FUN_00414480(&local_20);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

