/* Ghidra address: 01a26860 */
/* Ghidra symbol: FUN_01a26860 */


void FUN_01a26860(undefined8 param_1,longlong param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0x1f);
  *puVar1 = 0x66;
  puVar1[1] = 0x105;
  puVar1[2] = 0x13;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(ulonglong *)((longlong)puVar1 + 0xd) =
       CONCAT26(param_6,CONCAT24(param_5,CONCAT22(param_4,param_3)));
  FUN_01a24b20((longlong)puVar1 + 0xd);
  *(undefined4 *)((longlong)puVar1 + 0x15) = 0x8000;
  *(undefined4 *)((longlong)puVar1 + 0x19) = 0xfffffffe;
  *(undefined2 *)((longlong)puVar1 + 0x1d) = 1;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar1);
  return;
}

