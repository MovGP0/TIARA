/* Ghidra address: 004575a0 */
/* Ghidra symbol: FUN_004575a0 */


undefined1 FUN_004575a0(longlong *param_1,longlong param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == '\0') {
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar3 = 0;
      if (*param_1 != 0) {
        iVar3 = *(int *)(*param_1 + -4);
      }
      iVar4 = 0;
      if (param_2 != 0) {
        iVar4 = *(int *)(param_2 + -4);
      }
      if (iVar3 < iVar4) {
        uVar1 = 0;
      }
      else {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = *(undefined4 *)(param_2 + -4);
        }
        iVar3 = FUN_004561a0(param_2,0,*param_1,0,uVar2,uVar2,0,DAT_0200c440);
        uVar1 = iVar3 == 0;
      }
    }
  }
  else {
    uVar1 = FUN_00457520(param_2,*param_1);
  }
  return uVar1;
}

