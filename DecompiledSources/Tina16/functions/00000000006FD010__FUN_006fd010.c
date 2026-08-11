/* Ghidra address: 006fd010 */
/* Ghidra symbol: FUN_006fd010 */


void FUN_006fd010(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_0064fca0(param_1,0x430,0,param_2);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

