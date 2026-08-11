/* Ghidra address: 0065be30 */
/* Ghidra symbol: FUN_0065be30 */


void FUN_0065be30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_6c;
  undefined4 local_64 [7];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = thunk_FUN_03d44949(*(undefined8 *)(param_1 + 0x468));
  if (iVar2 == 0) {
    thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x468),&local_38);
  }
  else {
    local_64[0] = 0x2c;
    thunk_FUN_03f78330(*(undefined8 *)(param_1 + 0x468),local_64);
    local_38 = local_48;
    local_30 = uStack_40;
  }
  uVar3 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x468),0xfffffff0);
  if ((uVar3 & 0x40000000) != 0) {
    lVar4 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x468),0xfffffff8);
    if (lVar4 != 0) {
      uVar3 = thunk_FUN_04118143(lVar4,0xffffffec);
      if ((uVar3 & 0x400000) != 0) {
        uVar1 = (int)local_38;
        local_38 = CONCAT44(local_38._4_4_,(int)local_30);
        local_30 = CONCAT44(local_30._4_4_,uVar1);
      }
      local_6c = local_38;
      thunk_FUN_0417e313(lVar4,&local_6c);
      local_38 = local_6c;
      local_6c = local_30;
      thunk_FUN_0417e313(lVar4,&local_6c);
      local_30 = local_6c;
    }
  }
  *(int *)(param_1 + 0x90) = (int)local_38;
  *(int *)(param_1 + 0x94) = local_38._4_4_;
  *(int *)(param_1 + 0x98) = (int)local_30 - (int)local_38;
  *(int *)(param_1 + 0x9c) = local_30._4_4_ - local_38._4_4_;
  FUN_0064c920(param_1);
  return;
}

