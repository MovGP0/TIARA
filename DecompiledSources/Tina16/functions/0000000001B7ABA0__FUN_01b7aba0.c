/* Ghidra address: 01b7aba0 */
/* Ghidra symbol: FUN_01b7aba0 */


char FUN_01b7aba0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char local_19;
  undefined8 local_10;
  
  local_10 = 0;
  *param_2 = 0;
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x728) + 0x4f0);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if ((iVar2 <= *param_2) || (local_19 != '\0')) break;
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x728) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    FUN_0043dec0(&local_10,uVar3);
    iVar2 = FUN_00416db0(local_10,*(undefined8 *)(param_1 + 0x178));
    local_19 = iVar2 == 0;
    if (!(bool)local_19) {
      *param_2 = *param_2 + 1;
    }
  }
  FUN_00414480(&local_10);
  return local_19;
}

