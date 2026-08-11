/* Ghidra address: 01993390 */
/* Ghidra symbol: FUN_01993390 */


void FUN_01993390(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((undefined **)*param_2 != &PTR_FUN_017c0190) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x1f0))
            (*(longlong **)(param_1 + 0x68),0,param_1 + 0xac,param_1 + 0xa8);
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x1f0))
            (*(longlong **)(param_1 + 0x68),1,param_1 + 0xa4,param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0xac)) {
    FUN_01cefdf0(param_1 + 0xac,param_1 + 0xa4);
  }
  if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0xa8)) {
    FUN_01cefdf0(param_1 + 0xa8,param_1 + 0xa0);
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,0,param_1 + 0xe8,param_1 + 0xf0);
  (**(code **)(*param_2 + 0x1f0))(param_2,1,param_1 + 0xf8,param_1 + 0x100);
  if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xe8)) {
    FUN_01cefdf0(param_1 + 0xe8,param_1 + 0xf8);
  }
  if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf0)) {
    FUN_01cefdf0(param_1 + 0xf0,param_1 + 0x100);
  }
  iVar1 = FUN_017c2b70(param_2);
  if (iVar1 != 2) {
    return;
  }
  if (((*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0xf8)) ||
      (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa4))) ||
     (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0xac))) {
    if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x100)) {
      return;
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xa0)) {
      return;
    }
    if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0xa8)) {
      return;
    }
  }
  iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa8),
                       *(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (0 < iVar1) {
    return;
  }
  iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0),
                       *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa0));
  if (iVar1 < 1) {
    if ((*PTR_DAT_020052b8 == '\0') ||
       ((*(int *)(param_1 + 0x110) == -1 && (lVar3 = FUN_017c06d0(param_2), lVar3 == 0)))) {
      FUN_017c25e0(param_2,1);
      iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa8),
                           *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xf0);
      }
      else {
        iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa0),
                             *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
        if (iVar1 == -1) {
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xe8);
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xf0);
        }
      }
      FUN_0198a8b0(param_1 + 0x70,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
      iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa8),
                           *(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x100);
      }
      else {
        iVar1 = FUN_01cefe00(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa0),
                             *(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
        if (iVar1 == -1) {
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xf8);
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x100);
        }
      }
      FUN_0198a8b0(param_1 + 0x70,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
      uVar2 = FUN_00b92120(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa8));
      FUN_017c2cc0(*(undefined8 *)(param_1 + 0x68),0,uVar2);
      uVar2 = FUN_00b92120(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa0));
      FUN_017c2cc0(*(undefined8 *)(param_1 + 0x68),1,uVar2);
    }
    else {
      FUN_017c25e0(param_2,1);
      FUN_0198a830(param_1 + 0x70,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
      FUN_0198a830(param_1 + 0x70,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
    }
    return;
  }
  return;
}

