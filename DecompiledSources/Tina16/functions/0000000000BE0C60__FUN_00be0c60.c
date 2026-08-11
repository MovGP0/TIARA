/* Ghidra address: 00be0c60 */
/* Ghidra symbol: FUN_00be0c60 */


undefined8 FUN_00be0c60(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_38;
  int local_34;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_50 = auStack_78;
  local_20 = FUN_0082ccd0(&PTR_FUN_00825200,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_30 = *(longlong *)(param_1 + 0x10);
      if (*(int *)(*(longlong *)(local_30 + 8) + 8 + (longlong)local_24 * 0x14) == param_3) {
        local_34 = local_24;
        local_38 = FUN_00597de0(local_20 + 8,&local_34);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0082d9f0(local_20,param_2);
  FUN_00410f20(local_20);
  return param_2;
}

