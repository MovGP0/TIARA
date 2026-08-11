/* Ghidra address: 00a205c0 */
/* Ghidra symbol: FUN_00a205c0 */


void FUN_00a205c0(longlong param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (*(uint *)(lVar1 + 0x10) < *(uint *)(param_1 + 0x140)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    do {
      if (uVar3 < 8) {
        (**(code **)(*(longlong *)(param_1 + 0x1c0) + 8))
                  (param_1,param_2,param_3,param_4,lVar1 + 0x20,(uint *)(lVar1 + 0x14),8);
        uVar3 = *(uint *)(lVar1 + 0x14);
      }
      if (uVar3 != 8) {
        return;
      }
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x1c8) + 8))(param_1,lVar1 + 0x20);
      if (iVar2 == 0) {
        if (*(int *)(lVar1 + 0x18) != 0) {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined4 *)(lVar1 + 0x18) = 1;
        return;
      }
      if (*(int *)(lVar1 + 0x18) != 0) {
        *param_3 = *param_3 + 1;
        *(undefined4 *)(lVar1 + 0x18) = 0;
      }
      *(undefined4 *)(lVar1 + 0x14) = 0;
      uVar4 = *(int *)(lVar1 + 0x10) + 1;
      *(uint *)(lVar1 + 0x10) = uVar4;
      uVar3 = 0;
    } while (uVar4 < *(uint *)(param_1 + 0x140));
  }
  return;
}

