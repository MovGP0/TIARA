/* Ghidra address: 00702f00 */
/* Ghidra symbol: FUN_00702f00 */


void FUN_00702f00(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    FUN_006fa3b0(param_1[5],param_2);
  }
  return;
}

