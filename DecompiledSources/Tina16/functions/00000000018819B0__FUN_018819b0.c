/* Ghidra address: 018819b0 */
/* Ghidra symbol: FUN_018819b0 */


void FUN_018819b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_004b2060(param_1);
    if (iVar3 <= iVar4) break;
    lVar1 = FUN_01881930(param_1,iVar4);
    if (*(longlong *)(lVar1 + 0x18) == param_2) {
      uVar2 = FUN_01881930(param_1,iVar4);
      FUN_00410f20(uVar2);
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

