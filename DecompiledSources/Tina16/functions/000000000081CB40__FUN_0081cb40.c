/* Ghidra address: 0081cb40 */
/* Ghidra symbol: FUN_0081cb40 */


void FUN_0081cb40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_00818440(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    *(bool *)(param_1 + 0xe) = *(longlong *)(param_2 + 8) != 0;
    lVar1 = param_1[0x14];
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x38) != '\0')) {
      *(undefined1 *)(lVar1 + 0x38) = 0;
    }
    if (*(char *)(param_1[2] + 0x4d6) == '\x01') {
      iVar3 = FUN_0044f080();
      if (5 < iVar3) {
        FUN_00786040(param_1,0);
      }
      FUN_00785c20(param_1,param_2);
      if ((((*(char *)(param_1[2] + 0x4d6) == '\x01') && (iVar3 = FUN_0044f080(), 5 < iVar3)) &&
          (FUN_00786040(param_1,1), (*(ushort *)(param_1[2] + 0x34) & 8) == 0)) &&
         ((*(ushort *)(param_1[2] + 0x34) & 1) == 0)) {
        uVar4 = FUN_00786090(param_1);
        thunk_FUN_041543e0(uVar4,0,0,0x181);
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
    if (*(longlong *)(param_1[2] + 0x698) != 0) {
      thunk_FUN_0413e052(*(longlong *)(param_1[2] + 0x698),0x86,*(undefined8 *)(param_2 + 8),
                         *(undefined8 *)(param_2 + 0x10));
    }
    if ((*(char *)(param_1[2] + 0x4d1) != '\0') &&
       ((*(char *)(param_1[2] + 0x4d6) != '\x01' || (*(char *)(param_1[2] + 0x4d2) != '\x02')))) {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

