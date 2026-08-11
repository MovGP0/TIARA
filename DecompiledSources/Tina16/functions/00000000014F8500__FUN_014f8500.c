/* Ghidra address: 014f8500 */
/* Ghidra symbol: FUN_014f8500 */


void FUN_014f8500(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_016e9de0(param_1,2);
  if ((char)uVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  }
  FUN_014f83f0(param_1,1,uVar1);
  return;
}

