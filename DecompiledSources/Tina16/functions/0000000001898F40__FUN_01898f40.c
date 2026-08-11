/* Ghidra address: 01898f40 */
/* Ghidra symbol: FUN_01898f40 */


void FUN_01898f40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = FUN_0064d0b0(param_1);
  iVar2 = FUN_0064d120(param_1);
  if (*(char *)(param_1 + 0x734) == '\0') {
    FUN_00498350(&local_38,(iVar1 - *(int *)(param_1 + 0x730)) + -4,2,iVar1 + -4,
                 *(int *)(param_1 + 0x730) + 2);
    *(undefined8 *)(param_1 + 0x738) = local_38;
    *(undefined8 *)(param_1 + 0x740) = uStack_30;
  }
  else if (*(char *)(param_1 + 0x734) == '\x01') {
    FUN_00498350(&local_38,(iVar1 - *(int *)(param_1 + 0x730)) + -4,
                 (iVar2 + -2) - *(int *)(param_1 + 0x730),iVar1 + -4,iVar2 + -2);
    *(undefined8 *)(param_1 + 0x738) = local_38;
    *(undefined8 *)(param_1 + 0x740) = uStack_30;
  }
  return;
}

