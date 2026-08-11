/* Ghidra address: 00a9d5f0 */
/* Ghidra symbol: FUN_00a9d5f0 */


undefined8
FUN_00a9d5f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    lVar1 = *(longlong *)(param_1 + 0x530);
    iVar4 = *(int *)(lVar1 + 0x10) + -1;
    if (-1 < iVar4) {
      do {
        plVar3 = (longlong *)FUN_00ac3910(lVar1,iVar4);
        uVar2 = (**(code **)(*plVar3 + 0x60))
                          (plVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  return uVar2;
}

