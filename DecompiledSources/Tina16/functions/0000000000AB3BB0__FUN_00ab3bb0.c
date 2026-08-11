/* Ghidra address: 00ab3bb0 */
/* Ghidra symbol: FUN_00ab3bb0 */


longlong FUN_00ab3bb0(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00ac3460(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x6c) = *(undefined4 *)(param_4 + 0x6c);
  FUN_00414ad0(local_res8 + 0xd0,*(undefined8 *)(param_4 + 0xd0));
  local_20 = *(longlong *)(local_res8 + 0xd0);
  local_24 = 0;
  if (local_20 != 0) {
    local_24 = *(undefined4 *)(local_20 + -4);
  }
  FUN_004169f0(local_res8 + 0xd0,local_24);
  uVar2 = FUN_00416740(*(undefined8 *)(local_res8 + 0xd0));
  *(undefined8 *)(local_res8 + 0xd8) = uVar2;
  FUN_004194b0(local_res8 + 0xe0,*(undefined8 *)(param_4 + 0xe0),&DAT_00a84d10);
  uVar2 = FUN_00a94870(&LAB_00a7db10,1,local_res8,*(undefined8 *)(param_4 + 0x118));
  *(undefined8 *)(local_res8 + 0x118) = uVar2;
  uVar2 = FUN_00ac4f50(&PTR_FUN_00a81f20,1,param_3,*(undefined8 *)(param_4 + 0xf8));
  *(undefined8 *)(local_res8 + 0xf8) = uVar2;
  uVar2 = FUN_00ac4f50(&LAB_00a88c98,1,param_3,*(undefined8 *)(param_4 + 0x100));
  *(undefined8 *)(local_res8 + 0x100) = uVar2;
  uVar2 = FUN_00610ca0(&LAB_00a848c0,1);
  *(undefined8 *)(local_res8 + 0xf0) = uVar2;
  *(undefined1 *)(local_res8 + 0x120) = *(undefined1 *)(param_4 + 0x120);
  *(undefined4 *)(local_res8 + 0xb4) = *(undefined4 *)(param_4 + 0xb4);
  *(undefined4 *)(local_res8 + 300) = *(undefined4 *)(param_4 + 300);
  *(undefined4 *)(local_res8 + 0xb0) = *(undefined4 *)(param_4 + 0xb0);
  *(undefined1 *)(local_res8 + 0xa8) = *(undefined1 *)(param_4 + 0xa8);
  *(undefined1 *)(local_res8 + 0x128) = *(undefined1 *)(param_4 + 0x128);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

