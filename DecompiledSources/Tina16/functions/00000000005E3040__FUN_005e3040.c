/* Ghidra address: 005e3040 */
/* Ghidra symbol: FUN_005e3040 */


undefined8 FUN_005e3040(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  if (param_4 == '\0') {
    uVar1 = FUN_00417740(param_2,&DAT_005d7c00);
    FUN_00596440(param_1 + 8,param_3,uVar1);
  }
  else {
    uVar1 = FUN_00417740(param_2,&DAT_005d7c00);
    FUN_005964e0(param_1 + 8,param_3,uVar1);
  }
  return param_2;
}

