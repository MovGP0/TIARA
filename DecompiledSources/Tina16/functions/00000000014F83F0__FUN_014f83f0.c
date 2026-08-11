/* Ghidra address: 014f83f0 */
/* Ghidra symbol: FUN_014f83f0 */


void FUN_014f83f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x48);
  FUN_016e9e20(param_1,1);
  FUN_016ec240(param_1,1,param_2,param_3);
  FUN_016e9f40(param_1,FUN_014f7f20);
  uVar3 = FUN_016eb0a0(param_1,5);
  *puVar1 = uVar3;
  uVar3 = FUN_016eb0a0(param_1,6);
  puVar1[1] = uVar3;
  uVar3 = FUN_016eb0a0(param_1,1);
  puVar1[3] = uVar3;
  uVar2 = FUN_016eacf0(param_1,7,4);
  *(undefined1 *)(puVar1 + 5) = uVar2;
  uVar2 = FUN_016eacf0(param_1,8,4);
  *(undefined1 *)((longlong)puVar1 + 0x29) = uVar2;
  uVar3 = FUN_016eb0a0(param_1,2);
  puVar1[2] = uVar3;
  uVar2 = FUN_016eacf0(param_1,3,4);
  *(undefined1 *)((longlong)puVar1 + 0x2a) = uVar2;
  uVar2 = FUN_016eacf0(param_1,4,4);
  *(undefined1 *)((longlong)puVar1 + 0x2b) = uVar2;
  uVar3 = FUN_016eb0a0(param_1,9);
  puVar1[4] = uVar3;
  FUN_016ea050(param_1,puVar1,0x48);
  return;
}

