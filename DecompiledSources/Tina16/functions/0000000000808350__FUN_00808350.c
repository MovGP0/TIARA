/* Ghidra address: 00808350 */
/* Ghidra symbol: FUN_00808350 */


void FUN_00808350(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  puVar3 = (undefined8 *)0x0;
  while ((puVar2 = puVar1, puVar2 != (undefined8 *)0x0 && (*(int *)(puVar2 + 1) != param_2))) {
    puVar3 = puVar2;
    puVar1 = (undefined8 *)*puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    thunk_FUN_0416e0df(puVar2[2]);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = *puVar2;
    }
    else {
      *puVar3 = *puVar2;
    }
    FUN_004095f0(puVar2);
  }
  return;
}

