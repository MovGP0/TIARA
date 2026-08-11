/* Ghidra address: 004d6550 */
/* Ghidra symbol: FUN_004d6550 */


void FUN_004d6550(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)thunk_FUN_04118143(param_1,0xfffffffc);
  thunk_FUN_04129ca2(param_1);
  if (pcVar1 != thunk_FUN_03e425c0) {
    FUN_004d62f0(pcVar1);
  }
  return;
}

