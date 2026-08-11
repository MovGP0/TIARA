/* Ghidra address: 01be6fa0 */
/* Ghidra symbol: FUN_01be6fa0 */


undefined4 FUN_01be6fa0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0065d1c0(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
  *param_2 = *param_2 + iVar2;
  return uVar1;
}

