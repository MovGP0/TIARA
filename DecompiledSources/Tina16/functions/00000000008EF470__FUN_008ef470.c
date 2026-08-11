/* Ghidra address: 008ef470 */
/* Ghidra symbol: FUN_008ef470 */


ulonglong FUN_008ef470(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if ((char)(param_2 & 0xffffffff) == -0x61) {
    uVar1 = CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),0x20ac);
  }
  else {
    uVar1 = (ulonglong)*(ushort *)(&DAT_01e28cec + (param_2 & 0xff) * 2);
  }
  return uVar1;
}

