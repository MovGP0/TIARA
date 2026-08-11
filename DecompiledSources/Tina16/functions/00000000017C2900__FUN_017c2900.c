/* Ghidra address: 017c2900 */
/* Ghidra symbol: FUN_017c2900 */


void FUN_017c2900(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_2c;
  
  lVar2 = param_1[1];
  local_48 = param_1;
  local_40 = param_2;
  if ((char)lVar2 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  iVar1 = *(int *)((longlong)local_48 + 0xc);
  iVar3 = FUN_017c2b70();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_2c = FUN_017c2c60(local_48,iVar4);
      FUN_017c28e0(auStack_68,&local_2c);
      FUN_017c2cc0(local_48,iVar4,local_2c);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)((longlong)local_48 + 0xb) != '\0') {
    *(int *)((longlong)local_48 + 0x14) =
         *(int *)((longlong)local_48 + 0x14) + (*(int *)((longlong)local_48 + 0xc) - iVar1);
  }
  if ((char)lVar2 != '\0') {
    (**(code **)(*local_48 + 0xa0))(local_48,local_40);
  }
  return;
}

