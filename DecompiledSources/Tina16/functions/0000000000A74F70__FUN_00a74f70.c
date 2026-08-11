/* Ghidra address: 00a74f70 */
/* Ghidra symbol: FUN_00a74f70 */


void FUN_00a74f70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  longlong *local_18;
  int local_c;
  
  local_30 = auStack_58;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  local_34 = iVar2 + -1;
  local_c = 0;
  if (-1 < local_34) {
    do {
      local_34 = iVar2;
      local_18 = (longlong *)FUN_00a75120(param_1,local_c);
      cVar1 = (**(code **)(*local_18 + 8))(local_18);
      if (cVar1 != '\0') {
        FUN_00410f20(local_18);
      }
      local_c = local_c + 1;
      local_34 = local_34 + -1;
      iVar2 = local_34;
    } while (local_34 != 0);
  }
  FUN_004b5980(param_1);
  return;
}

