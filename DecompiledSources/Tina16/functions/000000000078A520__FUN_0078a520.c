/* Ghidra address: 0078a520 */
/* Ghidra symbol: FUN_0078a520 */


void FUN_0078a520(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  lVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if ((int)param_2 != lVar2) {
    if ((int)param_2 < 0) {
      FUN_0044d470();
    }
    FUN_004194b0(&local_20,*(undefined8 *)(param_1 + 8),&DAT_00760f98);
    FUN_00419260(&local_28,&DAT_00760f98,1,(longlong)(int)param_2);
    iVar1 = 0;
    if (local_28 != 0) {
      iVar1 = (int)*(undefined8 *)(local_28 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        *(undefined4 *)(local_28 + (longlong)iVar3 * 0x10) = 0xffffffff;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004194b0(param_1 + 8,local_28,&DAT_00760f98);
    *(uint *)(param_1 + 0x20) = (param_2 >> 1) + (param_2 >> 2);
    iVar1 = 0;
    if (local_20 != 0) {
      iVar1 = (int)*(undefined8 *)(local_20 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = (longlong)iVar3;
        if (*(int *)(local_20 + lVar2 * 0x10) != -1) {
          FUN_0078a8d0(param_1,*(undefined4 *)(local_20 + lVar2 * 0x10),
                       *(undefined4 *)(local_20 + 4 + lVar2 * 0x10),
                       *(undefined8 *)(local_20 + 8 + lVar2 * 0x10));
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00417840(&local_28,&DAT_00760f98,2);
  return;
}

