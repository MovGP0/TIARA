/* Ghidra address: 00a9bfa0 */
/* Ghidra symbol: FUN_00a9bfa0 */


undefined8 FUN_00a9bfa0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x30) <= param_2) &&
     (param_2 <= *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34))) {
    iVar3 = 0;
    iVar4 = *(int *)(param_1 + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_00ac3910(param_1,iVar3);
        uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3,param_4);
        if ((char)uVar2 != '\0') {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return uVar2;
}

