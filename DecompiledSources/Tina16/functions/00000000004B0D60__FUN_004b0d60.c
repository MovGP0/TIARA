/* Ghidra address: 004b0d60 */
/* Ghidra symbol: FUN_004b0d60 */


void FUN_004b0d60(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  
  if (param_2 != *(int *)(param_1 + 8)) {
    local_38 = param_1;
    local_2c = param_2;
    if (param_2 < 0) {
      FUN_004b0d20(param_1);
    }
    iVar3 = (local_2c / 0x20 + (local_2c % 0x20 + 0x1f) / 0x20) * 4;
    iVar2 = *(int *)(local_38 + 8) % 0x20 + 0x1f;
    iVar1 = (*(int *)(local_38 + 8) / 0x20 + iVar2 / 0x20) * 4;
    if (iVar3 != iVar1) {
      lVar4 = 0;
      if (iVar3 != 0) {
        lVar4 = FUN_004095c0((longlong)iVar3,(longlong)iVar2 % 0x20 & 0xffffffff);
        FUN_0040d200(lVar4,(longlong)iVar3,0);
      }
      if (iVar1 != 0) {
        if (lVar4 != 0) {
          iVar3 = FUN_004b0d50(auStack_58,iVar1,iVar3);
          FUN_00409a70(*(undefined8 *)(local_38 + 0x10),lVar4,(longlong)iVar3);
        }
        FUN_004095f0(*(undefined8 *)(local_38 + 0x10),(longlong)iVar1);
      }
      *(longlong *)(local_38 + 0x10) = lVar4;
    }
    *(int *)(local_38 + 8) = local_2c;
  }
  return;
}

