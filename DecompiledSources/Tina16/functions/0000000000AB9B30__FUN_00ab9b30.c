/* Ghidra address: 00ab9b30 */
/* Ghidra symbol: FUN_00ab9b30 */


undefined8 FUN_00ab9b30(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  param_2 = param_2 - *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x70) + 0xd8);
  *param_3 = 32000;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 0x70);
  cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2 % 2);
  if (((cVar2 == '\0') &&
      (*(int *)(*(longlong *)(param_1 + 0x100) + 0x34) <=
       *(int *)(*(longlong *)(param_1 + 0x100) + 0x38))) &&
     ((*(int *)(*(longlong *)(param_1 + 0x100) + 0x38) !=
       *(int *)(*(longlong *)(param_1 + 0x100) + 0x34) ||
      (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x70) + 0x18) + 0x278)
       != '\0')))) {
    iVar3 = (int)(param_2 / 2);
    if ((iVar3 < *(int *)(*(longlong *)(param_1 + 0x100) + 0x34)) ||
       (*(int *)(*(longlong *)(param_1 + 0x100) + 0x38) <= iVar3)) {
      if (iVar3 < *(int *)(*(longlong *)(param_1 + 0x100) + 0x34)) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x34) - iVar3;
      }
      else {
        iVar3 = 32000;
      }
    }
    else {
      uVar4 = 1;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x38) - iVar3;
    }
    if (iVar3 < 0x7d01) {
      *param_3 = iVar3;
    }
    else {
      *param_3 = 32000;
    }
  }
  return uVar4;
}

