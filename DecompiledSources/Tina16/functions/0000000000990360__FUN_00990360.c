/* Ghidra address: 00990360 */
/* Ghidra symbol: FUN_00990360 */


undefined8 FUN_00990360(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3ff0000000000000;
  }
  return uVar2;
}

