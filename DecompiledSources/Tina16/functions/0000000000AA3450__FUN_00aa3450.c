/* Ghidra address: 00aa3450 */
/* Ghidra symbol: FUN_00aa3450 */


int FUN_00aa3450(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0x580) == '\0') {
    FUN_00a9db60(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  if ((*(char *)(param_1 + 0x574) != '\0') && (*(int *)(param_1 + 0x450) == 0x1fffffff)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x570);
  }
  if ((*(int *)(param_1 + 0x450) == 0x1fffffff) || (*(longlong *)(param_1 + 0x440) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x560);
  *(undefined1 *)(lVar2 + 0x150) = uVar5;
  *(undefined4 *)(lVar2 + 0x154) = *(undefined4 *)(param_1 + 0x450);
  iVar9 = *(int *)(param_1 + 0x484) + *(int *)(param_1 + 0x494) + *(int *)(param_1 + 0x4a4);
  iVar10 = *(int *)(param_1 + 0x47c) + *(int *)(param_1 + 0x48c) + *(int *)(param_1 + 0x49c);
  if (*(char *)(param_1 + 0x580) == '\0') {
    *(undefined4 *)(lVar2 + 0x130) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x568);
  if (iVar4 < 1) {
    iVar8 = (param_3 - iVar9) - iVar10;
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0xb8))
              (*(longlong **)(param_1 + 0x560),param_2,&local_2c,&local_30,param_3,param_4);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0xe0);
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = (int)*(undefined8 *)(lVar2 + -8);
    }
    iVar7 = 0;
    iVar6 = 0;
    if (iVar4 - 1U < 0x80000000) {
      do {
        iVar7 = iVar7 + *(int *)(lVar2 + (longlong)iVar6 * 4);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (999 < iVar7) {
      iVar7 = 1000;
    }
    iVar4 = local_30;
    if (0 < iVar7) {
      iVar4 = thunk_FUN_03f3ed25(iVar8,iVar7,1000);
      iVar7 = iVar4;
      if (iVar4 < local_2c) {
        iVar7 = local_2c;
      }
      local_2c = iVar7;
      if (iVar4 < local_30) {
        iVar4 = local_30;
      }
    }
    local_30 = iVar4;
    if ((iVar8 <= local_30) && (local_30 = iVar8, iVar8 < local_2c)) {
      local_30 = local_2c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x580) == '\0') {
      if (*(char *)(param_1 + 0x56c) == '\0') {
        iVar4 = iVar4 - (*(int *)(param_1 + 0x494) + *(int *)(param_1 + 0x4a4) +
                         *(int *)(param_1 + 0x48c) + *(int *)(param_1 + 0x49c));
      }
      else {
        iVar4 = thunk_FUN_03f3ed25(param_3,iVar4,1000);
        iVar4 = (iVar4 - iVar9) - iVar10;
      }
      plVar3 = *(longlong **)(param_1 + 0x560);
      *(int *)(plVar3 + 0x26) = iVar4;
      (**(code **)(*plVar3 + 0xb8))(plVar3,param_2,&local_2c,&local_30,param_3,param_4);
      if (local_30 < iVar4) {
        iVar4 = local_30;
      }
      if (iVar4 < local_2c) {
        iVar4 = local_2c;
      }
      *(int *)(*(longlong *)(param_1 + 0x560) + 0x130) = iVar4;
    }
    local_30 = *(int *)(*(longlong *)(param_1 + 0x560) + 0x130);
  }
  *(int *)(param_1 + 0x4c8) = local_30;
  if (((*(int *)(param_1 + 0x484) == 0) && (*(int *)(param_1 + 0x47c) == 0)) &&
     (local_30 + iVar9 + iVar10 < param_3)) {
    iVar10 = ((param_3 - iVar9) - local_30) - iVar10;
    cVar1 = *(char *)(param_1 + 0x582);
    if (cVar1 == '\x01') {
      *(int *)(param_1 + 0x47c) = iVar10;
    }
    else if (cVar1 == '\x02') {
      *(int *)(param_1 + 0x484) = iVar10 / 2;
      *(int *)(param_1 + 0x47c) = iVar10 - iVar10 / 2;
    }
    else if (cVar1 == '\x03') {
      *(int *)(param_1 + 0x484) = iVar10;
    }
  }
  return local_30;
}

