/* Ghidra address: 01854600 */
/* Ghidra symbol: FUN_01854600 */


void FUN_01854600(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_30 = auStack_58;
  uVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  FUN_00601800(uVar1,local_1c,&local_20);
  uVar1 = thunk_FUN_0412a7bb(0x2002,local_1c[0]);
  *param_4 = uVar1;
  uVar1 = thunk_FUN_0416a623(*param_4);
  *param_3 = uVar1;
  uVar1 = thunk_FUN_0412a7bb(0x2002,local_20);
  *param_6 = uVar1;
  uVar1 = thunk_FUN_0416a623(*param_6);
  *param_5 = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  FUN_00601960(uVar1,uVar2,*param_3,*param_5);
  return;
}

