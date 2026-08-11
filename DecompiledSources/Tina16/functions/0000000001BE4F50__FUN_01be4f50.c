/* Ghidra address: 01be4f50 */
/* Ghidra symbol: FUN_01be4f50 */


void FUN_01be4f50(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_38 [40];
  
  FUN_0065a330(param_1);
  uVar2 = FUN_01be4d70(auStack_38);
  *(undefined1 *)(param_1 + 0x618) = uVar2;
  pcVar1 = (code *)FUN_00411550(param_1,0xffee);
  (*pcVar1)(param_1);
  return;
}

