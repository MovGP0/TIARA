/* Ghidra address: 007fa6c0 */
/* Ghidra symbol: FUN_007fa6c0 */


void FUN_007fa6c0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x34) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if ((param_2 <= iVar2) && (iVar2 = param_2, param_2 < 0)) {
      iVar2 = 0;
    }
    bVar5 = *(char *)(param_1 + 0x20) != '\0';
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 0x14) = iVar2;
      if (*(char *)(param_1 + 0x20) == '\0') {
        FUN_0065b0f0(*(undefined8 *)(param_1 + 8),iVar1 - iVar2,0);
      }
      else {
        FUN_0065b0f0(*(undefined8 *)(param_1 + 8),0,iVar1 - iVar2);
      }
      if ((((*(ushort *)(*(longlong *)(param_1 + 8) + 0x34) & 0x10) != 0) &&
          (lVar3 = FUN_007f9b70(*(longlong *)(param_1 + 8),0), lVar3 != 0)) &&
         (*(longlong *)(lVar3 + 0x510) != 0)) {
        (**(code **)(**(longlong **)(lVar3 + 0x510) + 0x18))(*(longlong **)(lVar3 + 0x510));
      }
    }
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    iVar2 = thunk_FUN_041d0d95(uVar4,bVar5);
    if (iVar2 != *(int *)(param_1 + 0x14)) {
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
      thunk_FUN_041b452e(uVar4,bVar5,*(undefined4 *)(param_1 + 0x14),0xffffffff);
    }
  }
  else {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}

