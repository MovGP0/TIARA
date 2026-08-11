/* Ghidra address: 0064d190 */
/* Ghidra symbol: FUN_0064d190 */


undefined8 FUN_0064d190(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_006482f0(PTR_PTR_02004550,param_1);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xd8))(*(longlong **)(param_1 + 0x78));
  local_20._0_4_ = (int)uVar1;
  local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + *(int *)(param_1 + 0x94),
                      (int)local_20 + *(int *)(param_1 + 0x90));
  return local_20;
}

