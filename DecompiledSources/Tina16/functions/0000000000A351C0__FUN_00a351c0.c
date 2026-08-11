/* Ghidra address: 00a351c0 */
/* Ghidra symbol: FUN_00a351c0 */


void FUN_00a351c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x490) == '\x02') {
    *(undefined1 *)(param_1 + 0x490) = 4;
  }
  FUN_00a33eb0(param_1,0xd);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *(undefined8 *)(param_1 + 0x488);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x490);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)(param_1 + 0x494);
  uVar4 = FUN_00a32f80(*(undefined4 *)puVar1);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = uVar4;
  uVar4 = FUN_00a32f80(puVar2[1]);
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 4) = uVar4;
  *(undefined1 *)(lVar3 + 0xc) = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x158);
  FUN_00a34420(param_1,param_2);
  return;
}

