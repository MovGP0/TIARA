/* Ghidra address: 00af52f0 */
/* Ghidra symbol: FUN_00af52f0 */


void FUN_00af52f0(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined6 uVar1;
  
  uVar1 = (undefined6)((ulonglong)param_3 >> 0x10);
  if ((char)param_3 == '\0') {
    if (param_2 < 0x10) {
      *(ushort *)(param_1 + 0x8a0) =
           *(ushort *)(param_1 + 0x8a0) & ~(ushort)((int)CONCAT62(uVar1,1) << (param_2 & 0x1f));
    }
  }
  else if (param_2 < 0x10) {
    *(ushort *)(param_1 + 0x8a0) =
         *(ushort *)(param_1 + 0x8a0) | (ushort)((int)CONCAT62(uVar1,1) << (param_2 & 0x1f));
  }
  return;
}

