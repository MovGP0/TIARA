/* Ghidra address: 00654c30 */
/* Ghidra symbol: FUN_00654c30 */


void FUN_00654c30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00654c00();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = FUN_00654bc0(param_1,iVar3);
      (**(code **)(lVar1 + 0x80))(*(undefined8 *)(lVar1 + 0x88),param_2);
      if (*(longlong *)(param_2 + 0x18) != 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

