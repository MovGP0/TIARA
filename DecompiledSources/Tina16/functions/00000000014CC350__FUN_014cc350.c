/* Ghidra address: 014cc350 */
/* Ghidra symbol: FUN_014cc350 */


int FUN_014cc350(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_3 + 0x210))(param_3,param_4);
  iVar2 = (**(code **)(*param_2 + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x210))(param_2,iVar4);
      if (iVar3 == iVar1) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

