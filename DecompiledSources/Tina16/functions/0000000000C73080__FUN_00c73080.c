/* Ghidra address: 00c73080 */
/* Ghidra symbol: FUN_00c73080 */


void FUN_00c73080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                 char param_5,uint param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  if (param_5 == '\x01') {
    FUN_00429ca0(&local_38,1,1);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000014);
    uVar2 = FUN_005ffa40(param_2);
    local_3c = 0;
    if (param_3 != 0) {
      local_3c = *(undefined4 *)(param_3 + -4);
    }
    uVar3 = FUN_00416740(param_3);
    thunk_FUN_041a24be(uVar2,uVar3,local_3c,&local_38,param_6 | 5);
    FUN_00429ca0(&local_38,0xffffffff,0xffffffff);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000010);
    uVar2 = FUN_005ffa40(param_2);
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(undefined4 *)(param_3 + -4);
    }
    thunk_FUN_041a24be(uVar2,uVar3,uVar1,&local_38,param_6 | 5);
  }
  else {
    uVar2 = FUN_005ffa40(param_2);
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(undefined4 *)(param_3 + -4);
    }
    uVar3 = FUN_00416740(param_3);
    thunk_FUN_041a24be(uVar2,uVar3,uVar1,&local_38,param_6 | 5);
  }
  return;
}

