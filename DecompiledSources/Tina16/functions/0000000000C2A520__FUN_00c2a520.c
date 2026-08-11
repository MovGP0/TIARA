/* Ghidra address: 00c2a520 */
/* Ghidra symbol: FUN_00c2a520 */


void FUN_00c2a520(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),param_2);
  cVar1 = FUN_00c28880(param_1);
  if (cVar1 == '\0') {
    FUN_00c2a4d0(param_1);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x48,10);
    FUN_00c22e40(*(undefined8 *)(param_1 + 0x40),param_2);
    FUN_00c281a0(param_1,param_2);
  }
  return;
}

