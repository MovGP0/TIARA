/* Ghidra address: 006a5710 */
/* Ghidra symbol: FUN_006a5710 */


undefined4 FUN_006a5710(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_1c;
  
  local_40 = auStack_68;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_28 = thunk_FUN_0413b85d(0xd);
  if (local_28 == 0) {
    local_1c = 0;
  }
  else {
    uVar1 = thunk_FUN_0416a623(local_28);
    local_30 = FUN_00442580(param_2,uVar1,param_3 + -1);
    local_1c = FUN_00414d00(local_30);
    thunk_FUN_04172795(local_28);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return local_1c;
}

