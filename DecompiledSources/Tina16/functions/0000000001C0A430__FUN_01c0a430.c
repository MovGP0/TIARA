/* Ghidra address: 01c0a430 */
/* Ghidra symbol: FUN_01c0a430 */


void FUN_01c0a430(longlong *param_1)

{
  char cVar1;
  undefined8 local_38;
  
  FUN_01bea390(param_1);
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    FUN_0064cc50(param_1,*(int *)((longlong)param_1 + 0x9c) + 2);
  }
  else {
    FUN_0064cc50(param_1,3);
  }
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') {
    local_38._4_4_ = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x34c) >> 0x20);
    local_38 = CONCAT44(local_38._4_4_ + 1,(int)*(undefined8 *)((longlong)param_1 + 0x34c));
    *(undefined8 *)((longlong)param_1 + 0x34c) = local_38;
    *(undefined8 *)((longlong)param_1 + 0x354) = *(undefined8 *)((longlong)param_1 + 0x354);
  }
  return;
}

