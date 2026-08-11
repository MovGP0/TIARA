/* Ghidra address: 006fa050 */
/* Ghidra symbol: FUN_006fa050 */


void FUN_006fa050(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x319)) {
    *(char *)((longlong)param_1 + 0x319) = param_2;
    (**(code **)(*param_1 + 0x1c8))(param_1);
    if ((((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) && (param_1[0x68] != 0)) &&
       ((*(char *)(param_1[0x68] + 0x4dc) != '\0' ||
        ((*(char *)(param_1[0x68] + 0x4a0) != '\0' &&
         (*(char *)((longlong)param_1 + 0x33a) == '\x05')))))) {
      lVar1 = param_1[0x68];
      *(undefined4 *)(lVar1 + 0x4a4) = 0;
      *(undefined4 *)(lVar1 + 0x4a8) = 0;
      FUN_006fd640(lVar1);
    }
  }
  return;
}

