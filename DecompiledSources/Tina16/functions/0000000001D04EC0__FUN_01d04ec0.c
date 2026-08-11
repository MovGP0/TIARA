/* Ghidra address: 01d04ec0 */
/* Ghidra symbol: FUN_01d04ec0 */


undefined8 FUN_01d04ec0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0176a3f0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  }
  return uVar2;
}

