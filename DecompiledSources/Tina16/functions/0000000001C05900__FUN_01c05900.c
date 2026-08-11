/* Ghidra address: 01c05900 */
/* Ghidra symbol: FUN_01c05900 */


void FUN_01c05900(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(uint *)(param_1 + 0xa4) & 0x8000) == 0) {
    FUN_00423b50(&local_38,1,1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),param_6);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    lVar1 = local_res20;
    uVar4 = 0;
    if (local_res20 != 0) {
      uVar4 = *(undefined4 *)(local_res20 + -4);
    }
    uVar3 = FUN_00416740(local_res20);
    thunk_FUN_041a24be(uVar2,uVar3,uVar4,&local_38,param_3);
    FUN_00423b50(&local_38,0xffffffff,0xffffffff);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),param_5);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    thunk_FUN_041a24be(uVar2,uVar3,uVar4,&local_38,param_3);
  }
  else {
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    FUN_00778820(uVar2,local_res20,&local_38,param_3,0,param_5);
  }
  FUN_00414480(&local_res20);
  return;
}

