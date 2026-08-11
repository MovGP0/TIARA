/* Ghidra address: 00707440 */
/* Ghidra symbol: FUN_00707440 */


void FUN_00707440(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong local_20;
  
  local_20 = 0;
  FUN_00419430(&local_20,&DAT_00707400);
  if (param_2 != *(int *)(param_1 + 0x28)) {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_00707cd0(*(undefined8 *)(param_1 + 8),iVar3);
        if (*(int *)(lVar1 + 0x28) == param_2) goto LAB_00707638;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00707f20(*(undefined8 *)(param_1 + 8));
    iVar4 = FUN_006efc30();
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
        lVar1 = FUN_006efcb0(*(undefined8 *)(lVar1 + 0x4e0),iVar3);
        if (*(int *)(lVar1 + 0x48) == *(int *)(param_1 + 0x28)) {
          lVar1 = 0;
          if (local_20 != 0) {
            lVar1 = *(longlong *)(local_20 + -8);
          }
          FUN_00419260(&local_20,&DAT_00707400,1,lVar1 + 1);
          lVar1 = 0;
          if (local_20 != 0) {
            lVar1 = *(longlong *)(local_20 + -8);
          }
          *(int *)(local_20 + -4 + lVar1 * 4) = iVar3;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    lVar1 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      uVar2 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
      uVar2 = FUN_0065b870(uVar2);
      thunk_FUN_041b2403(uVar2,0x1096,(longlong)*(int *)(param_1 + 0x28),0);
    }
    *(int *)(param_1 + 0x28) = param_2;
    lVar1 = FUN_00707f20();
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      FUN_00707f20(*(undefined8 *)(param_1 + 8));
      FUN_006f7580();
    }
    iVar4 = 0;
    if (local_20 != 0) {
      iVar4 = (int)*(undefined8 *)(local_20 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
        uVar2 = FUN_006efcb0(*(undefined8 *)(lVar1 + 0x4e0),
                             *(undefined4 *)(local_20 + (longlong)iVar3 * 4));
        FUN_006eeef0(uVar2,*(undefined4 *)(param_1 + 0x28));
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
LAB_00707638:
  FUN_00419430(&local_20,&DAT_00707400);
  return;
}

