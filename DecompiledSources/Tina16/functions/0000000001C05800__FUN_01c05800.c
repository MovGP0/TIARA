/* Ghidra address: 01c05800 */
/* Ghidra symbol: FUN_01c05800 */


void FUN_01c05800(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(uint *)(param_1 + 0xa4) & 0x8000) == 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    uVar3 = 0;
    if (local_res20 != 0) {
      uVar3 = *(undefined4 *)(local_res20 + -4);
    }
    uVar2 = FUN_00416740(local_res20);
    thunk_FUN_041a24be(uVar1,uVar2,uVar3,param_2,*param_3);
  }
  else {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    FUN_00778820(uVar1,local_res20,param_2,*param_3,0,
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x70) + 0x28));
  }
  FUN_00414480(&local_res20);
  return;
}

