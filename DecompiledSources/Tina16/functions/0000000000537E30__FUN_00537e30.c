/* Ghidra address: 00537e30 */
/* Ghidra symbol: FUN_00537e30 */


undefined8 FUN_00537e30(char *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\r') {
    lVar1 = FUN_00589390();
    if (*(undefined8 **)(lVar1 + 8) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(lVar1 + 8);
    }
  }
  else if (*param_1 == '\x11') {
    uVar2 = FUN_00536f30();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

