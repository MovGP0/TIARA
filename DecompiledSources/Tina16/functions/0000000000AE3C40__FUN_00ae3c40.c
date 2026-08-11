/* Ghidra address: 00ae3c40 */
/* Ghidra symbol: FUN_00ae3c40 */


void FUN_00ae3c40(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0;
  undefined1 *local_90;
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_68;
  char local_59;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  undefined2 local_3a;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = auStack_c8;
  local_30 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_59 = '\0';
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  local_40 = 0;
  puVar2 = auStack_c8;
  if (-1 < iVar5 + -1) {
    do {
      local_90 = puVar2;
      local_80 = *(undefined8 *)(param_1 + 0x48);
      local_78 = FUN_004aeac0(local_80,local_40);
      cVar1 = *(char *)(local_78 + 8);
      if (cVar1 == ' ') {
        FUN_00414b50(&local_30,*(undefined8 *)(local_78 + 0x28));
      }
      else if (cVar1 == '/') {
        FUN_00414b50(&local_58,*(undefined8 *)(local_78 + 0x28));
      }
      else if (cVar1 == 'C') {
        FUN_00414b50(&local_48,*(undefined8 *)(local_78 + 0x28));
        iVar3 = FUN_0043e420(local_48,L"stylesheet");
        if (iVar3 == 0) {
          local_59 = '\x01';
        }
      }
      else if (cVar1 == 'D') {
        FUN_00414b50(&local_50,*(undefined8 *)(local_78 + 0x28));
      }
      local_40 = local_40 + 1;
      iVar5 = iVar5 + -1;
      puVar2 = local_90;
    } while (iVar5 != 0);
  }
  if (local_59 != '\0') {
    local_84 = 0;
    if (local_30 != 0) {
      local_84 = *(int *)(local_30 + -4);
    }
    if (0 < local_84) {
      local_38 = 0;
      local_28 = FUN_004113f0(*(undefined8 *)(param_1 + 0x98),&DAT_00aea600);
      uVar4 = FUN_00414480(&local_68);
      FUN_00aff420(local_28,&local_30,&local_38,uVar4);
      if (local_38 != 0) {
        FUN_004b6dc0(local_38,0);
        local_20 = FUN_00a01b30(&PTR_FUN_009f2d50,1,local_38,local_30);
        local_3a = 0x20;
        local_a8 = local_58;
        local_a0 = 1;
        FUN_00ae3970(param_1,&local_3a,local_20,local_68);
        FUN_00410f20(local_20);
      }
      FUN_00aff550(local_28,local_30,local_38);
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_a8 = local_30;
    (**(code **)(param_1 + 0xc0))
              (*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0x98),local_48,local_50);
  }
  FUN_00ad4730(param_1);
  FUN_00414480(&local_68);
  FUN_00414560(&local_58,3);
  FUN_00414480(&local_30);
  return;
}

