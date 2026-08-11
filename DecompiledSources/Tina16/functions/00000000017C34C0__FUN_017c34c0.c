/* Ghidra address: 017c34c0 */
/* Ghidra symbol: FUN_017c34c0 */


void FUN_017c34c0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_01cf0ea0(param_1,param_2,param_3,param_4);
  if (-1 < *(int *)(param_1 + 0x1c)) {
    local_res18[0] = local_res18[0] + *(short *)(param_1 + 0x2c4);
    local_res20[0] = local_res20[0] + *(short *)(param_1 + 0x2c6);
    uVar1 = (longlong)*(int *)(param_1 + 0x1c) / 2;
    iVar4 = (int)uVar1;
    local_1c = FUN_017c2c60(param_1,uVar1 & 0xffffffff);
    FUN_01b1cd00(local_res18,local_res20);
    if (*(int *)(param_1 + 0x1c) % 2 == 0) {
      if (0 < iVar4) {
        FUN_017c3460(auStack_48,iVar4 + -1,*(undefined4 *)(param_1 + 0x2c4),
                     *(undefined4 *)(param_1 + 0x2c0));
      }
      iVar2 = FUN_017c2b70(param_1);
      if (iVar4 < iVar2 + -1) {
        FUN_017c3460(auStack_48,iVar4 + 1,*(undefined4 *)(param_1 + 0x2c4),
                     *(undefined4 *)(param_1 + 0x2c8));
      }
      local_1c = FUN_00b92120(local_res18[0],local_res20[0]);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1c) / 2 + 1;
      uVar3 = FUN_017c2c60(param_1,iVar4);
      if (*(short *)(param_1 + 0x2c4) == *(short *)(param_1 + 0x2c8)) {
        local_1c = CONCAT22(local_1c._2_2_,(undefined2)local_res18[0]);
        local_20 = CONCAT22((short)((uint)uVar3 >> 0x10),(undefined2)local_res18[0]);
      }
      else {
        local_1c = CONCAT22((undefined2)local_res20[0],(undefined2)local_1c);
        local_20 = CONCAT22((undefined2)local_res20[0],(short)uVar3);
      }
      FUN_017c2cc0(param_1,iVar4,local_20);
    }
    FUN_017c2cc0(param_1,uVar1 & 0xffffffff,local_1c);
  }
  return;
}

