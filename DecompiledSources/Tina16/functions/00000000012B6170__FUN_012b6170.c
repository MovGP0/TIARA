/* Ghidra address: 012b6170 */
/* Ghidra symbol: FUN_012b6170 */


void FUN_012b6170(longlong param_1)

{
  int iVar1;
  undefined8 local_20;
  
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x1a0))(*(longlong **)PTR_DAT_02004e40,2);
  local_20 = CONCAT44(10,((*(int *)(*(longlong *)PTR_DAT_02004e40 + 0x98) - iVar1) -
                         *(int *)(param_1 + 0x98)) + -10);
  local_20 = FUN_0064d1f0(*(undefined8 *)PTR_DAT_02004e40,&local_20);
  FUN_00806af0(param_1,local_20 & 0xffffffff);
  FUN_00806b40(param_1,local_20._4_4_);
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  return;
}

