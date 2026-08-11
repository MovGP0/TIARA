/* Ghidra address: 009ef7e0 */
/* Ghidra symbol: FUN_009ef7e0 */


int FUN_009ef7e0(undefined8 param_1,ushort param_2,uint param_3,ushort param_4)

{
  int iVar1;
  
  if ((ushort)(param_4 - 0x40) < 0x3f) {
    iVar1 = (uint)param_2 * ((param_3 & 0xffff) - 0x81) + (uint)param_4 + -0x40;
  }
  else if ((ushort)(param_4 - 0x80) < 0x7f) {
    iVar1 = (uint)param_2 * ((param_3 & 0xffff) - 0x81) + (uint)param_4 + -0x41;
  }
  else {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

