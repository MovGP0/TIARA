/* Ghidra address: 00bff140 */
/* Ghidra symbol: FUN_00bff140 */


void FUN_00bff140(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  
  iVar3 = param_3;
  if ((*(longlong *)(param_1 + 0x538) != 0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8)), 0 < iVar2)) {
    do {
      iVar3 = FUN_00bfee00(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3 + param_4);
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    cVar1 = FUN_00bdfaa0(*(undefined8 *)(param_1 + 0x4a8),param_3,&local_2c);
    if (cVar1 != '\0') {
      FUN_00c00b80(param_1,local_2c,1);
    }
    FUN_00be1200(*(undefined8 *)(param_1 + 0x4a8),param_3,param_4);
    FUN_00c104f0(param_1,param_3,iVar3 + -1);
  }
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x38))
              (*(longlong **)(param_1 + 0x5f8),param_3,param_4);
  }
  FUN_00bf3990(param_1,param_3 + 1,0x7fffffff);
  FUN_00bf37c0(param_1,param_3 + 1,0x7fffffff);
  *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 2;
  if (((*(uint *)(param_1 + 0x63a) & 4) != 0) &&
     (iVar3 = FUN_00bcf960(*(undefined8 *)(param_1 + 0x4e8),param_3),
     *(int *)(param_1 + 0x510) < iVar3)) {
    FUN_00c036c0(param_1,iVar3);
  }
  return;
}

