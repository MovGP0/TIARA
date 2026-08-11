/* Ghidra address: 0064ee80 */
/* Ghidra symbol: FUN_0064ee80 */


void FUN_0064ee80(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  pcVar3 = (code *)FUN_00411550(param_1,0xffd4);
  cVar2 = (*pcVar3)(param_1,*(undefined1 *)(puVar1 + 3),*(undefined2 *)((longlong)puVar1 + 0xd),
                    *puVar1,puVar1[1],puVar1[2]);
  *(longlong *)(param_2 + 0x18) = (longlong)cVar2;
  return;
}

