/* Ghidra address: 00803e40 */
/* Ghidra symbol: FUN_00803e40 */


void FUN_00803e40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar2 = param_1[0x1a];
    if (*(int *)(lVar2 + 0x1c) != 0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar2 + 0x1c);
    }
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar2 + 0x18);
    }
    if (*(int *)(lVar2 + 0x14) != 0) {
      *(int *)(lVar1 + 0x20) = *(int *)(lVar2 + 0x14);
    }
    if (*(int *)(lVar2 + 0x10) != 0) {
      *(int *)(lVar1 + 0x24) = *(int *)(lVar2 + 0x10);
    }
    (**(code **)(*param_1 + 0xb0))(param_1,lVar1 + 0x18,lVar1 + 0x1c,lVar1 + 0x20,lVar1 + 0x24);
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

