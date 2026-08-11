/* Ghidra address: 01432b00 */
/* Ghidra symbol: FUN_01432b00 */


void FUN_01432b00(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar3 = FUN_01417aa0(&PTR_FUN_014169f8,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                       *(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)PTR_DAT_02004530 = uVar3;
  *(undefined4 *)(*(longlong *)PTR_DAT_02004530 + 0xf8c) = param_2;
  *(undefined1 *)(*(longlong *)PTR_DAT_02004530 + 0xfa8) = 0;
  FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 4000,*(undefined8 *)(param_1 + 0x88));
  lVar4 = FUN_004113f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1a8),&PTR_FUN_01763148);
  FUN_00414480(*(longlong *)PTR_DAT_02004530 + 0xf90);
  FUN_00414480(*(longlong *)PTR_DAT_02004530 + 0xf98);
  iVar2 = *(int *)(*(longlong *)PTR_DAT_02004530 + 0xf8c);
  if ((iVar2 == 0) || (iVar2 == 2)) {
    FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 0xf90,*(undefined8 *)(lVar4 + 0x140));
    FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 0xf80,*(undefined8 *)(lVar4 + 0x140));
  }
  else if (iVar2 == 1) {
    FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 0xf90,*(undefined8 *)(lVar4 + 0x138));
    FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 0xf98,*(undefined8 *)(lVar4 + 0x130));
    FUN_00414ad0(*(longlong *)PTR_DAT_02004530 + 0xf80,*(undefined8 *)(lVar4 + 0x138));
  }
  *(longlong *)(*(longlong *)PTR_DAT_02004530 + 0xfb0) = lVar4;
  plVar1 = *(longlong **)(lVar4 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar2) {
      *(undefined1 *)(*(longlong *)PTR_DAT_02004530 + 0xfa8) = 1;
    }
  }
  FUN_01418140(*(undefined8 *)PTR_DAT_02004530);
  iVar2 = (**(code **)(**(longlong **)PTR_DAT_02004530 + 0x2d0))(*(longlong **)PTR_DAT_02004530);
  if (iVar2 == 1) {
    FUN_00441920(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02004530 + 0xf90));
    FUN_00414ad0(param_1 + 0x78,local_20[0]);
    FUN_00441920(&local_28,*(undefined8 *)(*(longlong *)PTR_DAT_02004530 + 0xf98));
    FUN_00414ad0(param_1 + 0x80,local_28);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(longlong *)PTR_DAT_02004530 + 0xf8c);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02004530);
  FUN_00414560(&local_28,2);
  return;
}

