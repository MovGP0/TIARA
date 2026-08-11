/* Ghidra address: 01bf90c0 */
/* Ghidra symbol: FUN_01bf90c0 */


void FUN_01bf90c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x1b8) != param_2) {
    *(longlong *)(param_1 + 0x1b8) = param_2;
    iVar3 = 0;
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10) + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          lVar1 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x358))(*(longlong **)(lVar1 + 0x18));
          lVar1 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
          lVar1 = FUN_01c03e40(*(undefined8 *)(lVar1 + 0x18));
          lVar2 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
          if (lVar1 == *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x528)) {
            lVar1 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
            (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x318))(*(longlong **)(lVar1 + 0x18),0);
          }
          lVar1 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar3);
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x180))(*(longlong **)(lVar1 + 0x18));
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      (**(code **)(param_1 + 0x1a8))(*(undefined8 *)(param_1 + 0x1b0),param_1);
    }
    if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
      FUN_01bf6300(0);
    }
  }
  return;
}

