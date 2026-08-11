/* Ghidra address: 01899c20 */
/* Ghidra symbol: FUN_01899c20 */


void FUN_01899c20(longlong *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  lVar1 = FUN_01899bf0(param_1);
  if (((char)param_1[100] == '\x02') && (lVar1 != 0)) {
    FUN_0189a420(lVar1,*(undefined4 *)((longlong)param_1 + 0x324));
  }
  if ((char)param_1[100] == '\x01') {
    *(bool *)((longlong)param_1 + 0x319) = *(char *)((longlong)param_1 + 0x319) == '\0';
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x319) = 1;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

