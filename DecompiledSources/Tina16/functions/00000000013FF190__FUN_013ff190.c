/* Ghidra address: 013ff190 */
/* Ghidra symbol: FUN_013ff190 */


void FUN_013ff190(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_004095c0(0x28);
  *puVar1 = 0x65;
  puVar1[1] = 0x105;
  puVar1[2] = 0x1c;
  *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x1b) = 100;
  *(undefined4 *)((longlong)puVar1 + 0x1d) = 0xfffffffe;
  *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x22) = 100;
  puVar1[9] = 0xfffffffe;
  uVar2 = FUN_00b95b20(param_3,param_4,param_5,param_6);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  puVar1[5] = 0x80;
  *(undefined2 *)(puVar1 + 6) = 1;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar1);
  return;
}

