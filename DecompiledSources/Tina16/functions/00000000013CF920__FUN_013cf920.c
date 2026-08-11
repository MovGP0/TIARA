/* Ghidra address: 013cf920 */
/* Ghidra symbol: FUN_013cf920 */


void FUN_013cf920(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x778),iVar6);
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
        *(undefined1 *)(lVar4 + 0x18) = 0;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar6);
        uVar5 = FUN_019a45d0();
        FUN_019ae710(uVar5,local_38);
        FUN_013c5ac0(*(undefined8 *)(param_1 + 0x900),local_38);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_30[0] = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00f1e090(local_30);
  FUN_013ca610(param_1,local_30[0]);
  FUN_00410f20(local_30[0]);
  FUN_01cec4a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0));
  if (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) != 0) {
    FUN_01aceb90(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1);
  }
  FUN_013cab80(param_1,0);
  FUN_00414480(&local_38);
  return;
}

