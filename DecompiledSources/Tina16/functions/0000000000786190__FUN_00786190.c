/* Ghidra address: 00786190 */
/* Ghidra symbol: FUN_00786190 */


void FUN_00786190(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1[2]);
  if (cVar2 != '\0') {
    if (*(char *)((longlong)param_1 + 0x24) != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_03a2fc9d(uVar1,0,0);
  }
  return;
}

