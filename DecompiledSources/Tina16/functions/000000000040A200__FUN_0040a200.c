/* Ghidra address: 0040a200 */
/* Ghidra symbol: FUN_0040a200 */


ulonglong FUN_0040a200(ulonglong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_0040a160(param_1,3);
  uVar2 = *param_1 & 0xfffffffffffff;
  if (((uVar1 >> 4 & 0x7ff) != 0) && ((uVar1 >> 4 & 0x7ff) < 0x7ff)) {
    uVar2 = uVar2 | 0x10000000000000;
  }
  return uVar2;
}

