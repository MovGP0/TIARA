/* Ghidra address: 01892700 */
/* Ghidra symbol: FUN_01892700 */


void FUN_01892700(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar3 = FUN_005fbf20(param_4);
  uVar1 = thunk_FUN_0412d81c(uVar3);
  uVar2 = thunk_FUN_041a19a1(param_2,uVar1);
  thunk_FUN_03984819(param_2,&local_38,uVar1);
  thunk_FUN_041a19a1(param_2,uVar2);
  thunk_FUN_0416f828(uVar1);
  return;
}

