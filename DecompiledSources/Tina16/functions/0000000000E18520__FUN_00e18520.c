/* Ghidra address: 00e18520 */
/* Ghidra symbol: FUN_00e18520 */


void FUN_00e18520(undefined4 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e370 == (code *)0x0) {
      DAT_0202e370 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGMode");
    }
    if (DAT_0202e370 != (code *)0x0) {
      (*DAT_0202e370)(param_1,param_2);
    }
  }
  return;
}

