/* Ghidra address: 013fed30 */
/* Ghidra symbol: FUN_013fed30 */


void FUN_013fed30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_138 [264];
  
  puVar2 = (undefined4 *)FUN_004095c0(0x3a);
  *puVar2 = 100;
  puVar2[1] = 0x105;
  puVar2[2] = 0x2e;
  FUN_00416910(local_138,param_3,0xff);
  FUN_00415020(puVar2 + 3,local_138,0x10);
  *(undefined1 *)((longlong)puVar2 + 0x1d) = param_7;
  *(undefined1 *)((longlong)puVar2 + 0x1e) = 4;
  *(undefined1 *)((longlong)puVar2 + 0x1f) = 0x20;
  *(undefined1 *)(puVar2 + 8) = param_6;
  *(undefined2 *)((longlong)puVar2 + 0x21) = param_4;
  *(undefined2 *)((longlong)puVar2 + 0x23) = param_5;
  *(undefined1 *)((longlong)puVar2 + 0x25) = 0;
  uVar3 = FUN_00498310(param_8,param_9);
  *(undefined8 *)((longlong)puVar2 + 0x26) = uVar3;
  *(undefined8 *)((longlong)puVar2 + 0x2e) = 0x4020000000000000;
  uVar1 = FUN_013feb30(param_1,L"COL_PinName",0x80);
  *(undefined4 *)((longlong)puVar2 + 0x36) = uVar1;
  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x30),puVar2);
  return;
}

