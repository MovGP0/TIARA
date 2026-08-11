/* Ghidra address: 015b1f30 */
/* Ghidra symbol: FUN_015b1f30 */


void FUN_015b1f30(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint local_res18;
  uint local_1c;
  
  if (0 < (int)param_3) {
    local_1c = *(uint *)(param_1 + 5) & 0x3f;
    *(uint *)(param_1 + 5) = (int)param_1[5] + param_3;
    local_res18 = param_3;
    if (local_1c != 0) {
      if ((int)param_3 < (int)(0x40 - local_1c)) {
        FUN_00409a70(param_2,(longlong)param_1 + (longlong)(int)local_1c + 0x2c,
                     (longlong)(int)param_3);
        return;
      }
      FUN_00409a70(param_2,(longlong)param_1 + (longlong)(int)local_1c + 0x2c,
                   (longlong)(int)(0x40 - local_1c));
      (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
      local_1c = 0x40 - local_1c;
      local_res18 = param_3 - local_1c;
    }
    lVar1 = param_2 + (int)local_1c;
    uVar2 = local_res18 & 0xffffffc0;
    for (; 0x3f < (int)local_res18; local_res18 = local_res18 - 0x40) {
      (**(code **)(*param_1 + 0x68))(param_1,lVar1);
      lVar1 = lVar1 + 0x40;
    }
    FUN_00409a70(param_2 + (int)(local_1c + uVar2),(longlong)param_1 + 0x2c,
                 (longlong)(int)local_res18);
  }
  return;
}

