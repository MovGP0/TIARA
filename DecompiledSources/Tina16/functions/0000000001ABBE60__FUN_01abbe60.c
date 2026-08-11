/* Ghidra address: 01abbe60 */
/* Ghidra symbol: FUN_01abbe60 */


void FUN_01abbe60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_1d;
  int local_1c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_1c = -1;
    }
    else {
      local_1c = *(int *)(*(longlong *)(param_1 + 0x60) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_1c = -1;
    }
    else {
      local_1c = *(int *)(*(longlong *)(param_1 + 0x70) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    local_1c = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
    FUN_01d311c0(param_2,&local_1c,4);
    local_1c = (int)*(short *)(*(longlong *)(param_1 + 0x88) + 0x18);
    FUN_01d311c0(param_2,&local_1c,4);
    local_1c = (int)*(short *)(*(longlong *)(param_1 + 0x98) + 0x30);
    FUN_01d311c0(param_2,&local_1c,4);
    local_1d = FUN_01abd060(*(undefined8 *)(param_1 + 0x80));
    FUN_01d311c0(param_2,&local_1d,1);
    local_1c = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x40);
    FUN_01d311c0(param_2,&local_1c,4);
    local_1c = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x40);
    FUN_01d311c0(param_2,&local_1c,4);
  }
  return;
}

