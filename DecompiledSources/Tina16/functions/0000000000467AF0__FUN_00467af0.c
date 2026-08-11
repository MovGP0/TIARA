/* Ghidra address: 00467af0 */
/* Ghidra symbol: FUN_00467af0 */


char FUN_00467af0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  char local_31;
  undefined1 local_30 [32];
  
  local_50 = auStack_78;
  local_31 = FUN_0046eed0(*param_3,&local_40);
  if (local_31 != '\0') {
    thunk_FUN_04125dff(local_30);
    (**(code **)(*local_40 + 0x38))(local_40,local_30,param_3,0x102);
    FUN_00467e90(param_2,local_30);
    FUN_00460b80(local_30);
  }
  return local_31;
}

