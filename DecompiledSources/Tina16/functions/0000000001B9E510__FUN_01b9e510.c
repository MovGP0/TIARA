/* Ghidra address: 01b9e510 */
/* Ghidra symbol: FUN_01b9e510 */


undefined1 FUN_01b9e510(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 local_6d;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40 = *param_1;
  local_38 = param_1[1];
  local_30 = param_1[2];
  lVar2 = FUN_004095c0(800);
  iVar4 = 1;
  do {
    *(undefined4 *)(lVar2 + -4 + (longlong)iVar4 * 4) = 0xffffffff;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc9);
  iVar4 = *(int *)(local_38 + 0x10);
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_01d347d0(local_38,iVar5);
      uVar1 = (uint)*(byte *)(lVar3 + 8);
      if (*(int *)(lVar2 + -4 + (longlong)(int)uVar1 * 4) == 1) {
        FUN_01d43440(&local_58,uVar1);
        FUN_00416ba0(local_50,L"Duplicated index: ",local_58);
        FUN_01b9d990(local_50[0]);
        local_6d = 0;
        goto LAB_01b9e6b4;
      }
      *(undefined4 *)(lVar2 + -4 + (longlong)(int)uVar1 * 4) = 1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar5 = 0;
  iVar4 = *(int *)(local_30 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_01d347d0(local_30,iVar5);
      uVar1 = (uint)*(byte *)(lVar3 + 8);
      if (*(int *)(lVar2 + -4 + (longlong)(int)uVar1 * 4) == 1) {
        FUN_01d43440(&local_68,uVar1);
        FUN_00416ba0(&local_60,L"Duplicated index: ",local_68);
        FUN_01b9d990(local_60);
        local_6d = 0;
        goto LAB_01b9e6b4;
      }
      *(undefined4 *)(lVar2 + -4 + (longlong)(int)uVar1 * 4) = 1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 1;
  while( true ) {
    if ((local_6c == 1) && (*(int *)(lVar2 + -4 + (longlong)iVar4 * 4) == -1)) {
      local_6c = 2;
    }
    if ((local_6c == 2) && (*(int *)(lVar2 + -4 + (longlong)iVar4 * 4) == 1)) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 0xc9) {
      FUN_004095f0(lVar2);
LAB_01b9e6b4:
      FUN_00414560(&local_68,4);
      return local_6d;
    }
  }
  FUN_01b9d990(L"Non continous index");
  local_6d = 0;
  goto LAB_01b9e6b4;
}

