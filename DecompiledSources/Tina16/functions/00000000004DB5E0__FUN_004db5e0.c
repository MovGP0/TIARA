/* Ghidra address: 004db5e0 */
/* Ghidra symbol: FUN_004db5e0 */


void FUN_004db5e0(longlong *param_1)

{
  char cVar1;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_30 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x28))(param_1,3);
    if (cVar1 != '\0') {
      FUN_004db2d0(param_1);
    }
  }
  else {
    FUN_004db130(local_20,param_1);
    cVar1 = (**(code **)(*local_20[0] + 0x88))(local_20[0]);
    if (cVar1 == '\0') {
      FUN_004db130(&local_30,param_1);
      (**(code **)(*local_30 + 0x50))(local_30);
    }
    else {
      FUN_004db130(&local_28,param_1);
      (**(code **)(*local_28 + 0x58))(local_28);
      FUN_004db1f0(param_1);
      FUN_004db2d0(param_1);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,4);
  if (cVar1 != '\0') {
    FUN_004db850(param_1);
    FUN_004db970(param_1);
  }
  FUN_00417840(&local_30,&DAT_00484dc8,3);
  return;
}

