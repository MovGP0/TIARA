/* Ghidra address: 01087460 */
/* Ghidra symbol: FUN_01087460 */


void FUN_01087460(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  if (cVar1 != '\0') {
    FUN_010860d0(param_1,param_1[0x996]);
    FUN_01085cd0(param_1);
    FUN_010892f0(param_1);
  }
  return;
}

