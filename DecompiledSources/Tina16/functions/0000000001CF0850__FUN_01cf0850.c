/* Ghidra address: 01cf0850 */
/* Ghidra symbol: FUN_01cf0850 */


int FUN_01cf0850(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  return iVar1 * iVar2;
}

