/* Ghidra address: 0154d550 */
/* Ghidra symbol: FUN_0154d550 */


undefined8 FUN_0154d550(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar2 == 0x91) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

