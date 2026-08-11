/* Ghidra address: 01ce6660 */
/* Ghidra symbol: FUN_01ce6660 */


void FUN_01ce6660(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    FUN_01d311c0(param_2,param_1 + 0x58,1);
    FUN_01d311c0(param_2,param_1 + 0x59,1);
    FUN_01d311c0(param_2,param_1 + 0x68,1);
    FUN_01d311c0(param_2,param_1 + 0x94,4);
    FUN_01d311c0(param_2,param_1 + 0x98,4);
    FUN_01d31630(param_2,*(undefined8 *)(param_1 + 0x60));
  }
  return;
}

