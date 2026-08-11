/* Ghidra address: 00b10ef0 */
/* Ghidra symbol: FUN_00b10ef0 */


void FUN_00b10ef0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_2c [3];
  
  cVar1 = FUN_00b10b40(param_1,param_2,local_2c);
  if (cVar1 == '\0') {
    FUN_00b11fb0(param_1,param_2,param_3,1);
  }
  else {
    (**(code **)(*param_1 + 0x2e0))(param_1,1,local_2c[0],param_3);
  }
  return;
}

