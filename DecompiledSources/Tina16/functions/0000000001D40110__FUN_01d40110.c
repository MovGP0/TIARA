/* Ghidra address: 01d40110 */
/* Ghidra symbol: FUN_01d40110 */


undefined8 FUN_01d40110(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01d01970(param_1);
  if ((cVar1 == '\0') || (sVar2 == 0x271c)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

