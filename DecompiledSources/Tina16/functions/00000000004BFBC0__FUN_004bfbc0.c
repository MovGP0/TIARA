/* Ghidra address: 004bfbc0 */
/* Ghidra symbol: FUN_004bfbc0 */


void FUN_004bfbc0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar1 = FUN_004c2fe0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x138));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                    (*(longlong **)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x148),uVar1);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  pcVar2 = (code *)FUN_00411550(uVar1,0xfff1);
  lVar3 = (*pcVar2)(uVar1);
  *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x58) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x58) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x30);
  }
  return;
}

