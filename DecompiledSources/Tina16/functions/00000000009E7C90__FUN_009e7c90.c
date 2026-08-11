/* Ghidra address: 009e7c90 */
/* Ghidra symbol: FUN_009e7c90 */


ulonglong FUN_009e7c90(longlong param_1,ushort param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  cVar1 = FUN_009e9570(*(undefined8 *)(param_1 + 0xa0));
  if ((cVar1 != '\0') || (0x20 < param_2)) {
    uVar2 = FUN_009e9540(*(undefined8 *)(param_1 + 0xa0));
    if (param_2 != uVar2) {
      uVar2 = FUN_009e94c0(*(undefined8 *)(param_1 + 0xa0));
      if ((param_2 != uVar2) && (param_2 != 0)) {
        uVar3 = 0;
      }
    }
  }
  return uVar3 & 0xffffffff;
}

