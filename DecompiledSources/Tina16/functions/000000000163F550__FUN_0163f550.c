/* Ghidra address: 0163f550 */
/* Ghidra symbol: FUN_0163f550 */


void FUN_0163f550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c [3];
  
  local_40[0] = 0;
  local_48 = 0;
  FUN_004b84c0(param_2,local_2c,4);
  iVar2 = 0;
  iVar3 = local_2c[0];
  if (-1 < local_2c[0] + -1) {
    do {
      uVar1 = FUN_016123d0(&DAT_01611258,1);
      FUN_0163f460(param_1,param_2,uVar1);
      FUN_0163fc90(param_1,param_2);
      FUN_0043f750(local_40,iVar2);
      FUN_0043f750(&local_48,local_2c[0] + -1);
      FUN_00416cd0(param_1 + 0x10c8,7,*(undefined8 *)(param_1 + 0x10c8),&DAT_0163f6b8,
                   L"LoadObjects: ",local_40[0],L" of ",local_48,L" is OK");
      FUN_004ae7e0(param_4,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_48,2);
  return;
}

