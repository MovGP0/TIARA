/* Ghidra address: 019a23a0 */
/* Ghidra symbol: FUN_019a23a0 */


void FUN_019a23a0(longlong param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_148 [264];
  undefined4 local_40;
  undefined4 uStack_3c;
  
  *(char *)(param_1 + 0x397) = param_7;
  puVar2 = (undefined4 *)FUN_004095c0(0x3a);
  *puVar2 = 100;
  puVar2[1] = 0x105;
  puVar2[2] = 0x2e;
  FUN_00416910(local_148,param_3,0xff);
  FUN_00415020(puVar2 + 3,local_148,0x10);
  *(undefined1 *)((longlong)puVar2 + 0x1d) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x1e) = 4;
  if (param_7 == '\0') {
    *(undefined1 *)((longlong)puVar2 + 0x1f) = 0x20;
  }
  else {
    *(undefined1 *)((longlong)puVar2 + 0x1f) = 0x24;
  }
  *(undefined1 *)(puVar2 + 8) = param_6;
  *(undefined2 *)((longlong)puVar2 + 0x21) = param_4;
  *(undefined2 *)((longlong)puVar2 + 0x23) = param_5;
  *(undefined1 *)((longlong)puVar2 + 0x25) = 0;
  local_40 = 0;
  uStack_3c = 0;
  *(undefined8 *)((longlong)puVar2 + 0x26) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2e) = 0x4020000000000000;
  uVar1 = FUN_019a21a0(param_1,L"COL_PinName",0x80);
  *(undefined4 *)((longlong)puVar2 + 0x36) = uVar1;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x30),puVar2);
  return;
}

