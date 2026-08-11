/* Ghidra address: 00cfb270 */
/* Ghidra symbol: FUN_00cfb270 */


void FUN_00cfb270(void)

{
  undefined8 uVar1;
  
  DAT_0201a0a8 = DAT_0201a0a8 + 1;
  if (DAT_0201a0a8 == 0) {
    if (DAT_01eb2480 != '\0') {
      FUN_00cdd820(L"NTLM");
      FUN_00cdd820(L"Negotiate");
    }
    uVar1 = DAT_01eb2478;
    DAT_01eb2478 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

