/* Ghidra address: 0194fee0 */
/* Ghidra symbol: FUN_0194fee0 */


void FUN_0194fee0(longlong *param_1,int param_2,int param_3,undefined2 param_4,longlong param_5)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((*(char *)(param_5 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_5 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_5);
    if (param_1[0x28] != 0) {
      cVar1 = FUN_0197dc50(param_1[0x28],param_2,param_3,param_4,param_5);
    }
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x128))(param_1,param_2,param_3,param_4,param_5);
      if ((*(char *)(param_5 + 10) != '\0') && (param_1[0x1e] != 0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x1e] + 0x200))
                          ((longlong *)param_1[0x1e],(double)param_2,(double)param_3);
        if (cVar1 != '\0') {
          FUN_0194fee0(param_1[0x1e],param_2,param_3,param_4,param_5);
          *(undefined1 *)(param_5 + 10) = 0;
        }
      }
    }
  }
  return;
}

