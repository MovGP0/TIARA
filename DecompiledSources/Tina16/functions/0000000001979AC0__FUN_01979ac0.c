/* Ghidra address: 01979ac0 */
/* Ghidra symbol: FUN_01979ac0 */


longlong * FUN_01979ac0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)((longlong)local_res8 + 0xd3) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xd4) = 0;
  *(undefined1 *)((longlong)local_res8 + 0xd2) = 6;
  (**(code **)(*local_res8 + 0x98))(local_res8,7);
  *(undefined1 *)(local_res8 + 0x1d) = 3;
  if ((char)local_res8[0x1a] == '\0') {
    uVar2 = FUN_0189d480();
    FUN_0189d6c0(uVar2,local_res8);
  }
  local_res8[0x18] = 0;
  *(undefined1 *)(local_res8 + 0x17) = 0;
  lVar3 = FUN_0197d280(&DAT_01941250,1);
  local_res8[0x1c] = lVar3;
  FUN_0197d5f0(lVar3,0);
  local_res8[0x19] = local_res8[0x1c];
  local_res8[0x1b] = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

