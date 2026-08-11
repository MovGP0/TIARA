/* Ghidra address: 006e5fa0 */
/* Ghidra symbol: FUN_006e5fa0 */


void FUN_006e5fa0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = FUN_006e5350();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_006e5360(param_1,iVar3);
      FUN_004ae7e0(param_2,uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006e2530(param_1);
  return;
}

