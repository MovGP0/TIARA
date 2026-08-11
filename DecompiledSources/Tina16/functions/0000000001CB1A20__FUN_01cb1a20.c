/* Ghidra address: 01cb1a20 */
/* Ghidra symbol: FUN_01cb1a20 */


void FUN_01cb1a20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = (int)param_1[4];
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (cVar3 = FUN_0043e2c0(param_1[3] + 8 +
                           (longlong)(*(int *)((longlong)param_1 + 0xc) + -1) * 0x6c,param_3,iVar2),
     cVar3 != '\0')) {
    return;
  }
  if ((*(int *)((longlong)param_1 + 0xc) == (int)param_1[2]) && ((char)param_1[1] == '\0')) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  if ((char)param_1[1] == '\0') {
    puVar1 = (undefined8 *)(param_1[3] + (longlong)*(int *)((longlong)param_1 + 0xc) * 0x6c);
    *puVar1 = param_2;
    FUN_00409a70(param_3,puVar1 + 1,(longlong)iVar2);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  }
  else {
    FUN_0040d200(param_1[3] + 8 + (longlong)(*(int *)((longlong)param_1 + 0xc) + -1) * 0x6c,
                 (longlong)iVar2,4);
  }
  return;
}

