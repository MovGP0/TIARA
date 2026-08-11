/* Ghidra address: 006fa490 */
/* Ghidra symbol: FUN_006fa490 */


void FUN_006fa490(longlong *param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)((longlong)param_1 + 0x31c) != param_2) &&
     (*(int *)((longlong)param_1 + 0x31c) = param_2, param_1[0x68] != 0)) {
    (**(code **)(*param_1 + 0x1c0))(param_1);
    iVar1 = FUN_006fa830(param_1);
    FUN_0064fca0(param_1[0x68],0x42b,(longlong)iVar1,(longlong)param_2);
    if ((*(char *)(param_1[0x68] + 0x4e4) != '\0') || (*(char *)(param_1[0x68] + 0x4de) != '\0')) {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) &&
       (*(char *)((longlong)param_1 + 0x33a) == '\x05')) {
      FUN_006fd640(param_1[0x68]);
    }
  }
  return;
}

