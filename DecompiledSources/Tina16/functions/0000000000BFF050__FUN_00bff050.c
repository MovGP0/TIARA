/* Ghidra address: 00bff050 */
/* Ghidra symbol: FUN_00bff050 */


void FUN_00bff050(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (0 < iVar2) {
      iVar3 = FUN_00bfee00(param_1,param_3);
    }
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    FUN_00be10a0(*(undefined8 *)(param_1 + 0x4a8),param_3,param_4);
    FUN_00c104f0(param_1,param_3,iVar3);
    FUN_00bf3760(param_1);
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (0 < iVar3) {
      FUN_00bfee00(param_1,param_3);
    }
  }
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x40))
              (*(longlong **)(param_1 + 0x5f8),param_3,param_4);
  }
  FUN_00bf3990(param_1,param_3 + 1,0x7fffffff);
  FUN_00bf37c0(param_1,param_3 + 1,0x7fffffff);
  *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 2;
  return;
}

