/* Ghidra address: 00b77d40 */
/* Ghidra symbol: FUN_00b77d40 */


uint FUN_00b77d40(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 >> 0x10 & 0x3ff | (param_2 >> 0xe | param_2 << 0x12) & 0xffc00;
  uVar2 = param_2 & 0x3ff | (param_2 & 0x3ff00) << 2;
  uVar3 = *(uint *)(param_1 + 0xa4 + (ulonglong)param_3 * 0xc) & (uVar1 ^ uVar2);
  uVar4 = uVar3 ^ uVar1 ^ *(uint *)(param_1 + 0x9c + (ulonglong)param_3 * 0xc);
  uVar1 = uVar3 ^ uVar2 ^ *(uint *)(param_1 + 0xa0 + (ulonglong)param_3 * 0xc);
  return (&DAT_020148c0)[uVar4 >> 10] | (&DAT_020158c0)[uVar4 & 0x3ff] |
         (&DAT_020168c0)[uVar1 >> 10] | (&DAT_020178c0)[uVar1 & 0x3ff];
}

