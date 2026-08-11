/* Ghidra address: 00702f30 */
/* Ghidra symbol: FUN_00702f30 */


void FUN_00702f30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (cVar1 != '\0') {
    FUN_006fa430(param_1[5],param_2);
  }
  return;
}

