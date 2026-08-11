/* Ghidra address: 012d9730 */
/* Ghidra symbol: FUN_012d9730 */


void FUN_012d9730(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_70 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_20 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_012d74a0(param_1);
  local_50 = FUN_00448ea0();
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
            (*(longlong **)(param_1 + 0x10),&local_78,L"header");
  FUN_0041b890(&local_28,local_78,&DAT_012d9e8e);
  (**(code **)(*local_28 + 0x100))(local_28,&local_80,L"delphistarttime");
  local_68 = local_80;
  local_48 = FUN_004486a0(local_80,local_50,PTR_DAT_02004830);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
            (*(longlong **)(param_1 + 8),&local_30,L"footer");
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
            (*(longlong **)(param_1 + 0x10),&local_88,local_30);
  FUN_00440030(&local_90,*(undefined1 *)(param_1 + 99),1);
  (**(code **)(*local_30 + 0x108))(local_30,L"success",local_90);
  FUN_00414480(&local_20);
  FUN_0044a300(&local_20,local_50,PTR_DAT_02004830);
  (**(code **)(*local_30 + 0x108))(local_30,L"endtime",local_20);
  FUN_00414480(&local_20);
  FUN_012d9330(auStack_118,&local_98,local_50,local_48);
  (**(code **)(*local_30 + 0x108))(local_30,L"duration",local_98);
  if (*(char *)(param_1 + 99) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
              (*(longlong **)(param_1 + 8),&local_38,L"buglist");
    (**(code **)(*local_30 + 0x98))(local_30,&local_a0,local_38);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    local_54 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                  (*(longlong **)(param_1 + 8),&local_40,&DAT_012d9f68);
        (**(code **)(*local_38 + 0x98))(local_38,&local_a8,local_40);
        FUN_004b3cf0(*(undefined8 *)(param_1 + 0x28),&local_b8,local_54);
        FUN_00416ba0(&local_b0,&DAT_012d9f98,local_b8);
        (**(code **)(*local_40 + 0x108))(local_40,L"circuit",local_b0);
        FUN_004b5390(*(undefined8 *)(param_1 + 0x28),&local_c0,local_54);
        (**(code **)(*local_40 + 0x108))(local_40,L"message",local_c0);
        local_54 = local_54 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00441640(&local_c8,*(undefined8 *)(param_1 + 0x30));
  cVar1 = FUN_00440b00(local_c8,1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x180))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x30),0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_01b203b0(*(undefined8 *)(param_1 + 0x30),0);
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_004414c0(&local_d0,*(undefined8 *)(param_1 + 0x30),L".log");
    cVar1 = FUN_00440a20(local_d0,1);
    if (cVar1 != '\0') {
      FUN_004414c0(&local_d8,*(undefined8 *)(param_1 + 0x30),L".html");
      cVar1 = FUN_00440a20(local_d8,1);
      if (cVar1 != '\0') {
        FUN_004414c0(&local_e0,*(undefined8 *)(param_1 + 0x30),L".log");
        uVar3 = FUN_00416740(local_e0);
        local_f8 = 0;
        local_f0 = 1;
        thunk_FUN_0419adcc(0,L"open",L"notepad.exe",uVar3);
        FUN_004414c0(&local_e8,*(undefined8 *)(param_1 + 0x30),L".html");
        uVar3 = FUN_00416740(local_e8);
        local_f8 = 0;
        local_f0 = 1;
        thunk_FUN_0419adcc(0,L"open",uVar3,0);
      }
    }
  }
  FUN_00410ef0(param_1,param_2 & 0xfc);
  FUN_00414560(&local_e8,8);
  FUN_00417840(&local_a8,&DAT_00b9f8e0,2);
  FUN_00414560(&local_98,2);
  FUN_0041b800(&local_88);
  FUN_00414480(&local_80);
  FUN_0041b800(&local_78);
  FUN_00417840(&local_40,&LAB_00b9fca0,4);
  FUN_00414480(&local_20);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

