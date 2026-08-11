/* Ghidra address: 006f9860 */
/* Ghidra symbol: FUN_006f9860 */


void FUN_006f9860(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  (**(code **)(*param_1 + 0x1c8))(param_1);
  if ((((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) && (param_1[0x68] != 0)) &&
     ((*(char *)(param_1[0x68] + 0x4dc) != '\0' ||
      ((*(char *)(param_1[0x68] + 0x4a0) != '\0' && (*(char *)((longlong)param_1 + 0x33a) == '\x05')
       ))))) {
    lVar1 = param_1[0x68];
    *(undefined4 *)(lVar1 + 0x4a4) = 0;
    *(undefined4 *)(lVar1 + 0x4a8) = 0;
    FUN_006fd640(lVar1);
  }
  return;
}

