/* Ghidra address: 01c06cf0 */
/* Ghidra symbol: FUN_01c06cf0 */


void FUN_01c06cf0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),0);
  uVar3 = FUN_01c07120(param_1);
  lVar4 = FUN_01c03e40(uVar3);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),*(undefined4 *)(lVar4 + 0xbc))
  ;
  lVar4 = FUN_01c07120(param_1);
  if (*(byte *)(lVar4 + 0x4c3) < 2) {
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    thunk_FUN_04161b78(uVar3,0,0,6,2,0x5a0049);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    iVar2 = FUN_0064d120(param_1);
    thunk_FUN_04161b78(uVar3,2,2,2,iVar2 + -4,0x5a0049);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    iVar2 = FUN_0064d120(param_1);
    uVar1 = FUN_0064d120(param_1);
    thunk_FUN_04161b78(uVar3,0,iVar2 + -2,6,uVar1,0x5a0049);
  }
  else if ((byte)(*(byte *)(lVar4 + 0x4c3) - 2) < 2) {
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    thunk_FUN_04161b78(uVar3,0,0,2,6,0x5a0049);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    iVar2 = FUN_0064d0b0(param_1);
    thunk_FUN_04161b78(uVar3,2,2,iVar2 + -6,2,0x5a0049);
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
    iVar2 = FUN_0064d0b0(param_1);
    thunk_FUN_04161b78(uVar3,iVar2 + -4,0,2,6,0x5a0049);
  }
  return;
}

