/* Ghidra address: 00702830 */
/* Ghidra symbol: FUN_00702830 */


void FUN_00702830(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') &&
     ((*(char *)(param_1 + 0x4dc) != '\0' || (*(char *)(param_1 + 0x4a0) != '\0')))) {
    uVar2 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0xb8));
    FUN_0064fca0(param_1,0x30,uVar2,0);
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      FUN_00655b90(param_1);
    }
  }
  FUN_00654ce0(param_1,0xb008);
  return;
}

