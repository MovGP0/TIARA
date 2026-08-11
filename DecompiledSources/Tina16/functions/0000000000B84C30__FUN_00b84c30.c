/* Ghidra address: 00b84c30 */
/* Ghidra symbol: FUN_00b84c30 */


uint FUN_00b84c30(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1 & 0xff;
  uVar4 = param_1 >> 8 & 0xff;
  uVar5 = param_1 >> 0x10 & 0xff;
  param_1 = param_1 >> 0x18;
  if (param_3 == 0x100) {
    uVar1 = param_2[3];
    uVar3 = (uint)(byte)(&DAT_01e93ac0)[uVar3] ^ uVar1 & 0xff;
    uVar4 = (uint)(byte)(&DAT_01e939c0)[uVar4] ^ uVar1 >> 8 & 0xff;
    uVar5 = (uint)(byte)(&DAT_01e939c0)[uVar5] ^ uVar1 >> 0x10 & 0xff;
    param_1 = (uint)(byte)(&DAT_01e93ac0)[param_1] ^ uVar1 >> 0x18;
  }
  if (0xbf < param_3) {
    uVar1 = param_2[2];
    uVar3 = (uint)(byte)(&DAT_01e93ac0)[uVar3] ^ uVar1 & 0xff;
    uVar4 = (uint)(byte)(&DAT_01e93ac0)[uVar4] ^ uVar1 >> 8 & 0xff;
    uVar5 = (uint)(byte)(&DAT_01e939c0)[uVar5] ^ uVar1 >> 0x10 & 0xff;
    param_1 = (uint)(byte)(&DAT_01e939c0)[param_1] ^ uVar1 >> 0x18;
  }
  uVar1 = param_2[1];
  uVar2 = *param_2;
  return (&DAT_020188ec)
         [(uint)(byte)(&DAT_01e939c0)[(uint)(byte)(&DAT_01e939c0)[uVar3] ^ uVar1 & 0xff] ^
          uVar2 & 0xff] ^
         (&DAT_02018cec)
         [(uint)(byte)(&DAT_01e939c0)[(uint)(byte)(&DAT_01e93ac0)[uVar4] ^ uVar1 >> 8 & 0xff] ^
          uVar2 >> 8 & 0xff] ^
         (&DAT_020190ec)
         [(uint)(byte)(&DAT_01e93ac0)[(uint)(byte)(&DAT_01e939c0)[uVar5] ^ uVar1 >> 0x10 & 0xff] ^
          uVar2 >> 0x10 & 0xff] ^
         (&DAT_020194ec)
         [(uint)(byte)(&DAT_01e93ac0)[(uint)(byte)(&DAT_01e93ac0)[param_1] ^ uVar1 >> 0x18] ^
          uVar2 >> 0x18];
}

