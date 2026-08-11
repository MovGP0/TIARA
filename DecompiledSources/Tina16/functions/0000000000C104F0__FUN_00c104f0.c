/* Ghidra address: 00c104f0 */
/* Ghidra symbol: FUN_00c104f0 */


void FUN_00c104f0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  iVar4 = iVar3 + -1;
  if (param_3 < iVar3 + -1) {
    iVar4 = param_3;
  }
  iVar3 = param_2;
  if (param_2 < iVar4) {
    iVar3 = iVar4;
  }
  FUN_00be1b50(*(undefined8 *)(param_1 + 0x4a8));
  FUN_00c105d0(param_1,*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4e8),param_2,
               iVar3);
  if (((*(ushort *)(param_1 + 0x638) & 4) == 0) &&
     (cVar2 = FUN_00be1b80(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4e8)),
     cVar2 != '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x538);
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00bdbcc0), cVar2 != '\0')) {
      (**(code **)(*plVar1 + 0x1b8))
                (plVar1,*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4e8));
    }
    FUN_00bf3760(param_1);
    *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 2;
  }
  return;
}

