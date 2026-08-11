/* Ghidra address: 00f40430 */
/* Ghidra symbol: FUN_00f40430 */


void FUN_00f40430(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x4d0);
  if ((plVar2 != (longlong *)0x0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    if (*param_2 < 0xf) {
      *param_2 = 0xf;
    }
    (**(code **)(*plVar2 + 400))(plVar2,0,0,*param_2,*param_3 / 2);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x4d0) + 0x9c);
    (**(code **)(**(longlong **)(param_1 + 0x4d8) + 400))
              (*(longlong **)(param_1 + 0x4d8),0,iVar1 + -1,*param_2,(*param_3 - iVar1) + 1);
  }
  return;
}

