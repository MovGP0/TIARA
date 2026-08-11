/* Ghidra address: 00e3b100 */
/* Ghidra symbol: FUN_00e3b100 */


ulonglong FUN_00e3b100(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_R13;
  
  if (*(char *)(param_3 + 0x328) == '\0') {
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 2,*(ushort *)(param_1 + 0x128) + 3,
                 param_4,1);
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 5,*(ushort *)(param_1 + 0x128) + 6,
                 param_4,1);
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 8,*(ushort *)(param_1 + 0x128) + 9,
                 param_4,1);
  }
  else {
    FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x10),
                 param_4,1);
    FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0xf),
                 param_4,1);
    FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x12),
                 param_4,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1) & 0xffffffff;
}

