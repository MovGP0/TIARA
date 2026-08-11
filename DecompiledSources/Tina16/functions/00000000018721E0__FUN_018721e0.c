/* Ghidra address: 018721e0 */
/* Ghidra symbol: FUN_018721e0 */


void FUN_018721e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_0197c160(param_1,param_2);
  uVar1 = FUN_01872210(param_1);
  *(undefined1 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

