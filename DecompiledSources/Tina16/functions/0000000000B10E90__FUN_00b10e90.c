/* Ghidra address: 00b10e90 */
/* Ghidra symbol: FUN_00b10e90 */


undefined8 FUN_00b10e90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_1c;
  
  cVar1 = FUN_00b10b40(param_1,param_3,&local_1c);
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*param_1 + 0x2d8))(param_1,param_2,1,local_1c);
  }
  return param_2;
}

