/* Ghidra address: 00c55a90 */
/* Ghidra symbol: FUN_00c55a90 */


longlong * FUN_00c55a90(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x40;
  *(undefined1 *)((longlong)local_res8 + 0x50c) = 2;
  *(undefined4 *)((longlong)local_res8 + 0x504) = 4;
  *(undefined4 *)(local_res8 + 0xa1) = 4;
  *(undefined1 *)((longlong)local_res8 + 0x4f4) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x4f5) = 1;
  FUN_0064e030(local_res8,0xff00000f);
  FUN_005fdcb0(*(undefined8 *)(local_res8[0x92] + 0x80),0);
  FUN_005fd4e0(*(undefined8 *)(local_res8[0x92] + 0x78),0);
  local_38 = 100;
  (**(code **)(*local_res8 + 400))(local_res8,0,0,100);
  uVar2 = thunk_FUN_041715dd(0xf);
  thunk_FUN_041a3f2d(uVar2,0,0x14,local_res8 + 0x93);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

