/* Ghidra address: 01433350 */
/* Ghidra symbol: FUN_01433350 */


undefined8 FUN_01433350(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined1 local_1c [12];
  
  local_28 = 0;
  FUN_00414480(param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_015fcb30(&local_28,local_1c);
    lVar2 = FUN_0160d750(*(undefined8 *)(param_1 + 0x70),local_28);
    if (lVar2 != 0) {
      cVar1 = FUN_01773dd0(lVar2);
      if (cVar1 != '\0') {
        FUN_01773da0(lVar2,param_2);
      }
    }
  }
  else if (*(int *)(param_1 + 0x18) == 1) {
    uVar3 = FUN_004113f0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x1a8),&PTR_FUN_01763148);
    FUN_01774280(uVar3,param_2);
  }
  FUN_00414480(&local_28);
  return param_2;
}

