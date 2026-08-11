/* Ghidra address: 007226a0 */
/* Ghidra symbol: FUN_007226a0 */


void FUN_007226a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffee);
  (*pcVar1)(param_1);
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

