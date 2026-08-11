/* Ghidra address: 00d0dbe0 */
/* Ghidra symbol: FUN_00d0dbe0 */


void FUN_00d0dbe0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong local_30;
  
  local_30 = 0;
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  if (0 < iVar6) {
    uVar2 = FUN_00cd55d0(param_1);
    FUN_00d0d580(*param_2,&local_30,*(undefined8 *)(param_1 + 0x28),uVar2,1);
    uVar2 = (**(code **)(*param_2 + 0x58))(param_2);
    lVar1 = local_30;
    uVar5 = 0;
    if (local_30 != 0) {
      uVar5 = *(undefined4 *)(local_30 + -4);
    }
    uVar3 = FUN_00415ab0(local_30);
    uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
    FUN_00cd7350(uVar2,uVar3,uVar5,uVar4);
    iVar6 = 0;
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + -4);
    }
    uVar2 = FUN_00415ab0(local_30);
    FUN_0040d200(uVar2,(longlong)iVar6,0xaa);
    iVar6 = 0;
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + -4);
    }
    FUN_0040d200(uVar2,(longlong)iVar6,0x55);
    iVar6 = 0;
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + -4);
    }
    FUN_0040d200(uVar2,(longlong)iVar6,0);
  }
  FUN_004144d0(&local_30);
  return;
}

