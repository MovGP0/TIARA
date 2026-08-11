/* Ghidra address: 00bad5c0 */
/* Ghidra symbol: FUN_00bad5c0 */


bool FUN_00bad5c0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined2 local_2a;
  
  FUN_004169f0(param_2,param_3);
  for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1,&local_2a);
    if (cVar1 == '\0') break;
    lVar2 = FUN_00414de0(param_2);
    *(undefined2 *)(lVar2 + -2 + (longlong)(iVar3 + 1) * 2) = local_2a;
  }
  return iVar3 == param_3;
}

