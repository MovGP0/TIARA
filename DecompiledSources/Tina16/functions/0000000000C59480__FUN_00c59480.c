/* Ghidra address: 00c59480 */
/* Ghidra symbol: FUN_00c59480 */


void FUN_00c59480(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x490);
  if ((plVar2 != (longlong *)0x0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    if (*param_2 < 0xf) {
      *param_2 = 0xf;
    }
    (**(code **)(*plVar2 + 400))(plVar2,0,0,*param_2,*param_3 / 2);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x490) + 0x9c);
    (**(code **)(**(longlong **)(param_1 + 0x498) + 400))
              (*(longlong **)(param_1 + 0x498),0,iVar1 + -1,*param_2,(*param_3 - iVar1) + 1);
  }
  return;
}

