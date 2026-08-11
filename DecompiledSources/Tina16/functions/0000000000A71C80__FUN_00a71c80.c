/* Ghidra address: 00a71c80 */
/* Ghidra symbol: FUN_00a71c80 */


void FUN_00a71c80(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_38 [24];
  
  FUN_00414610(param_6);
  uVar2 = FUN_005ffa40(param_1);
  uVar1 = thunk_FUN_041afa90(uVar2,0);
  FUN_004238d0(local_38,param_2,param_3,param_4,param_5);
  uVar2 = FUN_005ffa40(param_1);
  uVar4 = 0;
  if (param_6 != 0) {
    uVar4 = *(undefined4 *)(param_6 + -4);
  }
  uVar3 = FUN_00416740(param_6);
  thunk_FUN_041a24be(uVar2,uVar3,uVar4,local_38,0x10);
  uVar2 = FUN_005ffa40(param_1);
  thunk_FUN_041afa90(uVar2,uVar1);
  FUN_00414480(&param_6);
  return;
}

