/* Ghidra address: 006e5380 */
/* Ghidra symbol: FUN_006e5380 */


void FUN_006e5380(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_38 [24];
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_006e5360(param_1,iVar2);
      FUN_006ddff0(uVar1,local_38,0);
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar1,local_38);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

