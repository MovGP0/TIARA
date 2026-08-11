/* Ghidra address: 014f9ea0 */
/* Ghidra symbol: FUN_014f9ea0 */


bool FUN_014f9ea0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  if (cVar1 != '\0') {
    FUN_01aa3960(param_1,1,param_1 + 0x5a8,param_2,*(undefined8 *)PTR_DAT_02004660,
                 *(undefined1 *)(param_1 + 0x588));
  }
  return cVar1 != '\0';
}

