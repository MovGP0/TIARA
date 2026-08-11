/* Ghidra address: 0068da30 */
/* Ghidra symbol: FUN_0068da30 */


void FUN_0068da30(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0x4cc);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xb0) >> 8),1) <<
             (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar3 = FUN_0068e220(*(undefined8 *)(param_1 + 0xb0),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x4a8));
  }
  else {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xb0));
    uVar3 = FUN_00470120(uVar4,399,0xffffffffffffffff,
                         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x4a8));
  }
  if (uVar3 != 0xffffffff) {
    if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x490) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x280))(*(longlong **)(param_1 + 0xb0));
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xb0));
      thunk_FUN_041b2403(uVar4,0x19b,1,uVar3 & 0xffff | (uVar3 & 0xffff) << 0x10);
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x268))(*(longlong **)(param_1 + 0xb0),uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    pcVar5 = (code *)FUN_00411550(uVar4,0xffea);
    (*pcVar5)(uVar4);
  }
  uVar2 = **(short **)(param_1 + 0xb8) - 8;
  if (uVar2 < 0x20) {
    bVar6 = (1 << ((byte)uVar2 & 0x1f) & 0x80021U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (!bVar6) {
    **(undefined2 **)(param_1 + 0xb8) = 0;
  }
  return;
}

