/* Ghidra address: 00db1260 */
/* Ghidra symbol: FUN_00db1260 */


ulonglong FUN_00db1260(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  if ((*(double *)(param_1 + 0xb8) != 0.0) || (*(double *)(param_1 + 0xd8) != 0.0)) {
    if (*(char *)(param_3 + 0x328) == '\0') {
      FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x78) + 1,*(ushort *)(param_1 + 0x78) + 2,
                   param_4,1);
    }
    else {
      FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3),param_4
                   ,1);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

