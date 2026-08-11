/* Ghidra address: 008957c0 */
/* Ghidra symbol: FUN_008957c0 */


undefined8 FUN_008957c0(undefined8 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20._4_4_ = (undefined4)(param_2 >> 0x20);
  uVar1 = (**(code **)PTR_PTR_020055b8)(local_20._4_4_);
  uVar2 = (**(code **)PTR_PTR_020055b8)(param_2 & 0xffffffff);
  local_20 = CONCAT44(uVar2,uVar1);
  return local_20;
}

