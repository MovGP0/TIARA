/* Ghidra address: 01810180 */
/* Ghidra symbol: FUN_01810180 */


void FUN_01810180(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = FUN_006060c0(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = FUN_005ffa40(param_2);
      uVar4 = thunk_FUN_0418f5de(uVar4,lVar1,0xffffffff);
      uVar2 = FUN_005ffa40(param_2);
      thunk_FUN_03a5de49(uVar2);
    }
    local_48 = *param_3;
    uStack_40 = param_3[1];
    uVar2 = FUN_005ffa40(param_2);
    uVar3 = FUN_006060c0(param_1);
    thunk_FUN_0417aa92(uVar2,uVar3,&local_48);
    if (lVar1 != 0) {
      uVar2 = FUN_005ffa40(param_2);
      thunk_FUN_0418f5de(uVar2,uVar4,0xffffffff);
    }
  }
  return;
}

