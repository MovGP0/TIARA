/* Ghidra address: 00bff270 */
/* Ghidra symbol: FUN_00bff270 */


void FUN_00bff270(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_3c [3];
  
  iVar4 = param_3 + 1;
  cVar1 = FUN_00c10e70(param_1);
  iVar3 = iVar4;
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x48))
                      (*(longlong **)(param_1 + 0x5f8),param_3,param_4);
    if (iVar2 != 0) {
      iVar3 = 0x7fffffff;
    }
    FUN_00bf37c0(param_1,iVar4,iVar3);
  }
  iVar2 = param_3;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    iVar2 = FUN_00bfee00(param_1,param_3);
    if (iVar3 <= iVar2 + 1) {
      iVar3 = iVar2 + 1;
    }
    if (*(longlong *)(param_1 + 0x4e8) != *(longlong *)(param_1 + 0x4f0)) {
      iVar3 = 0x7fffffff;
    }
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    cVar1 = FUN_00bdfaa0(*(undefined8 *)(param_1 + 0x4a8),iVar4,local_3c);
    if (cVar1 != '\0') {
      FUN_00c00b80(param_1,local_3c[0],1);
    }
    FUN_00be12e0(*(undefined8 *)(param_1 + 0x4a8),param_3,param_4);
    FUN_00c104f0(param_1,param_3,iVar2);
  }
  FUN_00bf3990(param_1,iVar4,iVar3);
  FUN_00bf37c0(param_1,iVar4,iVar3);
  if ((*(uint *)(param_1 + 0x63a) & 4) != 0) {
    iVar3 = FUN_00bcf960(*(undefined8 *)(param_1 + 0x4e8),param_3);
    if (*(int *)(param_1 + 0x510) < iVar3) {
      FUN_00c036c0(param_1,iVar3);
    }
  }
  return;
}

