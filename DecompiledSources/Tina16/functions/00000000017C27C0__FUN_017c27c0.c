/* Ghidra address: 017c27c0 */
/* Ghidra symbol: FUN_017c27c0 */


void FUN_017c27c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined8 local_48;
  char local_39;
  undefined4 local_2c;
  
  local_39 = (char)param_1[1];
  local_50 = param_1;
  local_48 = param_2;
  if (local_39 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  iVar1 = *(int *)((longlong)local_50 + 0xc);
  lVar2 = local_50[2];
  iVar3 = FUN_017c2b70();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_2c = FUN_017c2c60(local_50,iVar4);
      FUN_017c2760(auStack_78,&local_2c);
      FUN_017c2cc0(local_50,iVar4,local_2c);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)((longlong)local_50 + 0xb) != '\0') {
    *(int *)((longlong)local_50 + 0x14) =
         *(int *)((longlong)local_50 + 0x14) + (*(int *)((longlong)local_50 + 0xc) - iVar1);
    *(int *)(local_50 + 3) = (int)local_50[3] + ((int)local_50[2] - (int)lVar2);
  }
  if (local_39 != '\0') {
    (**(code **)(*local_50 + 0xa0))(local_50,local_48);
  }
  return;
}

