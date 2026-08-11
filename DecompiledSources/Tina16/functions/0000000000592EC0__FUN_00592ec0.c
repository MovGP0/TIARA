/* Ghidra address: 00592ec0 */
/* Ghidra symbol: FUN_00592ec0 */


uint FUN_00592ec0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
          (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
          (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
          (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar1 = (uint)(uVar2 < uVar3);
  return (1 - uVar1) - (uint)(uVar1 != 0) >> (uVar2 == uVar3);
}

