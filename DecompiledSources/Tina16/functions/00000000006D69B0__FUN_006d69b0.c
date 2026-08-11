/* Ghidra address: 006d69b0 */
/* Ghidra symbol: FUN_006d69b0 */


void FUN_006d69b0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_0065a230(param_1,param_2);
  if (*(char *)(param_1 + 0x391) == '\0') {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  else {
    pcVar1 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar1)(param_1);
  }
  return;
}

