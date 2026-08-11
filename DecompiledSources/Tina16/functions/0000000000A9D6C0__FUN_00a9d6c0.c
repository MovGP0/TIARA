/* Ghidra address: 00a9d6c0 */
/* Ghidra symbol: FUN_00a9d6c0 */


undefined8
FUN_00a9d6c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar3 = 0;
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x530) + 0x10) + -1;
    if (-1 < iVar4) {
      do {
        plVar2 = (longlong *)FUN_00ac3910(*(undefined8 *)(param_1 + 0x530),iVar4);
        cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3,param_4,param_5,param_6);
        if (cVar1 != '\0') {
          return 1;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_00ac36f0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar3;
}

