/* Ghidra address: 0061b5c0 */
/* Ghidra symbol: IMM32.DLL::ImmGetConversionStatus */


BOOL __stdcall ImmGetConversionStatus(HIMC param_1,LPDWORD lpfdwConversion,LPDWORD lpfdwSentence)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0061b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmGetConversionStatus(param_1,lpfdwConversion,lpfdwSentence);
  return BVar1;
}

