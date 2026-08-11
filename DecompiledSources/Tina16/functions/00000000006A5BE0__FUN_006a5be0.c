/* Ghidra address: 006a5be0 */
/* Ghidra symbol: FUN_006a5be0 */


void FUN_006a5be0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined2 local_22;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_006a5190(param_1);
  local_30 = 0;
  FUN_00604940(param_2,&local_22,local_20,&local_30);
  thunk_FUN_0415744e(local_22,local_20[0]);
  if (local_30 != 0) {
    thunk_FUN_0415744e(9,local_30);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

