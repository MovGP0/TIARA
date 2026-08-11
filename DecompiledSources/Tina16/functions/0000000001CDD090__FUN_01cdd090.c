/* Ghidra address: 01cdd090 */
/* Ghidra symbol: FUN_01cdd090 */


void FUN_01cdd090(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x40);
    }
    FUN_01d311c0(param_2,&local_1c,4);
  }
  return;
}

