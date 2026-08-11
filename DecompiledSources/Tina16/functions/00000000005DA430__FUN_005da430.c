/* Ghidra address: 005da430 */
/* Ghidra symbol: FUN_005da430 */


bool FUN_005da430(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}

