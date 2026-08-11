/* Ghidra address: 00f30e70 */
/* Ghidra symbol: FUN_00f30e70 */


undefined8 FUN_00f30e70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  cVar1 = FUN_00456810(local_res10);
  if ((cVar1 == '\0') && (param_3 != 0)) {
    uVar2 = FUN_00f2fdb0(&LAB_00f233a8,1,local_res10[0],param_3);
    FUN_00f30e00(param_1,uVar2);
  }
  return param_1;
}

