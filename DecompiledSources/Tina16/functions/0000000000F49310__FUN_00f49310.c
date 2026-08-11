/* Ghidra address: 00f49310 */
/* Ghidra symbol: FUN_00f49310 */


void FUN_00f49310(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  local_30 = (longlong *)0x0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  local_40 = param_1;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_00f492c0(auStack_68,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    if (param_3 == '\0') {
      uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_30 + 0xa8))(local_30,uVar2);
    }
    FUN_01992c00(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_30);
    if (param_3 != '\0') {
      FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
    }
  }
  if (*(longlong *)(local_40 + 8) != 0) {
    uVar2 = FUN_00f48960(*(longlong *)(local_40 + 8),param_2,&local_38);
    *(undefined8 *)(local_40 + 8) = uVar2;
    if (local_38 != 0) {
      FUN_00410f20(local_38);
    }
  }
  return;
}

