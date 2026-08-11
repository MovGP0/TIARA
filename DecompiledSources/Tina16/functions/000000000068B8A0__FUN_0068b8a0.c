/* Ghidra address: 0068b8a0 */
/* Ghidra symbol: FUN_0068b8a0 */


void FUN_0068b8a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x92] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar2 != -1) {
      uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x94] + 0x98))((longlong *)param_1[0x94],uVar3);
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        cVar1 = FUN_0068bca0(param_1,iVar2);
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)param_1[0x94] + 0x98))((longlong *)param_1[0x94],iVar2);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
  }
  return;
}

