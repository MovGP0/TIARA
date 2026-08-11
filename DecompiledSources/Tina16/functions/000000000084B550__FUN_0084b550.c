/* Ghidra address: 0084b550 */
/* Ghidra symbol: FUN_0084b550 */


undefined8 FUN_0084b550(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 == *(uint *)(param_1 + 0x20)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x16) & 0x1f;
    uVar4 = param_2 >> bVar1;
    if (uVar4 < *(uint *)(param_1 + 0x10)) {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 8) + (ulonglong)uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)
                 ((longlong)puVar2 + (longlong)(int)((param_2 & *(ushort *)(param_1 + 0x14)) * 8));
      }
    }
    else {
      puVar2 = (undefined8 *)(ulonglong)(0 >> bVar1);
    }
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
    }
    *(uint *)(param_1 + 0x20) = param_2;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  return uVar3;
}

