/* Ghidra address: 01c66290 */
/* Ghidra symbol: FUN_01c66290 */


undefined8 FUN_01c66290(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((sVar2 == 4) || (sVar2 == 0x3a)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

