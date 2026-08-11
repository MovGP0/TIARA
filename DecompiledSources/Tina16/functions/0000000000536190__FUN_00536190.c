/* Ghidra address: 00536190 */
/* Ghidra symbol: FUN_00536190 */


undefined1 FUN_00536190(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if (((undefined1 *)*param_1 == (undefined1 *)0x0) || (param_1[1] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)*param_1;
  }
  return uVar1;
}

