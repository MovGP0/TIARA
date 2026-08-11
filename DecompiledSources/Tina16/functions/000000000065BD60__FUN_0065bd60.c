/* Ghidra address: 0065bd60 */
/* Ghidra symbol: FUN_0065bd60 */


void FUN_0065bd60(longlong param_1,byte param_2)

{
  code *pcVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(byte *)(param_1 + 0x392) != param_2) &&
     (*(byte *)(param_1 + 0x392) = param_2,
     (param_2 & (*(ushort *)(param_1 + 0x34) & 0x10) == 0) != 0)) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffc3);
    (*pcVar1)(param_1,local_20);
    FUN_0041b840(param_1 + 0x340,local_20[0]);
  }
  FUN_0041b800(local_20);
  return;
}

