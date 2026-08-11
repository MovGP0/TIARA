/* Ghidra address: 00e17320 */
/* Ghidra symbol: FUN_00e17320 */


void FUN_00e17320(undefined8 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e258 == (code *)0x0) {
      DAT_0202e258 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigLevel");
    }
    if (DAT_0202e258 != (code *)0x0) {
      (*DAT_0202e258)(param_1);
    }
  }
  return;
}

