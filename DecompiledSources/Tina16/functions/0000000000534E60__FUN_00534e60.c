/* Ghidra address: 00534e60 */
/* Ghidra symbol: FUN_00534e60 */


bool FUN_00534e60(byte *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 == (byte *)0x0) {
    return false;
  }
  uVar2 = (ulonglong)*param_1;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      lVar3 = FUN_00589390();
      return 0 < *(int *)(lVar3 + 4);
    }
    if ((uVar2 == 8) || (uVar2 - 10 < 3)) {
      return true;
    }
    if (uVar2 - 10 == 3) {
      lVar3 = FUN_00589390();
      if ((*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) &&
         (cVar1 = FUN_00534e60(**(undefined8 **)(lVar3 + 8)), cVar1 != '\0')) {
        return true;
      }
      return false;
    }
  }
  else {
    if (uVar2 == 0xf) {
      return true;
    }
    if (uVar2 - 0x11 < 2) {
      return true;
    }
    if (uVar2 == 0x16) {
      return true;
    }
  }
  return false;
}

