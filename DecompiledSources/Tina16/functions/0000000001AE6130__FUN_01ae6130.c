/* Ghidra address: 01ae6130 */
/* Ghidra symbol: FUN_01ae6130 */


void FUN_01ae6130(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0x68));
    local_20 = FUN_01ae5d90(param_1);
    FUN_01d311c0(param_2,&local_20,8);
    local_20 = FUN_01ae5da0(param_1);
    FUN_01d311c0(param_2,&local_20,8);
    local_20 = FUN_01ae5dc0(param_1);
    FUN_01d311c0(param_2,&local_20,8);
    local_20 = FUN_01ae5dd0(param_1);
    FUN_01d311c0(param_2,&local_20,8);
    FUN_01d311c0(param_2,param_1 + 0x108,1);
    FUN_01d311c0(param_2,param_1 + 0x10d,1);
    FUN_01d311c0(param_2,param_1 + 0x10b,1);
    FUN_01d311c0(param_2,param_1 + 0x10c,1);
  }
  return;
}

