/* Ghidra address: 010eea60 */
/* Ghidra symbol: FUN_010eea60 */


void FUN_010eea60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x48,8);
    FUN_01d311c0(param_2,param_1 + 0x50,8);
    FUN_01d311c0(param_2,param_1 + 0x58,8);
    FUN_01d311c0(param_2,param_1 + 0x60,8);
    FUN_01d311c0(param_2,param_1 + 0x68,8);
    FUN_01d311c0(param_2,param_1 + 0x70,8);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    FUN_01d31ea0(param_2,*(undefined8 *)(param_1 + 0x88));
  }
  return;
}

