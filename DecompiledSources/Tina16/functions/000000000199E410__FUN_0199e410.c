/* Ghidra address: 0199e410 */
/* Ghidra symbol: FUN_0199e410 */


void FUN_0199e410(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
      lVar2 = FUN_00b94e60(param_1,iVar1);
    } while ((lVar2 == 0) || (bVar3 = FUN_0198a580(lVar2), 10 < bVar3));
    bVar3 = FUN_0198a580(lVar2);
    if (bVar3 < 10) break;
    FUN_010bc210(lVar2,param_2,&local_48,param_4);
  }
  return;
}

