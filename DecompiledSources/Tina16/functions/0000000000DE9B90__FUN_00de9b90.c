/* Ghidra address: 00de9b90 */
/* Ghidra symbol: FUN_00de9b90 */


void FUN_00de9b90(undefined8 param_1)

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
  FUN_00de9b20(param_1,1,uVar1);
  return;
}

