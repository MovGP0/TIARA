/* Ghidra address: 004585b0 */
/* Ghidra symbol: FUN_004585b0 */


ulonglong FUN_004585b0(ulonglong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00458420(param_1,3);
  uVar2 = *param_1 & 0xfffffffffffff;
  if (((uVar1 >> 4 & 0x7ff) != 0) && ((uVar1 >> 4 & 0x7ff) < 0x7ff)) {
    uVar2 = uVar2 | 0x10000000000000;
  }
  return uVar2;
}

