/* Ghidra address: 01306350 */
/* Ghidra symbol: FUN_01306350 */


void FUN_01306350(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = FUN_00654c00();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_00654bc0(*(undefined8 *)(param_1 + 0x850),iVar3);
      if (param_2 == 0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,1);
      }
      else if (param_2 == 1) {
        (**(code **)(*plVar2 + 0x128))(plVar2,0);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

