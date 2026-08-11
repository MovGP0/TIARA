/* Ghidra address: 0194fd80 */
/* Ghidra symbol: FUN_0194fd80 */


void FUN_0194fd80(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
  lVar1 = param_1[0x1e];
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xc2) == '\0')) {
    FUN_0194fd80(lVar1,param_2,param_3);
  }
  if ((*(char *)(param_3 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_3 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_3);
    (**(code **)(*param_1 + 0x140))(param_1,param_2,param_3);
    if (param_1[0x28] != 0) {
      FUN_0197e130(param_1[0x28],param_3);
    }
  }
  return;
}

