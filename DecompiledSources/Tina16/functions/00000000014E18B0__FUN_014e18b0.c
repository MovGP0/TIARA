/* Ghidra address: 014e18b0 */
/* Ghidra symbol: FUN_014e18b0 */


void FUN_014e18b0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  
  (**(code **)(*param_1 + 0x2d0))(param_1,1,local_30);
  FUN_01d3bac0(*(undefined8 *)(local_30[0] + 8));
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01d347d0(param_2,iVar2);
      FUN_014e17f0(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(*(longlong *)(local_30[0] + 8) + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(local_30[0] + 0x18) = *(undefined4 *)(param_2 + 0x30);
  return;
}

