/* Ghidra address: 004ba7d0 */
/* Ghidra symbol: FUN_004ba7d0 */


longlong FUN_004ba7d0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  ushort local_1e;
  uint local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (param_3 == 0) {
    local_1e = *(ushort *)PTR_DAT_02001cb0;
  }
  else {
    local_1e = *(ushort *)(param_3 + -0xc);
  }
  local_1c = (uint)local_1e;
  if (local_1c != 0) {
    plVar3 = (longlong *)FUN_00458d50();
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (local_1c != uVar2) {
      uVar4 = FUN_0045a9e0(local_1c);
      *(undefined8 *)(local_res8 + 0x30) = uVar4;
      *(undefined1 *)(local_res8 + 0x38) = 1;
      goto LAB_004ba876;
    }
  }
  uVar4 = FUN_00458d50();
  *(undefined8 *)(local_res8 + 0x30) = uVar4;
LAB_004ba876:
  FUN_0045bc70(&local_38,param_3);
  FUN_004ba230(local_res8,0,local_38);
  FUN_00419430(&local_38,&DAT_00406578);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

