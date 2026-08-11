/* Ghidra address: 008e5de0 */
/* Ghidra symbol: FUN_008e5de0 */


undefined8 FUN_008e5de0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar4 = 0x6b;
  ppuVar3 = &PTR_PTR_01e28498;
  do {
    cVar1 = (**(code **)(*ppuVar3 + 0x68))(*ppuVar3,param_2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*ppuVar3 + 0x28))(*ppuVar3,1);
      return uVar2;
    }
    ppuVar3 = ppuVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

