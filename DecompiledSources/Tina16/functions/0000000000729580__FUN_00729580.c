/* Ghidra address: 00729580 */
/* Ghidra symbol: FUN_00729580 */


uint FUN_00729580(longlong param_1)

{
  code *pcVar1;
  uint local_24;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  if ((*(uint *)(param_1 + 0xd8) & 0x80) == 0) {
    local_24 = FUN_007290f0(param_1);
  }
  else {
    FUN_0041b890(local_20,*(undefined8 *)(param_1 + 0x90),&DAT_007296a8);
    local_24 = (**(code **)(*local_20[0] + 0xe0))(local_20[0],param_1 + 0xe8);
    if ((local_24 & 0x80000000) == 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffe7);
      local_24 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xe8));
      if ((local_24 & 0x80000000) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 0x70))
                  (*(longlong **)(param_1 + 0x90),param_1 + 0xe0);
        pcVar1 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar1)(param_1);
      }
      FUN_0041b800(param_1 + 0xe8);
    }
  }
  FUN_0041b800(local_20);
  return local_24;
}

