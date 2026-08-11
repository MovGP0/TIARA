/* Ghidra address: 00e19db0 */
/* Ghidra symbol: FUN_00e19db0 */


void FUN_00e19db0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e520 == (code *)0x0) {
      DAT_0202e520 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSATrigSources");
    }
    if (DAT_0202e520 != (code *)0x0) {
      (*DAT_0202e520)(param_1,param_2);
    }
  }
  return;
}

