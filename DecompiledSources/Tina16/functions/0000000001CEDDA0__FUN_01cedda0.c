/* Ghidra address: 01cedda0 */
/* Ghidra symbol: FUN_01cedda0 */


void FUN_01cedda0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int local_3c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01cecfe0(param_1);
    FUN_01ced8f0(param_1);
    FUN_01cef810(param_1);
    local_3c[0] = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) +
                  *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    FUN_01d311c0(param_2,local_3c,4);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    iVar3 = 1;
    if (0 < iVar1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3 + -1);
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    iVar3 = 1;
    if (0 < iVar1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar3 + -1);
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

