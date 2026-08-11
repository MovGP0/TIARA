/* Ghidra address: 01780f10 */
/* Ghidra symbol: FUN_01780f10 */


void FUN_01780f10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  lVar1 = FUN_00c3d400(&LAB_00c3a6d0,1);
  *param_3 = lVar1;
  *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(*param_3 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_00414ad0(*param_3 + 0x10,*(undefined8 *)(param_2 + 0x10));
  FUN_00414ad0(*param_3 + 0x18,*(undefined8 *)(param_2 + 0x18));
  *(undefined2 *)(*param_3 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),iVar3);
      FUN_017809e0(param_1,uVar2,local_40);
      FUN_004ae7e0(*(undefined8 *)(*param_3 + 0x38),local_40[0]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

