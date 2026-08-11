/* Ghidra address: 01b8acc0 */
/* Ghidra symbol: FUN_01b8acc0 */


undefined8 FUN_01b8acc0(longlong param_1,int param_2,undefined8 *param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x3b8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3b8),iVar4);
      *param_3 = uVar3;
      sVar1 = (**(code **)(*(longlong *)*param_3 + 0xf8))((longlong *)*param_3);
      if ((sVar1 == 4) &&
         (iVar2 = (**(code **)(*(longlong *)*param_3 + 0x210))((longlong *)*param_3,0),
         iVar2 == param_2)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

