/* Ghidra address: 006e20a0 */
/* Ghidra symbol: FUN_006e20a0 */


void FUN_006e20a0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0064c470(param_1);
  if ((char)param_2 != cVar1) {
    FUN_006d3ef0(param_1,0x10,(char)param_2 == '\0');
  }
  FUN_0064c440(param_1,param_2);
  return;
}

