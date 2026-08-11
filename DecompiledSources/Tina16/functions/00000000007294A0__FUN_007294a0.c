/* Ghidra address: 007294a0 */
/* Ghidra symbol: FUN_007294a0 */


uint FUN_007294a0(longlong param_1)

{
  code *pcVar1;
  uint local_14;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0xd8) & 0x80) == 0) {
    local_14 = FUN_00728e80(param_1);
  }
  else {
    FUN_0041b890(&local_10,*(undefined8 *)(param_1 + 0x90),&DAT_00729568);
    local_14 = (**(code **)(*local_10 + 0xd8))(local_10,param_1 + 0xe8);
    if ((local_14 & 0x80000000) == 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffe7);
      local_14 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xe8));
    }
  }
  FUN_0041b800(&local_10);
  return local_14;
}

