/* Ghidra address: 00ad04f0 */
/* Ghidra symbol: FUN_00ad04f0 */


undefined4 FUN_00ad04f0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_00a01990(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28));
  while( true ) {
    if ((short)uVar2 != 0) {
      return uVar2;
    }
    cVar1 = FUN_006115d0(*(undefined8 *)(param_1 + 0x38),1);
    if (cVar1 == '\0') break;
    FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x30) = lVar3;
    uVar2 = FUN_00a01990(*(undefined8 *)(lVar3 + 0x28));
  }
  return uVar2;
}

