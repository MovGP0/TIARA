/* Ghidra address: 00bd8800 */
/* Ghidra symbol: FUN_00bd8800 */


void FUN_00bd8800(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  
  local_2c = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  (**(code **)(*param_2 + 0x20))(param_2,&local_2c,4);
  iVar2 = 0;
  iVar3 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      uVar1 = FUN_00bd7720(param_1,iVar2);
      FUN_00bd71c0(uVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

