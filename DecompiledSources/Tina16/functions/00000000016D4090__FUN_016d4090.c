/* Ghidra address: 016d4090 */
/* Ghidra symbol: FUN_016d4090 */


undefined8 FUN_016d4090(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  while( true ) {
    lVar3 = (longlong)iVar2;
    uVar1 = thunk_FUN_0412a7bb(0x2042,0x30);
    *(undefined8 *)(param_1 + 0x4e0 + lVar3 * 8) = uVar1;
    if (*(longlong *)(param_1 + 0x4e0 + lVar3 * 8) == 0) {
      FUN_016d41f0(param_1);
      FUN_00414ad0(param_1 + 0x570,L"Error allocating wave header memory");
      return 0;
    }
    uVar1 = thunk_FUN_0416a623(*(undefined8 *)(param_1 + 0x4e0 + lVar3 * 8));
    *(undefined8 *)(param_1 + 0x528 + lVar3 * 8) = uVar1;
    if (*(longlong *)(param_1 + 0x528 + lVar3 * 8) == 0) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  FUN_016d41f0(param_1);
  FUN_00414ad0(param_1 + 0x570,L"Could not lock header memory for recording");
  return 0;
}

