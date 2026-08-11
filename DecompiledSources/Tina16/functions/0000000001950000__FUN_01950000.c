/* Ghidra address: 01950000 */
/* Ghidra symbol: FUN_01950000 */


void FUN_01950000(longlong *param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5,
                 longlong param_6)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((*(char *)(param_6 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_6 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_6);
    if (param_1[0x28] != 0) {
      cVar1 = FUN_0197dd20(param_1[0x28],param_2,param_3,param_4,param_5,param_6);
    }
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3,param_4,param_5,param_6);
      if ((*(char *)(param_6 + 10) != '\0') && (param_1[0x1e] != 0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x1e] + 0x200))
                          ((longlong *)param_1[0x1e],(double)param_2,(double)param_3);
        if (cVar1 != '\0') {
          FUN_01950000(param_1[0x1e],param_2,param_3,param_4,param_5,param_6);
          *(undefined1 *)(param_6 + 10) = 0;
        }
      }
    }
  }
  return;
}

