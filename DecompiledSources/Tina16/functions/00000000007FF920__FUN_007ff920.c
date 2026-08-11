/* Ghidra address: 007ff920 */
/* Ghidra symbol: FUN_007ff920 */


void FUN_007ff920(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x21]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (cVar1 == '\0') goto LAB_007ff978;
    }
    if (param_2 == 0) {
      *(char *)((longlong)param_1 + 0x4d1) = (char)param_1[0xab];
    }
    else {
      *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((longlong)param_1 + 0x4d1);
      *(undefined1 *)((longlong)param_1 + 0x4d1) = 0;
    }
  }
LAB_007ff978:
  FUN_0064cee0(param_1,param_2,param_3);
  return;
}

