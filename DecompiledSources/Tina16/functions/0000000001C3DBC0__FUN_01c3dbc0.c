/* Ghidra address: 01c3dbc0 */
/* Ghidra symbol: FUN_01c3dbc0 */


undefined8 FUN_01c3dbc0(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  iVar5 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      uVar6 = (uint)(iVar5 + iVar1) >> 1;
      uVar3 = (**(code **)(*param_1 + 0x30))(param_1,uVar6);
      iVar2 = FUN_01c3db80(uVar3,param_2);
      if (iVar2 < 0) {
        iVar5 = uVar6 + 1;
      }
      else {
        iVar1 = uVar6 - 1;
        if (iVar2 == 0) {
          uVar4 = 1;
        }
      }
    } while (iVar5 <= iVar1);
  }
  *param_3 = iVar5;
  return uVar4;
}

