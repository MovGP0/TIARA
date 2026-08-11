/* Ghidra address: 019d0450 */
/* Ghidra symbol: FUN_019d0450 */


void FUN_019d0450(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_28._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  bVar3 = local_28._4_4_ < local_20._4_4_;
  local_28 = uVar2;
  local_20 = uVar1;
  if (bVar3) {
    FUN_019cfcd0(&local_20,&local_28);
  }
  if (local_20._4_4_ < *(int *)(param_1 + 0xa4)) {
    FUN_019d03b0(&local_20,&local_28,*(int *)(param_1 + 0xa4),param_4);
  }
  else {
    *param_4 = local_20;
  }
  if (*(int *)(param_1 + 0xac) < local_28._4_4_) {
    FUN_019d03b0(&local_20,&local_28,*(int *)(param_1 + 0xac),param_5);
  }
  else {
    *param_5 = local_28;
  }
  return;
}

