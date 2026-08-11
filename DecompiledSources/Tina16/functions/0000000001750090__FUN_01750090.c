/* Ghidra address: 01750090 */
/* Ghidra symbol: FUN_01750090 */


void FUN_01750090(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}

