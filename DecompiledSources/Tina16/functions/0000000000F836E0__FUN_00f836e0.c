/* Ghidra address: 00f836e0 */
/* Ghidra symbol: FUN_00f836e0 */


longlong FUN_00f836e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_78 [40];
  code *local_50;
  longlong local_48;
  undefined1 *local_40;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x8e) = 0;
  *(undefined4 *)(local_res8 + 0x88) = 0;
  uVar4 = FUN_004afa90(&DAT_00473870,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar4;
  local_48 = local_res8;
  local_50 = FUN_00f839f0;
  uVar4 = FUN_004d6440(&local_50);
  *(undefined8 *)(local_res8 + 0x78) = uVar4;
  local_2c = thunk_FUN_0412a547(&local_28,8);
  if (local_2c == 0) {
    uVar3 = FUN_00b905e0(local_28,1);
    uVar2 = FUN_00b905f0(uVar3,local_24);
    *(undefined2 *)(local_res8 + 0x8c) = uVar2;
    thunk_FUN_041b58bc(uVar2);
  }
  else {
    *(undefined2 *)(local_res8 + 0x8c) = 0xffff;
  }
  uVar4 = thunk_FUN_0416e139(0,0,0,0);
  *(undefined8 *)(local_res8 + 0x90) = uVar4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

