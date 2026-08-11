/* Ghidra address: 006a5560 */
/* Ghidra symbol: FUN_006a5560 */


void FUN_006a5560(longlong *param_1,undefined2 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_20 = thunk_FUN_0412a7bb(0x2002,(longlong)param_4);
  local_28 = thunk_FUN_0416a623(local_20);
  FUN_00409a70(param_3,local_28,(longlong)param_4);
  FUN_006a5190(param_1);
  lVar1 = thunk_FUN_0415744e(param_2,local_20);
  if (lVar1 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00472738,1,PTR_PTR_02001b38);
    FUN_004134c0(uVar2);
  }
  thunk_FUN_04172795(local_20);
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

