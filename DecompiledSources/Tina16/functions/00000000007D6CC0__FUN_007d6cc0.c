/* Ghidra address: 007d6cc0 */
/* Ghidra symbol: FUN_007d6cc0 */


void FUN_007d6cc0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,byte param_7,undefined1 param_8)

{
  if (param_1[0x14] != 0) {
    (**(code **)(*param_1 + 0xa0))
              (param_1,param_5,param_2,param_3,param_4,
               *(uint *)(&DAT_01e12560 + (ulonglong)param_6 * 4) |
               *(uint *)(&DAT_01e12570 + (ulonglong)param_7 * 4),param_8);
  }
  return;
}

