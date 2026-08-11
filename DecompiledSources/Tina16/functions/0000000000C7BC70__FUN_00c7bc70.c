/* Ghidra address: 00c7bc70 */
/* Ghidra symbol: FUN_00c7bc70 */


undefined8 FUN_00c7bc70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  uVar2 = FUN_0041b800(param_1);
  cVar1 = FUN_00452340(local_res10[0],&DAT_00c7bcf8,uVar2);
  if (cVar1 == '\0') {
    (**(code **)(*local_res10[0] + 0x58))(local_res10[0],param_1);
  }
  FUN_0041b800(local_res10);
  return param_1;
}

