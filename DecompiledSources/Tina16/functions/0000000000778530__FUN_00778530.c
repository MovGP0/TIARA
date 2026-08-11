/* Ghidra address: 00778530 */
/* Ghidra symbol: FUN_00778530 */


void FUN_00778530(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar6 = FUN_00781840();
  uVar1 = FUN_007793c0(uVar6,0xff00000d);
  uVar1 = FUN_005fbf20(uVar1);
  uVar2 = FUN_00635840(uVar1,0x13);
  uVar6 = FUN_00781840();
  uVar1 = FUN_007793c0(uVar6,0xff00000d);
  uVar1 = FUN_005fbf20(uVar1);
  uVar3 = FUN_00635930(uVar1,0xffffffce);
  for (iVar7 = *param_2 + 1; iVar7 < param_2[2] + -1; iVar7 = iVar7 + 2) {
    uVar5 = thunk_FUN_0415e770(param_1,iVar7,param_2[1]);
    uVar4 = uVar2;
    if (uVar5 == uVar2) {
      uVar4 = ~uVar2;
    }
    thunk_FUN_04124c0c(param_1,iVar7,param_2[1],uVar4);
    uVar5 = thunk_FUN_0415e770(param_1,iVar7,param_2[1]);
    uVar4 = uVar3;
    if (uVar5 == uVar3) {
      uVar4 = ~uVar3;
    }
    thunk_FUN_04124c0c(param_1,iVar7 + 1,param_2[1],uVar4);
  }
  for (iVar7 = *param_2 + 1; iVar7 < param_2[2] + -1; iVar7 = iVar7 + 2) {
    uVar5 = thunk_FUN_0415e770(param_1,iVar7,param_2[3] + -1);
    uVar4 = uVar2;
    if (uVar5 == uVar2) {
      uVar4 = ~uVar2;
    }
    thunk_FUN_04124c0c(param_1,iVar7,param_2[3] + -1,uVar4);
    uVar5 = thunk_FUN_0415e770(param_1,iVar7 + 1,param_2[3] + -1);
    uVar4 = uVar3;
    if (uVar5 == uVar3) {
      uVar4 = ~uVar3;
    }
    thunk_FUN_04124c0c(param_1,iVar7 + 1,param_2[3] + -1,uVar4);
  }
  for (iVar7 = param_2[1] + 1; iVar7 < param_2[3] + -1; iVar7 = iVar7 + 2) {
    uVar5 = thunk_FUN_0415e770(param_1,*param_2,iVar7);
    uVar4 = uVar2;
    if (uVar5 == uVar2) {
      uVar4 = ~uVar2;
    }
    thunk_FUN_04124c0c(param_1,*param_2,iVar7,uVar4);
    uVar5 = thunk_FUN_0415e770(param_1,*param_2,iVar7 + 1);
    uVar4 = uVar3;
    if (uVar5 == uVar3) {
      uVar4 = ~uVar3;
    }
    thunk_FUN_04124c0c(param_1,*param_2,iVar7 + 1,uVar4);
  }
  for (iVar7 = param_2[1] + 1; iVar7 < param_2[3] + -1; iVar7 = iVar7 + 2) {
    uVar5 = thunk_FUN_0415e770(param_1,param_2[2] + -1,iVar7);
    uVar4 = uVar2;
    if (uVar5 == uVar2) {
      uVar4 = ~uVar2;
    }
    thunk_FUN_04124c0c(param_1,param_2[2] + -1,iVar7,uVar4);
    uVar5 = thunk_FUN_0415e770(param_1,param_2[2] + -1,iVar7 + 1);
    uVar4 = uVar3;
    if (uVar5 == uVar3) {
      uVar4 = ~uVar3;
    }
    thunk_FUN_04124c0c(param_1,param_2[2] + -1,iVar7 + 1,uVar4);
  }
  return;
}

