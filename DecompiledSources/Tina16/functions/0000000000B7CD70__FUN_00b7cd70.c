/* Ghidra address: 00b7cd70 */
/* Ghidra symbol: FUN_00b7cd70 */


uint FUN_00b7cd70(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(&DAT_01e8f764 + (ulonglong)(param_2 >> 7 & 0x1ff) * 4) ^ param_2 & 0x7f;
  uVar1 = ((byte)(&DAT_01e8f6e4)[param_2 & 0x7f] ^ uVar2) & 0x7f ^ param_3 >> 9 & 0x7f;
  return uVar1 << 9 | *(uint *)(&DAT_01e8f764 + (ulonglong)(uVar2 ^ param_3 & 0x1ff) * 4) ^ uVar1;
}

