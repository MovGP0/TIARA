/* Ghidra address: 0162fcb0 */
/* Ghidra symbol: FUN_0162fcb0 */


undefined8 FUN_0162fcb0(short param_1,undefined4 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  short sVar2;
  undefined4 in_R10D;
  undefined2 uVar3;
  undefined8 local_20;
  undefined8 local_10;
  
  uVar3 = (undefined2)((uint)in_R10D >> 0x10);
  local_10 = 0;
  if (*(char *)(param_3 + 8) == '\0') {
    local_20 = 0;
  }
  else {
    lVar1 = FUN_0163e750(*(undefined8 *)(param_3 + 0x20));
    if (param_4 == '\0') {
      sVar2 = 0;
    }
    else {
      sVar2 = (short)*(undefined4 *)(*(longlong *)(param_3 + 0x13988) + 0x5f0);
    }
    if (lVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_016eebe0(lVar1,*(longlong *)(param_3 + 0x38) + 0x1b8,param_2,
                              CONCAT22(uVar3,(ushort)*(byte *)(*(longlong *)
                                                                (*(longlong *)(param_3 + 0x20) +
                                                                0x98) + 0x10) + sVar2 + param_1),0);
    }
  }
  FUN_00414480(&local_10);
  return local_20;
}

