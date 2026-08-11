/* Ghidra address: 00726a50 */
/* Ghidra symbol: FUN_00726a50 */


void FUN_00726a50(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(int *)(param_1 + 0xd4) != iVar1) || (*(int *)(param_1 + 0xd8) != param_2[1])) {
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)param_2;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      thunk_FUN_041cc6e2(*(longlong *)(param_1 + 0x108),0,iVar1,param_2[1],0,0,0x15);
    }
  }
  return;
}

