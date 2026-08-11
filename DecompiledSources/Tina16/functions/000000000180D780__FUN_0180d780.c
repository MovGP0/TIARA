/* Ghidra address: 0180d780 */
/* Ghidra symbol: FUN_0180d780 */


void FUN_0180d780(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = FUN_00414cb0(param_1);
  uVar1 = (longlong)iVar2 / 2;
  iVar5 = (int)uVar1;
  uVar3 = FUN_004095c0((longlong)iVar5,(longlong)iVar2 % 2 & 0xffffffff);
  uVar4 = FUN_00416740(param_1);
  FUN_004c86e0(uVar4,uVar3,iVar5 * 2);
  FUN_004b6dc0(param_2,0);
  (**(code **)(*param_2 + 0x20))(param_2,uVar3,uVar1 & 0xffffffff);
  FUN_004095f0(uVar3,(longlong)iVar5);
  return;
}

