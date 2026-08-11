/* Ghidra address: 00649690 */
/* Ghidra symbol: FUN_00649690 */


void FUN_00649690(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 < (int)local_38) || ((int)local_30 < iVar1)) {
    iVar1 = FUN_00649660(auStack_58,(int)local_38 - iVar1,(int)local_30 - iVar1);
  }
  else {
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if ((iVar2 < local_38._4_4_) || (local_30._4_4_ < iVar2)) {
    iVar2 = FUN_00649660(auStack_58,local_38._4_4_ - iVar2,local_30._4_4_ - iVar2);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar1 != 0) || (iVar2 != 0)) {
    FUN_00423b50(param_1 + 0x60,-iVar1,-iVar2);
  }
  return;
}

