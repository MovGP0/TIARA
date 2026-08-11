/* Ghidra address: 01884c70 */
/* Ghidra symbol: FUN_01884c70 */


void FUN_01884c70(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x250) = param_2;
  FUN_01884a40(param_1);
  lVar1 = FUN_01951400(param_1);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(lVar1,iVar3);
      if ((char)plVar2[0x17] != '\0') {
        (**(code **)(*plVar2 + 0xf0))(plVar2,1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

