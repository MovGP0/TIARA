/* Ghidra address: 00708d40 */
/* Ghidra symbol: FUN_00708d40 */


void FUN_00708d40(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  uVar1 = FUN_005ffa40(param_2);
  local_1c = thunk_FUN_03b57162(uVar1);
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_03b994b9(uVar1,1);
  FUN_005fd000(param_2[0xe],param_3);
  (**(code **)(*param_2 + 0x120))(param_2,param_4,param_5,param_6);
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_0402759f(uVar1,local_1c);
  return;
}

