/* Ghidra address: 015b1e30 */
/* Ghidra symbol: FUN_015b1e30 */


void FUN_015b1e30(longlong *param_1)

{
  uint uVar1;
  ulonglong local_28;
  uint local_1c;
  
  uVar1 = *(uint *)(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + (longlong)(int)(uVar1 & 0x3f) + 0x2c) = 0x80;
  local_1c = (uVar1 & 0x3f) + 1;
  if (0x38 < local_1c) {
    FUN_0040d200((longlong)param_1 + (longlong)(int)local_1c + 0x2c,(longlong)(int)(0x40 - local_1c)
                 ,0);
    (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
    local_1c = 0;
  }
  FUN_0040d200((longlong)param_1 + (longlong)(int)local_1c + 0x2c,(longlong)(int)(0x40 - local_1c),0
              );
  local_28 = (ulonglong)(uint)((int)param_1[5] * 8);
  FUN_00409a70(&local_28,(longlong)param_1 + 100,8);
  (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
  FUN_0040d200((longlong)param_1 + 0x2c,0x40,0);
  FUN_015b3c40(param_1,0);
  return;
}

