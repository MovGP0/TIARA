/* Ghidra address: 00862fb0 */
/* Ghidra symbol: FUN_00862fb0 */


undefined8 FUN_00862fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  longlong lVar1;
  
  lVar1 = FUN_00864fb0(&DAT_0085edb0,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                      );
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
  }
  FUN_0041b840(param_1,lVar1);
  return param_1;
}

