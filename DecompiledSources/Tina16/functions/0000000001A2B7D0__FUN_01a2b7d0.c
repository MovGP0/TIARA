/* Ghidra address: 01a2b7d0 */
/* Ghidra symbol: FUN_01a2b7d0 */


void FUN_01a2b7d0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a2a060(&local_38,L"%s-json-saved.json");
  FUN_00414b50(&local_30,local_38);
  uVar1 = FUN_019a4600();
  FUN_01a2b2d0(param_1,uVar1,local_38,1);
  if (*(char *)(param_1 + 0x708) == '\x01') {
    FUN_01a2a060(&local_40,L"%s-json-wires-save.json");
    FUN_01a2a060(&local_48,L"%s-json-res.json");
    FUN_01480910(local_38,local_40,local_48);
    FUN_00414b50(&local_30,local_48);
  }
  uVar1 = FUN_019a4600();
  FUN_01a2abe0(param_1,local_30,uVar1,0);
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(param_1 + 0x738));
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x10));
  FUN_01a2a8d0(param_1,local_28);
  FUN_01a2a900(param_1,0);
  *(undefined1 *)(param_1 + 0x708) = 2;
  FUN_00410f20(local_28);
  FUN_00414560(&local_48,4);
  return;
}

