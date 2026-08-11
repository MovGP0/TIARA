/* Ghidra address: 008425e0 */
/* Ghidra symbol: FUN_008425e0 */


void FUN_008425e0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((int)*(uint *)(param_3 + 0x10) <= (int)*(uint *)(param_2 + 0x10)) {
    uVar1 = *(uint *)(param_3 + 0x10);
  }
  FUN_0083f3f0(*(undefined8 *)(param_1 + 0xc0),local_28,uVar1 & ~param_4,uVar1 & param_4);
  local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x9c);
  local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x98);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
  thunk_FUN_03a2fc9d(uVar2,local_28,0);
  return;
}

