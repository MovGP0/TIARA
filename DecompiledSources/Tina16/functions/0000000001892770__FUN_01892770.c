/* Ghidra address: 01892770 */
/* Ghidra symbol: FUN_01892770 */


void FUN_01892770(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x60));
  thunk_FUN_03e49910(uVar2,&local_38);
  FUN_00423b50(&local_38,-local_38,-local_34);
  FUN_00423b10(&local_38,-4 - *(int *)(*(longlong *)(param_1 + 0x60) + 0x588),0xffffffff);
  uVar1 = FUN_005fbf20(param_3);
  uVar2 = thunk_FUN_041d21bb(0,1,uVar1);
  uVar3 = thunk_FUN_041a19a1(param_2,uVar2);
  thunk_FUN_041a2b10(param_2,local_30,local_34,0);
  thunk_FUN_04151b0d(param_2,local_30,local_2c);
  thunk_FUN_041a19a1(param_2,uVar3);
  thunk_FUN_0416f828(uVar2);
  return;
}

