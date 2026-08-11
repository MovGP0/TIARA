/* Ghidra address: 00baecc0 */
/* Ghidra symbol: FUN_00baecc0 */


undefined8 FUN_00baecc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 == '\0') {
    FUN_0041b800(param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))(*(longlong **)(param_1 + 0x30),param_2,0);
  }
  return param_2;
}

