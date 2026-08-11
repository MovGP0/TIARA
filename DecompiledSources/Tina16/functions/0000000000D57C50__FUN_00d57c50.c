/* Ghidra address: 00d57c50 */
/* Ghidra symbol: FUN_00d57c50 */


undefined4 FUN_00d57c50(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_38 [8];
  undefined4 local_30;
  
  FUN_004238d0(local_38,0,0,0,0);
  uVar1 = FUN_005ffa40(param_1);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + -4);
  }
  uVar2 = FUN_00416740(param_2);
  thunk_FUN_041a24be(uVar1,uVar2,uVar3,local_38,param_3 | 0x400);
  return local_30;
}

