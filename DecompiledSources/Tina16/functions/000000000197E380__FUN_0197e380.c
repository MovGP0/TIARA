/* Ghidra address: 0197e380 */
/* Ghidra symbol: FUN_0197e380 */


void FUN_0197e380(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if ((*(longlong *)(param_3 + 0x27) == 0) ||
         (*(int *)(*(longlong *)(param_3 + 0x27) + 0x10) < 2)) {
        if (param_2 != 0) {
          if (((*(byte *)(param_2 + 0xc4) & 1) == 0) && (*(char *)(param_3 + 0xb) == '\x01')) {
            return;
          }
          if (*(char *)(param_3 + 0x1e) != '\0') {
            return;
          }
        }
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
        (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3,param_4,param_5);
      }
      else {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2,param_3,param_4,param_5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

