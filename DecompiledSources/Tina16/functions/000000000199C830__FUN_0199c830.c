/* Ghidra address: 0199c830 */
/* Ghidra symbol: FUN_0199c830 */


undefined8 FUN_0199c830(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 < 100) {
      if (((4 < uVar2 - 4) && (1 < uVar2 - 0x21)) && ((2 < uVar2 - 0x3d && (uVar2 - 0x3d != 0x25))))
      {
        return 0;
      }
    }
    else if ((((2 < uVar2 - 100) && (uVar2 != 0x6a)) && (uVar2 != 0x77)) && (uVar2 != 0xa4)) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

