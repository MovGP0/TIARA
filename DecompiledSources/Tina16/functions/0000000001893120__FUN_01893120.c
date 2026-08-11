/* Ghidra address: 01893120 */
/* Ghidra symbol: FUN_01893120 */


void FUN_01893120(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x4bc) != param_2) {
    uVar1 = FUN_0065b870(param_1);
    iVar2 = -(uint)(param_2 == '\0');
    thunk_FUN_0412f07e(uVar1,3,iVar2);
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0412f07e(uVar1,0,iVar2);
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0412f07e(uVar1,1,iVar2);
    *(char *)(param_1 + 0x4bc) = param_2;
  }
  return;
}

