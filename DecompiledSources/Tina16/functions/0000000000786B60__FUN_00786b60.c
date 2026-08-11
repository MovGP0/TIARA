/* Ghidra address: 00786b60 */
/* Ghidra symbol: FUN_00786b60 */


void FUN_00786b60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_20;
  
  thunk_FUN_03cc0d62(&local_20);
  lVar2 = thunk_FUN_04129e10(local_20);
  lVar3 = FUN_00786090(param_1);
  if (lVar2 != lVar3) {
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1,lVar2);
    if (cVar1 == '\0') {
      FUN_00786b10(param_1);
      *(undefined1 *)(param_1 + 7) = 0;
      (**(code **)(*param_1 + 0x78))(param_1);
    }
  }
  return;
}

