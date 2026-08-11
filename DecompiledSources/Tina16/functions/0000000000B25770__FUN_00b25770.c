/* Ghidra address: 00b25770 */
/* Ghidra symbol: FUN_00b25770 */


bool FUN_00b25770(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  return iVar1 == param_3;
}

