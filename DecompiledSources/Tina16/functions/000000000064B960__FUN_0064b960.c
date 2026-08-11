/* Ghidra address: 0064b960 */
/* Ghidra symbol: FUN_0064b960 */


void FUN_0064b960(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (cVar1 != '\0') {
    FUN_0064dbe0(param_1[4],param_2);
  }
  return;
}

