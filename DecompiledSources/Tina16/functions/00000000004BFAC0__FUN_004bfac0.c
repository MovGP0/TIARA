/* Ghidra address: 004bfac0 */
/* Ghidra symbol: FUN_004bfac0 */


void FUN_004bfac0(longlong param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  pcVar3 = (code *)FUN_00411550(uVar2,0xfff7);
  (*pcVar3)(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x58));
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))
            (*(longlong **)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x150),param_1 + 0x148);
  if ((*(ushort *)(*(longlong *)(param_1 + 0x150) + 0x34) & 0x10) != 0) {
    lVar4 = FUN_004a4fd0(*(undefined8 *)(param_1 + 0x148));
    if (lVar4 == *(longlong *)(param_1 + 0x150)) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x150) + 0x34);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  return;
}

