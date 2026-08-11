/* Ghidra address: 008f4e70 */
/* Ghidra symbol: FUN_008f4e70 */


int FUN_008f4e70(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong local_res10 [3];
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  local_1c = 0;
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((int)param_1[5] != 0x9c) {
    uVar1 = 0;
    if (local_res10[0] != 0) {
      uVar1 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    iVar2 = 1;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*(uint *)(param_1 + 5) == (uint)*(ushort *)(local_res10[0] + -2 + (longlong)iVar2 * 2)) {
        local_1c = (**(code **)(*param_1 + 0x38))(param_1,local_res10[0]);
        local_1c = local_1c + 1;
        break;
      }
      iVar2 = iVar2 + 1;
    }
  }
  FUN_00414520(local_res10);
  return local_1c;
}

