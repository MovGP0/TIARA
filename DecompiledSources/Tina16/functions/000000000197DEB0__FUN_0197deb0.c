/* Ghidra address: 0197deb0 */
/* Ghidra symbol: FUN_0197deb0 */


void FUN_0197deb0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      FUN_0197c210(uVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)(param_1 + 0x18));
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,&local_48);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

