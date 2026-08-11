/* Ghidra address: 008082e0 */
/* Ghidra symbol: FUN_008082e0 */


void FUN_008082e0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x150);
  while (puVar3 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 1);
    if ((((-0x12 < iVar1) && (iVar1 < -0xb)) || (iVar1 == -0x15)) || (0 < iVar1)) {
      thunk_FUN_0416e0df(puVar3[2]);
    }
    puVar2 = (undefined8 *)*puVar3;
    FUN_004095f0(puVar3);
    puVar3 = puVar2;
  }
  lVar4 = thunk_FUN_03978312(0,0x7f00);
  if (lVar4 != *(longlong *)(param_1 + 0x158)) {
    thunk_FUN_0416e0df();
  }
  return;
}

