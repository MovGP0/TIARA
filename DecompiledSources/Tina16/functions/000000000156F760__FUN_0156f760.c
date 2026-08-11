/* Ghidra address: 0156f760 */
/* Ghidra symbol: FUN_0156f760 */


void FUN_0156f760(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x28),iVar2);
      FUN_004ae7e0(param_2,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_28,2);
  return;
}

