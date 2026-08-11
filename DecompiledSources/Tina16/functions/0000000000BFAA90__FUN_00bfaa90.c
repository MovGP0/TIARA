/* Ghidra address: 00bfaa90 */
/* Ghidra symbol: FUN_00bfaa90 */


undefined8 FUN_00bfaa90(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = FUN_00bfaa10(param_1);
  local_20 = FUN_00c0ec90(param_1,local_30);
  cVar1 = FUN_00c10e70(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x608) != '\0')) {
    if ((int)local_20 == 1) {
      local_20._4_4_ = local_20._4_4_ + -1;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x30))
                        (*(longlong **)(param_1 + 0x5f8),local_20._4_4_);
      local_20 = CONCAT44(local_20._4_4_,iVar2 + 1);
    }
    else {
      *(undefined1 *)(param_1 + 0x608) = 0;
    }
  }
  return local_20;
}

