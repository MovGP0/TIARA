/* Ghidra address: 00702f90 */
/* Ghidra symbol: FUN_00702f90 */


void FUN_00702f90(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 != '\0') {
    FUN_006fa490(param_1[5],param_2);
  }
  return;
}

