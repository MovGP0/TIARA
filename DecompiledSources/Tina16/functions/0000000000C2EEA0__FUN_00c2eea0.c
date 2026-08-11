/* Ghidra address: 00c2eea0 */
/* Ghidra symbol: FUN_00c2eea0 */


void FUN_00c2eea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = *param_2;
  uVar2 = *(undefined2 *)(param_2 + 1);
  uVar1 = *(undefined1 *)((longlong)param_2 + 10);
  puVar4 = (undefined8 *)FUN_004095c0(0x18);
  puVar4[1] = uVar3;
  *(undefined2 *)(puVar4 + 2) = uVar2;
  *(undefined1 *)((longlong)puVar4 + 0x12) = uVar1;
  *puVar4 = param_3;
  FUN_004ae7e0(param_1,puVar4);
  return;
}

