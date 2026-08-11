/* Ghidra address: 004658d0 */
/* Ghidra symbol: FUN_004658d0 */


undefined4 FUN_004658d0(undefined2 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *local_30 [2];
  
  uVar1 = FUN_0046eed0(*param_1,local_30);
  if ((char)uVar1 != '\0') {
    thunk_FUN_04125dff(local_48);
    (**(code **)(*local_30[0] + 0x38))(local_30[0],local_48,param_1,6);
    *param_2 = local_40;
  }
  return uVar1;
}

