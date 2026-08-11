/* Ghidra address: 00b25710 */
/* Ghidra symbol: FUN_00b25710 */


bool FUN_00b25710(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,4);
  return iVar1 == 4;
}

