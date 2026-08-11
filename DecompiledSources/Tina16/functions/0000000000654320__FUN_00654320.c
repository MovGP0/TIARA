/* Ghidra address: 00654320 */
/* Ghidra symbol: FUN_00654320 */


void FUN_00654320(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_28 [24];
  
  local_30 = auStack_58;
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0)) {
    if ((short)param_1[99] == 0) {
      FUN_00654400(param_1);
      (**(code **)(*param_1 + 0xe0))(param_1,local_28);
      (**(code **)(*param_1 + 0x1b0))(param_1,param_2,local_28);
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xffffffef;
      FUN_00654410(param_1);
    }
    else {
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x10;
    }
  }
  return;
}

