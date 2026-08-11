/* Ghidra address: 01cf0f00 */
/* Ghidra symbol: FUN_01cf0f00 */


void FUN_01cf0f00(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    iVar2 = -1;
    while( true ) {
      cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,iVar2,&local_40);
      if (cVar1 == '\0') break;
      (**(code **)(*param_2 + 0xb0))(param_2,local_40,local_3c,param_3);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

