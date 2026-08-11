/* Ghidra address: 018490f0 */
/* Ghidra symbol: FUN_018490f0 */


longlong FUN_018490f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_28 = FUN_01823b00(param_3,param_4);
  local_78 = *(undefined8 *)(local_28 + 0x50);
  FUN_01847460(local_res8,0,*(undefined8 *)(local_28 + 0x20),*(undefined1 *)(local_28 + 0x48));
  *(undefined1 *)(local_res8 + 0x19) = 1;
  FUN_00414ad0(local_res8 + 0x108,param_3);
  *(undefined1 *)(local_res8 + 0x18) = *(undefined1 *)(local_28 + 0x18);
  iVar2 = FUN_01847410();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_01847630(local_28,local_1c);
      FUN_01847420(local_res8,uVar3);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  while (iVar2 = FUN_01847410(local_28), 0 < iVar2) {
    FUN_004ae870(*(undefined8 *)(local_28 + 8),0);
  }
  FUN_00410f20(local_28);
  iVar2 = FUN_01847410(local_res8);
  if (0 < iVar2) {
    local_60 = 0;
    local_5c = FUN_01847410(local_res8);
    local_5c = local_5c + -1;
    FUN_0046c750(&local_58,&local_60,1,0xc);
    FUN_00461840(local_res8 + 0x110,&local_58);
  }
  FUN_00460ba0(&local_58);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

