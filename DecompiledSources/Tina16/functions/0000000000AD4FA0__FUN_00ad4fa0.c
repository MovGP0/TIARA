/* Ghidra address: 00ad4fa0 */
/* Ghidra symbol: FUN_00ad4fa0 */


void FUN_00ad4fa0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_20;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  FUN_00ad4dd0(param_1,&local_20);
  if (local_20 != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0xe8),
                         *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
    FUN_00468a10(&local_40,local_20);
    FUN_00a52f40(uVar1,&local_40,4);
  }
  FUN_00460ba0(&local_40);
  FUN_00414480(&local_20);
  return;
}

