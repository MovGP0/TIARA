/* Ghidra address: 010b8ae0 */
/* Ghidra symbol: FUN_010b8ae0 */


void FUN_010b8ae0(longlong *param_1,longlong *param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
    }
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_38);
    FUN_01a9a440(param_2,0xf);
    (**(code **)(*param_2 + 0xa0))(param_2,local_38,local_34,local_30,local_2c);
  }
  return;
}

