/* Ghidra address: 00806120 */
/* Ghidra symbol: FUN_00806120 */


void FUN_00806120(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     (*(char *)((longlong)param_1 + 0x391) != '\0')) {
    (**(code **)(*param_1 + 0x178))(param_1);
    if (param_1[0xa0] != 0) {
      iVar1 = FUN_007e2ef0();
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          plVar2 = (longlong *)FUN_007e2f10(*(undefined8 *)(param_1[0xa0] + 0x80),iVar3);
          if (*(char *)((longlong)plVar2 + 0x86) != '\0') {
            (**(code **)(*plVar2 + 0xa8))(plVar2);
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_00806050(auStack_48,param_1);
  }
  return;
}

