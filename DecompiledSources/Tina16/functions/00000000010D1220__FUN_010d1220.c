/* Ghidra address: 010d1220 */
/* Ghidra symbol: FUN_010d1220 */


int FUN_010d1220(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong local_20;
  
  local_20 = 0;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  do {
    iVar1 = iVar2;
    iVar2 = iVar1 + -1;
    (**(code **)(*param_1 + 0x18))(param_1,&local_20,iVar2);
    if (local_20 != 0) break;
  } while (iVar2 != 0);
  FUN_00414480(&local_20);
  return iVar1;
}

