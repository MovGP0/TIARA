/* Ghidra address: 00a1bea0 */
/* Ghidra symbol: FUN_00a1bea0 */


undefined8 FUN_00a1bea0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)param_1[5];
  lVar3 = FUN_00a09b50(puVar1[6],1,0x1000,puVar1[5]);
  if (lVar3 != 0x1000) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x25;
    (*(code *)*puVar2)(param_1);
  }
  *puVar1 = puVar1[6];
  puVar1[1] = 0x1000;
  return 1;
}

