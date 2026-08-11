/* Ghidra address: 0064c7e0 */
/* Ghidra symbol: FUN_0064c7e0 */


void FUN_0064c7e0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  code *pcVar2;
  int local_res20 [2];
  
  local_res20[0] = param_4;
  cVar1 = FUN_00650bc0(param_1,local_res20,&param_5);
  if ((cVar1 != '\0') &&
     ((((param_2 != (int)param_1[0x12] || (param_3 != *(int *)((longlong)param_1 + 0x94))) ||
       (local_res20[0] != (int)param_1[0x13])) || (param_5 != *(int *)((longlong)param_1 + 0x9c)))))
  {
    FUN_0064e4c0(param_1,*(undefined1 *)((longlong)param_1 + 0xa9),0);
    *(int *)(param_1 + 0x12) = param_2;
    *(int *)((longlong)param_1 + 0x94) = param_3;
    *(int *)(param_1 + 0x13) = local_res20[0];
    *(int *)((longlong)param_1 + 0x9c) = param_5;
    FUN_0064c920(param_1);
    FUN_00652660(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
    FUN_0064fca0(param_1,0x47,0,0);
    (**(code **)(*param_1 + 0x108))(param_1);
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      pcVar2 = (code *)FUN_00411550(param_1,0xffce);
      (*pcVar2)(param_1);
    }
  }
  return;
}

