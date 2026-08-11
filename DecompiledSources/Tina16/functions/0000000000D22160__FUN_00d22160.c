/* Ghidra address: 00d22160 */
/* Ghidra symbol: FUN_00d22160 */


undefined8 * FUN_00d22160(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  FUN_00415d10(param_2,uVar1,0);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + -4);
  }
  uVar2 = FUN_00415ab0(param_3);
  uVar3 = FUN_00415ab0(*param_2);
  uVar2 = FUN_00d222a0(param_1,uVar2,uVar3,uVar1);
  if (*(byte *)(param_1 + 0x28) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_1 + 0x28) & 0x1f) &
            0xe0U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_004144d0(param_2);
  }
  return param_2;
}

