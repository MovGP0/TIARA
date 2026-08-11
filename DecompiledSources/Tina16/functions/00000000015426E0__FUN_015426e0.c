/* Ghidra address: 015426e0 */
/* Ghidra symbol: FUN_015426e0 */


undefined8 FUN_015426e0(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01542670(param_1);
  if (((((cVar1 == '\0') || (sVar2 == 4)) || (sVar2 == 5)) || ((sVar2 == 0x21 || (sVar2 == 0x3a))))
     || ((sVar2 == 0x96 || ((sVar2 == 0x90 || (sVar2 == 0x27)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

