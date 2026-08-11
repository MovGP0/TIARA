/* Ghidra address: 006a5810 */
/* Ghidra symbol: FUN_006a5810 */


undefined8 FUN_006a5810(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_20 = thunk_FUN_0413b85d(0xd);
  if (local_20 == 0) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = thunk_FUN_0416a623(local_20);
    FUN_004167d0(param_2,uVar1);
  }
  if (local_20 != 0) {
    thunk_FUN_04172795(local_20);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_2;
}

