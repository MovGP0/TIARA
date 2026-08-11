/* Ghidra address: 01a26900 */
/* Ghidra symbol: FUN_01a26900 */


void FUN_01a26900(undefined8 param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  undefined1 local_148 [264];
  undefined4 local_40;
  undefined4 uStack_3c;
  
  puVar1 = (undefined4 *)FUN_004095c0(0x3a);
  *puVar1 = 100;
  puVar1[1] = 0x105;
  puVar1[2] = 0x2e;
  FUN_00416910(local_148,param_3,0xff);
  FUN_00415020(puVar1 + 3,local_148,0x10);
  *(undefined1 *)((longlong)puVar1 + 0x1d) = param_7;
  *(undefined1 *)((longlong)puVar1 + 0x1e) = 4;
  *(undefined1 *)((longlong)puVar1 + 0x1f) = 0;
  *(undefined1 *)(puVar1 + 8) = param_6;
  *(undefined2 *)((longlong)puVar1 + 0x21) = param_4;
  *(undefined2 *)((longlong)puVar1 + 0x23) = param_5;
  *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  local_40 = param_8;
  uStack_3c = param_9;
  *(ulonglong *)((longlong)puVar1 + 0x26) = CONCAT44(param_9,param_8);
  *(undefined8 *)((longlong)puVar1 + 0x2e) = 0x4020000000000000;
  *(undefined4 *)((longlong)puVar1 + 0x36) = 0x80;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x30),puVar1);
  return;
}

