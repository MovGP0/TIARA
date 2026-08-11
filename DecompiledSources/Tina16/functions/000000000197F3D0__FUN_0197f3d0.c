/* Ghidra address: 0197f3d0 */
/* Ghidra symbol: FUN_0197f3d0 */


undefined4
FUN_0197f3d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,undefined8 param_6,undefined1 param_7,byte param_8)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_3);
  if (iVar2 == -1) {
    lVar5 = FUN_01980050(&DAT_01946930,1);
    *(undefined1 *)(lVar5 + 0x49) = param_5;
    *(undefined8 *)(lVar5 + 0x38) = param_6;
    *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(param_1 + 0x24);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_3,lVar5);
    *(longlong *)(lVar5 + 0x58) = param_1;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar2);
  }
  if ((param_2 != 0) && (*(longlong *)(lVar5 + 0x40) == 0)) {
    FUN_00414ad0(lVar5 + 0x40,param_2);
  }
  iVar2 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x28))(*(longlong **)(lVar5 + 8));
  uVar3 = FUN_0197ff30(lVar5,param_4,*(char *)(lVar5 + 0x49) == '\0',param_7);
  iVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x28))(*(longlong **)(lVar5 + 8));
  if ((param_8 & iVar2 < iVar4) != 0) {
    plVar1 = *(longlong **)(lVar5 + 8);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 + -1,0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if ((((iVar4 < 1) ||
       (lVar6 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),iVar4 + -1), lVar6 != lVar5)) &&
      (*(char *)(lVar5 + 0x49) != '\0')) &&
     (iVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x28))(*(longlong **)(lVar5 + 8)),
     iVar2 < iVar4)) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar5);
  }
  return uVar3;
}

