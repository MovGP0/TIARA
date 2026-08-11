/* Ghidra address: 00d456b0 */
/* Ghidra symbol: FUN_00d456b0 */


undefined8 FUN_00d456b0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_00787d50(uVar1);
  if (((((((uVar2 & 3) != 3) && (uVar2 = FUN_00787d50(uVar1), (uVar2 & 0xe) != 0xe)) &&
        (uVar2 = FUN_00787d50(uVar1), (uVar2 & 5) != 5)) &&
       ((uVar2 = FUN_00787d50(uVar1), (uVar2 & 8) != 8 &&
        (uVar2 = FUN_00787d50(uVar1), (uVar2 & 0xd) != 0xd)))) &&
      ((uVar2 = FUN_00787d50(uVar1), (uVar2 & 0x800) != 0x800 &&
       ((uVar2 = FUN_00787d50(uVar1), (uVar2 & 3) != 3 &&
        (uVar2 = FUN_00787d50(uVar1), (uVar2 & 10) != 10)))))) &&
     ((uVar2 = FUN_00787d50(uVar1), (uVar2 & 0x800) != 0x800 &&
      (uVar2 = FUN_00787d50(uVar1), (uVar2 & 0xb) != 0xb)))) {
    return 1;
  }
  return 0;
}

