/* Ghidra address: 00605ea0 */
/* Ghidra symbol: FUN_00605ea0 */


void FUN_00605ea0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  int local_40;
  int local_3c;
  
  if (param_1[9] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = FUN_005ffa40(param_2);
      uVar3 = thunk_FUN_0418f5de(uVar3,lVar1,0xffffffff);
      uVar2 = FUN_005ffa40(param_2);
      thunk_FUN_03a5de49(uVar2);
    }
    local_48 = *param_3;
    local_40 = (int)param_3[1];
    local_3c = (int)((ulonglong)param_3[1] >> 0x20);
    _local_40 = CONCAT44(local_3c + -1,local_40 + -1);
    uVar2 = FUN_005ffa40(param_2);
    thunk_FUN_0417aa92(uVar2,*(undefined8 *)(param_1[9] + 0x10),&local_48);
    if (lVar1 != 0) {
      uVar2 = FUN_005ffa40(param_2);
      thunk_FUN_0418f5de(uVar2,uVar3,0xffffffff);
    }
  }
  return;
}

