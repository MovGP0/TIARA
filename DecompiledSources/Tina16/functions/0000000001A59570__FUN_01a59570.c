/* Ghidra address: 01a59570 */
/* Ghidra symbol: FUN_01a59570 */


void FUN_01a59570(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_e0 = auStack_148;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_20[0] = 0;
  local_128 = L"ai_sample_tb.json";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\aiprompts\\");
  cVar1 = FUN_00440a20(local_38,1);
  if (cVar1 != '\0') {
    lVar2 = FUN_019cd7d0(&DAT_019cc810,1);
    *(longlong *)(param_1 + 0x2978) = lVar2;
    *(undefined1 *)(lVar2 + 0x39) = 1;
    if ((param_2 & 1) != 0) {
      FUN_00416ba0(&local_e8,L"Local: ",*(undefined8 *)(param_1 + 0x2bb8));
      local_128 = (wchar_t *)((ulonglong)local_128 & 0xffffffff00000000);
      local_d8 = FUN_0147afe0(&DAT_0147a648,1,local_e8,0);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x40),local_d8);
    }
    if ((param_2 & 2) != 0) {
      FUN_00416ba0(&local_f0,L"Local: ",*(undefined8 *)(param_1 + 0x868));
      local_128 = (wchar_t *)((ulonglong)local_128 & 0xffffffff00000000);
      local_d8 = FUN_0147afe0(&DAT_0147a648,1,local_f0,1);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x40),local_d8);
    }
    if ((param_2 & 4) != 0) {
      local_128 = (wchar_t *)((ulonglong)local_128 & 0xffffffff00000000);
      local_d8 = FUN_0147afe0(&DAT_0147a648,1,L"OpenAI: gpt-4o",1);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x40),local_d8);
    }
    if ((param_2 & 8) != 0) {
      FUN_00416ba0(&local_f8,L"Local: ",*(undefined8 *)(param_1 + 0x868));
      local_128 = (wchar_t *)((ulonglong)local_128 & 0xffffffff00000000);
      local_d8 = FUN_0147afe0(&DAT_0147a648,1,local_f8,2);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x40),local_d8);
    }
    FUN_019cdad0(*(undefined8 *)(param_1 + 0x2978));
    FUN_019cdae0(*(undefined8 *)(param_1 + 0x2978),*(undefined8 *)(param_1 + 0x2968),0);
    if (*(longlong *)PTR_DAT_02001920 != 0) {
      FUN_019ce6c0(*(undefined8 *)PTR_DAT_02001920,
                   *(int *)(*(longlong *)(param_1 + 0x2978) + 0x14) + 1,
                   *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2978) + 0x40) + 0x10),
                   *(undefined8 *)(param_1 + 0x2968));
    }
    FUN_00414480(local_20);
    FUN_005d10a0(local_38,0,0);
    FUN_005d1300(local_20,local_38);
    uVar3 = FUN_00f30500(local_20[0],0,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x18) = uVar3;
    FUN_00414480(local_20);
    if (*(longlong *)(*(longlong *)(param_1 + 0x2978) + 0x18) == 0) {
      local_110 = local_38;
      local_108 = 0x11;
      FUN_00442f70(&local_100,L"Failed to load: %s",&local_110,0);
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_100);
      FUN_004134c0(uVar3);
    }
    lVar2 = *(longlong *)(param_1 + 0x2978);
    local_c8 = FUN_004113f0(*(undefined8 *)(lVar2 + 0x18),&LAB_00f256b8);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(*(longlong *)(local_c8 + 0x10) + 0x10);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 0xc) + -1;
    *(undefined1 *)(param_1 + 0x2b48) = 1;
  }
  FUN_00414560(&local_100,4);
  FUN_00414560(&local_70,9);
  FUN_00414480(local_20);
  return;
}

