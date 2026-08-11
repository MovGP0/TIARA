/* Ghidra address: 0199e4d0 */
/* Ghidra symbol: FUN_0199e4d0 */


undefined8 FUN_0199e4d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_28._0_4_ = (int)uVar1;
  local_20._0_4_ = (int)uVar2;
  if ((int)local_28 < (int)local_20) {
    local_28._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_20._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    if ((local_28._4_4_ < local_20._4_4_) &&
       (local_28 = uVar1, local_20 = uVar2, cVar3 = FUN_00b958f0(&local_28), cVar3 == '\0')) {
      return 0;
    }
  }
  return 1;
}

