/* Ghidra address: 00caf540 */
/* Ghidra symbol: FUN_00caf540 */


void FUN_00caf540(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_res10;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if ((longlong)param_2 < 1) {
    return;
  }
  (**(code **)(*param_1 + 0x90))(param_1,0,param_2);
  local_res10 = param_2;
  do {
    local_1c = FUN_00875200((longlong)local_res10 < 0x7fffffff,local_res10 & 0xffffffff,0x7fffffff);
    local_1c = FUN_008764d0(local_1c,*(undefined4 *)(param_1[0x21] + 0x30));
    if (0 < local_1c) {
      FUN_00c8b3f0(param_1[0x21],local_1c);
      local_res10 = local_res10 - (longlong)local_1c;
      if ((longlong)local_res10 < 1) {
        (**(code **)(*param_1 + 0xa0))(param_1,0);
        return;
      }
    }
    iVar1 = FUN_00cae370(param_1,0,0xffffffff,1);
    if (iVar1 < 1) {
      (**(code **)(*param_1 + 0x110))(param_1,1,1);
    }
  } while( true );
}

