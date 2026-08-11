/* Ghidra address: 00a9a070 */
/* Ghidra symbol: FUN_00a9a070 */


longlong FUN_00a9a070(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  local_40 = param_6;
  FUN_00a99130(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x150) = 0xffffffff;
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar2 = FUN_0082ae80(&PTR_FUN_008239c0,1,local_20);
  *(undefined8 *)(local_res8 + 0x140) = uVar2;
  local_28 = *(longlong **)(local_res8 + 0x140);
  FUN_0064cb30(local_28,0xfffff060);
  FUN_0064cbf0(local_28,1);
  FUN_0064cc50(local_28,1);
  local_28[0x78] = local_res8;
  local_28[0x77] = (longlong)FUN_00a99b90;
  local_28[0x7a] = local_res8;
  local_28[0x79] = (longlong)FUN_00a99c40;
  local_28[0x40] = local_res8;
  local_28[0x3f] = (longlong)FUN_00a9a2a0;
  (**(code **)(*local_28 + 0x128))(local_28,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(*local_28 + 0x148))
            (local_28,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  (**(code **)(**(longlong **)(local_res8 + 0x140) + 0x130))
            (*(longlong **)(local_res8 + 0x140),local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

