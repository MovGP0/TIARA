/* Ghidra address: 0197d770 */
/* Ghidra symbol: FUN_0197d770 */


void FUN_0197d770(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 char param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if ((*(longlong *)(param_3 + 0x27) == 0) ||
         (*(int *)(*(longlong *)(param_3 + 0x27) + 0x10) < 2)) {
        if (param_2 != (longlong *)0x0) {
          if ((((*(byte *)((longlong)param_2 + 0xc4) & 1) == 0) &&
              (*(char *)(param_3 + 0xb) == '\x01')) &&
             (uVar2 = (**(code **)(*param_2 + 0x110))(param_2), (uVar2 & 0x20) != 0)) {
            return;
          }
          if (*(char *)(param_3 + 0x1e) != '\0') {
            return;
          }
        }
        if (param_5 == '\0') {
          plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
          param_5 = (**(code **)(*plVar1 + 0xb0))(plVar1);
        }
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
        (**(code **)(*plVar1 + 0x98))(plVar1,param_2,param_3,param_4,param_5);
      }
      else {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
        (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

