/* Ghidra address: 012bc3d0 */
/* Ghidra symbol: FUN_012bc3d0 */


void FUN_012bc3d0(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_2 != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
        FUN_004095f0(uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

