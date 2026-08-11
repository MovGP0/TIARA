/* Ghidra address: 010b82e0 */
/* Ghidra symbol: FUN_010b82e0 */


void FUN_010b82e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  FUN_00b956d0(param_3,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],
               *(int *)((longlong)param_1 + 0xc) + iVar1,(int)param_1[2] + iVar2);
  return;
}

