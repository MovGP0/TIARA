/* Ghidra address: 00b256e0 */
/* Ghidra symbol: FUN_00b256e0 */


bool FUN_00b256e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,2);
  return iVar1 == 2;
}

