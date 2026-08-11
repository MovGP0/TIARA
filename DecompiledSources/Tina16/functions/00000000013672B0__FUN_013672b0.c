/* Ghidra address: 013672b0 */
/* Ghidra symbol: FUN_013672b0 */


void FUN_013672b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*param_2 + 0xc0))(param_2), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) {
    FUN_0198a580(param_2);
  }
  return;
}

