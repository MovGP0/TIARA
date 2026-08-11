/* Ghidra address: 01685040 */
/* Ghidra symbol: FUN_01685040 */


ulonglong FUN_01685040(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_R13;
  
  if (*(char *)(param_3 + 0x328) == '\0') {
    if (1e-15 < *(double *)(param_1 + 0x280)) {
      FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0xb8) + 3,*(ushort *)(param_1 + 0xb8) + 4,
                   param_4,1);
    }
    if (1e-15 < *(double *)(param_1 + 0x288)) {
      FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0xb8) + 5,*(ushort *)(param_1 + 0xb8) + 6,
                   param_4,1);
    }
    if (1e-15 < *(double *)(param_1 + 0x298)) {
      FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0xb8) + 1,*(ushort *)(param_1 + 0xb8) + 2,
                   param_4,1);
    }
  }
  else {
    if (1e-15 < *(double *)(param_1 + 0x280)) {
      FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 10),
                   param_4,1);
    }
    if (1e-15 < *(double *)(param_1 + 0x288)) {
      FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),param_4
                   ,1);
    }
    if (1e-15 < *(double *)(param_1 + 0x298)) {
      FUN_016de220(param_2,param_3,*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 0xb),
                   param_4,1);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1) & 0xffffffff;
}

