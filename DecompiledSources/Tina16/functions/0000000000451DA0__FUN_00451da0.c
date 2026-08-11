/* Ghidra address: 00451da0 */
/* Ghidra symbol: FUN_00451da0 */


void FUN_00451da0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_00451d70(param_1);
  iVar4 = FUN_00427ab0();
  for (puVar5 = *(undefined8 **)(param_1 + 8 + ((ulonglong)uVar3 & 0xff) * 8);
      (puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 1) != iVar4));
      puVar5 = (undefined8 *)*puVar5) {
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_00451e50(param_1);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00409570(0x18);
      *(int *)(puVar5 + 1) = iVar4;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0x7fffffff;
      *puVar5 = puVar5;
      LOCK();
      puVar1 = (undefined8 *)(param_1 + 8 + ((ulonglong)uVar3 & 0xff) * 8);
      uVar2 = *puVar1;
      *puVar1 = puVar5;
      UNLOCK();
      *puVar5 = uVar2;
    }
  }
  *param_2 = puVar5;
  return;
}

