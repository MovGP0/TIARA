/* Ghidra address: 00a3c940 */
/* Ghidra symbol: FUN_00a3c940 */


void FUN_00a3c940(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte local_21;
  
  lVar4 = FUN_00a39e90(param_1);
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar3 = FUN_005fbf20(param_4);
  cVar2 = thunk_FUN_03c6d07a(uVar5,uVar3);
  local_21 = *(byte *)(lVar4 + 0x490);
  if (8 < local_21) {
    local_21 = 8;
  }
  lVar4 = FUN_00a3c240(param_1);
  pbVar1 = (byte *)(lVar4 + param_2 / (int)(8 / local_21));
  *pbVar1 = *pbVar1 & ~(byte)(*(int *)(&DAT_01e7180c + (ulonglong)local_21 * 4) <<
                             (8 - (local_21 + (char)(param_2 % (int)(8 / local_21)) * local_21) &
                             0x1f));
  *pbVar1 = *pbVar1 | cVar2 << (8 - (local_21 + (char)(param_2 % (int)(8 / local_21)) * local_21) &
                               0x1f);
  return;
}

