/* Ghidra address: 0064e030 */
/* Ghidra symbol: FUN_0064e030 */


void FUN_0064e030(longlong *param_1,int param_2)

{
  char cVar1;
  
  if ((int)param_1[0x19] != param_2) {
    *(int *)(param_1 + 0x19) = param_2;
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
    if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0)) {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_00640c18);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x230))(param_1,0);
      }
    }
    FUN_0064fca0(param_1,0xb00d,0,0);
  }
  return;
}

