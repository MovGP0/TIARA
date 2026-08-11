/* Ghidra address: 00702f60 */
/* Ghidra symbol: FUN_00702f60 */


void FUN_00702f60(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x110))(param_1);
  if (cVar1 != '\0') {
    FUN_006fabb0(param_1[5],param_2);
  }
  return;
}

