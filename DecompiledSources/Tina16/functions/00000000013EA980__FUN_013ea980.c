/* Ghidra address: 013ea980 */
/* Ghidra symbol: FUN_013ea980 */


void FUN_013ea980(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  iVar4 = 0;
  while( true ) {
    uVar1 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar3);
    lVar2 = FUN_00654bc0(uVar1,iVar4);
    if (lVar2 == param_2) break;
    iVar4 = iVar4 + 1;
  }
  uVar5 = (*(ulonglong *)(param_2 + 0x18) & 0xf0) >> 4;
  iVar4 = 0;
  while( true ) {
    uVar1 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar3);
    lVar2 = FUN_00654bc0(uVar1,iVar4);
    if (*(ulonglong *)(lVar2 + 0x18) == uVar5) break;
    iVar4 = iVar4 + 1;
  }
  uVar1 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar3);
  uVar1 = FUN_00654bc0(uVar1,iVar4);
  if (*(ulonglong *)(param_2 + 0x18) == (ulonglong)((int)uVar5 * 0x10 + 1)) {
    uVar6 = FUN_00b90090(uVar1);
    uVar6 = FUN_00c44470(uVar6,0xc059000000000000);
    FUN_00b90440(uVar1,uVar6);
  }
  else {
    FUN_00b90090(uVar1);
    uVar6 = FUN_00c43d30();
    FUN_00b90440(uVar1,uVar6);
  }
  return;
}

