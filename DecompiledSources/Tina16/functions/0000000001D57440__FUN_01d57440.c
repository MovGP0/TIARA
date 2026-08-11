/* Ghidra address: 01d57440 */
/* Ghidra symbol: FUN_01d57440 */


ulonglong FUN_01d57440(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  if (*(char *)(param_3 + 0x328) == '\0') {
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x1a) + 1,*(ushort *)(param_1 + 0x1a) + 2,
                 param_4,0);
  }
  else {
    FUN_016de220(param_2,param_3,*(byte *)(param_1 + 0x18) + 2,1,param_4,0);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

