/* Ghidra address: 00451e50 */
/* Ghidra symbol: FUN_00451e50 */


undefined8 * FUN_00451e50(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00451d70(param_1);
  puVar2 = *(undefined8 **)(param_1 + 8 + (uVar4 & 0xff) * 8);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    LOCK();
    iVar1 = *(int *)((longlong)puVar2 + 0xc);
    *(int *)((longlong)puVar2 + 0xc) = 0x7fffffff;
    UNLOCK();
    if (iVar1 != 0x7fffffff) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar3 = FUN_00427ab0();
  *(undefined4 *)(puVar2 + 1) = uVar3;
  return puVar2;
}

