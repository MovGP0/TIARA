/* Ghidra address: 009d6310 */
/* Ghidra symbol: FUN_009d6310 */


undefined8 FUN_009d6310(undefined8 param_1,undefined *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2 == &DAT_009d63a8) {
    uVar2 = 0x9d6301;
  }
  else if (param_2 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0043e420(param_2,&DAT_009d63a8);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),(int)uVar2 == 0);
  }
  if (((char)uVar2 == '\0') ||
     (((param_3 != 0 && (uVar2 = FUN_00416db0(param_3,&DAT_009d63bc), (int)uVar2 != 0)) &&
      (uVar2 = FUN_00416db0(param_3,&LAB_009d63d0), (int)uVar2 != 0)))) {
    uVar2 = 0;
    bVar1 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    bVar1 = 1;
  }
  return CONCAT62((int6)((ulonglong)uVar2 >> 0x10),-(ushort)bVar1);
}

