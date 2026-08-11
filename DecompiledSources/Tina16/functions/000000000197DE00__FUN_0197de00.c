/* Ghidra address: 0197de00 */
/* Ghidra symbol: FUN_0197de00 */


undefined8
FUN_0197de00(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = *param_4;
  uVar1 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      FUN_0197c210(uVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)(param_1 + 0x18));
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3,&local_30,param_5);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar1;
}

