/* Ghidra address: 00687090 */
/* Ghidra symbol: FUN_00687090 */


void FUN_00687090(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_0064c470(param_1);
  if (((cVar1 == '\x01') && (*(char *)((longlong)param_1 + 0x54a) == '\x02')) &&
     (iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0x15),
     (int)*(short *)(param_2 + 0x10) < (int)param_1[0x13] - iVar2)) {
    (**(code **)(*param_1 + 600))(param_1);
    FUN_0064e9e0(param_1,0,0xffffffff);
    return;
  }
  FUN_00650a80(param_1,param_2);
  cVar1 = FUN_0064e170(param_1);
  if (((cVar1 != '\0') && (lVar3 = FUN_007f9b70(param_1,1), lVar3 != 0)) &&
     (*(longlong **)(lVar3 + 0x4c0) != param_1)) {
    FUN_0064e190(param_1,0);
  }
  return;
}

