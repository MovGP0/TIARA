/* Ghidra address: 0064d3a0 */
/* Ghidra symbol: FUN_0064d3a0 */


undefined8 FUN_0064d3a0(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  int local_28;
  int iStack_24;
  
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
  local_28 = (int)uVar1;
  iStack_24 = (int)((ulonglong)uVar1 >> 0x20);
  return CONCAT44(param_2[1] - iStack_24,*param_2 - local_28);
}

