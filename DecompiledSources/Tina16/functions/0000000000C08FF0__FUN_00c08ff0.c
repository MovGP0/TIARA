/* Ghidra address: 00c08ff0 */
/* Ghidra symbol: FUN_00c08ff0 */


void FUN_00c08ff0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00bcbe50(param_2,1,0x100);
  if (iVar2 != (int)param_1[0xc3]) {
    *(int *)(param_1 + 0xc3) = iVar2;
    FUN_00bd0790(param_1[0x9d],iVar2);
    (**(code **)(*param_1 + 0x180))(param_1);
    cVar1 = FUN_00c10e70(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[0xbf] + 0x58))((longlong *)param_1[0xbf]);
      FUN_00bf3760(param_1);
    }
  }
  return;
}

