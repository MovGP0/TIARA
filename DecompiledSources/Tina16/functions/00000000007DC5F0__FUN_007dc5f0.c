/* Ghidra address: 007dc5f0 */
/* Ghidra symbol: FUN_007dc5f0 */


uint FUN_007dc5f0(uint param_1,ushort param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((char)(param_1 >> 8) == '\0') {
    if ((param_2 & 1) != 0) {
      param_1 = (uint)(ushort)((short)param_1 + 0x2000);
    }
    if ((param_2 & 4) != 0) {
      param_1 = (uint)(ushort)((short)param_1 + 0x4000);
    }
    uVar1 = param_1;
    if ((param_2 & 2) != 0) {
      uVar1 = (uint)(ushort)((short)param_1 + 0x8000);
    }
  }
  return uVar1;
}

