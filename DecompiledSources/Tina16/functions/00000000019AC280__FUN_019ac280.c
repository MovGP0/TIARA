/* Ghidra address: 019ac280 */
/* Ghidra symbol: FUN_019ac280 */


undefined8 FUN_019ac280(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_00414480(param_2);
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    puVar1 = (undefined8 *)FUN_01c988d0(*(undefined8 *)PTR_DAT_02004e40,param_1);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00414ad0(param_2,*puVar1);
    }
  }
  return param_2;
}

