/* Ghidra address: 01ac4510 */
/* Ghidra symbol: FUN_01ac4510 */


void FUN_01ac4510(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    FUN_01d311c0(param_2,param_1 + 0x90,1);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    FUN_01d311c0(param_2,param_1 + 0x60,4);
    FUN_01d311c0(param_2,param_1 + 100,4);
    FUN_01d311c0(param_2,param_1 + 0x68,4);
    FUN_01d311c0(param_2,param_1 + 0x70,8);
    FUN_01d311c0(param_2,param_1 + 0x78,8);
    FUN_01d311c0(param_2,param_1 + 0x80,8);
    FUN_01d31ea0(param_2,*(undefined8 *)(param_1 + 0x88));
    FUN_01d311c0(param_2,param_1 + 0x91,1);
  }
  return;
}

