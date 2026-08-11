/* Ghidra address: 004563e0 */
/* Ghidra symbol: FUN_004563e0 */


bool FUN_004563e0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    iVar6 = 0;
    if (*param_1 != 0) {
      iVar6 = *(int *)(*param_1 + -4);
    }
    iVar4 = 0;
    if (param_2 != 0) {
      iVar4 = *(int *)(param_2 + -4);
    }
    iVar6 = iVar6 - iVar4;
    if ((-1 < iVar6) && (cVar1 = FUN_0044f380(*param_1,iVar6), cVar1 != '\x01')) {
      if (param_3 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
      uVar5 = 0;
      if (param_2 != 0) {
        uVar5 = *(undefined4 *)(param_2 + -4);
      }
      iVar6 = FUN_004561a0(param_2,0,*param_1,iVar6,uVar5,uVar5,uVar3,DAT_0200c440);
      return iVar6 == 0;
    }
    bVar2 = false;
  }
  return bVar2;
}

