/* Ghidra address: 00aac600 */
/* Ghidra symbol: FUN_00aac600 */


longlong FUN_00aac600(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_60 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00ac3460(local_res8,0,param_3,param_4);
  uVar2 = FUN_004113f0(*(undefined8 *)(param_3 + 0x28),&PTR_FUN_00a8dc10);
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  uVar2 = FUN_00610ca0(&PTR_FUN_00a8d5e0,1);
  *(undefined8 *)(local_res8 + 0x168) = uVar2;
  iVar4 = *(int *)(*(longlong *)(param_4 + 0x168) + 0x10);
  local_1c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_28 = *(undefined8 *)(local_res8 + 0x168);
      uVar2 = FUN_00ac4a60(*(undefined8 *)(param_4 + 0x168),local_1c);
      local_30 = FUN_00aab170(&PTR_FUN_00a8cea8,1,*(undefined8 *)(param_3 + 0x28),uVar2);
      FUN_004ae7e0(local_28,local_30);
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_38 = local_res8 + 0x148;
  local_40 = local_res8 + 0x11c;
  FUN_00409a70(param_4 + 0x11c,local_res8 + 0x11c,(longlong)((int)local_38 - (int)local_40));
  *(undefined1 *)(local_res8 + 0x170) = *(undefined1 *)(param_4 + 0x170);
  *(undefined4 *)(local_res8 + 0x174) = *(undefined4 *)(param_4 + 0x174);
  *(undefined4 *)(local_res8 + 0x178) = *(undefined4 *)(param_4 + 0x178);
  FUN_00419260(local_res8 + 0x158,&DAT_00a8b940,1,(longlong)*(int *)(local_res8 + 0x128));
  FUN_00419260(local_res8 + 0xf0,&DAT_00a8b940,1,(longlong)*(int *)(local_res8 + 0x128));
  FUN_00419260(local_res8 + 0xf8,&DAT_00a8b940,1,(longlong)*(int *)(local_res8 + 0x128));
  FUN_00419260(local_res8 + 0xe0,&DAT_00a8b940,1,(longlong)*(int *)(local_res8 + 0x128));
  FUN_00419260(local_res8 + 0xe8,&DAT_00a8b940,1,(longlong)*(int *)(local_res8 + 0x128));
  FUN_00419260(local_res8 + 0x110,&DAT_00a8b980,1,(longlong)*(int *)(local_res8 + 0x128));
  if (*(longlong *)(param_4 + 0xd8) != 0) {
    uVar2 = FUN_00610ca0(&PTR_FUN_00a8da78,1);
    *(undefined8 *)(local_res8 + 0xd8) = uVar2;
    iVar4 = *(int *)(*(longlong *)(param_4 + 0xd8) + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_48 = *(undefined8 *)(local_res8 + 0xd8);
        uVar2 = FUN_00ac4a70(*(undefined8 *)(param_4 + 0xd8),local_1c);
        local_50 = FUN_00ac4b90(&DAT_00a8d778,1,uVar2);
        FUN_004ae7e0(local_48,local_50);
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0xb0) == '\0') {
    *(undefined1 *)(local_res8 + 0x150) = 0;
  }
  else {
    *(undefined1 *)(local_res8 + 0x150) = *(undefined1 *)(param_4 + 0x150);
    *(undefined4 *)(local_res8 + 0x154) = *(undefined4 *)(param_4 + 0x154);
  }
  lVar3 = FUN_00410e60(&DAT_00a706c0,1);
  *(longlong *)(local_res8 + 0xb0) = lVar3;
  *(undefined1 *)(lVar3 + 8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

