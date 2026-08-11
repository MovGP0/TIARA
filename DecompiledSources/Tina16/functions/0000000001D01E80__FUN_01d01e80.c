/* Ghidra address: 01d01e80 */
/* Ghidra symbol: FUN_01d01e80 */


undefined8 FUN_01d01e80(longlong *param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((((((sVar1 == 0x20) || (sVar1 == 0xc)) || (sVar1 == 0x45)) ||
       ((sVar1 == 0x4a || (sVar1 == 0x4b)))) ||
      ((sVar1 == 0x4c || ((sVar1 == 0x93 || (sVar1 == 700)))))) ||
     ((sVar1 == 0xb5 || ((sVar1 == 0xb6 || (sVar1 == 0xc3)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

