/* Ghidra address: 00af9050 */
/* Ghidra symbol: FUN_00af9050 */


bool FUN_00af9050(longlong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (**(char **)(param_1 + 0x78) == '\x01') {
    local_21 = 0 < param_2;
  }
  else {
    uVar2 = FUN_005fce00(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x50) + 0xb8)
                        );
    iVar3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    FUN_00467e90(local_20,*(longlong *)(param_1 + 0x78) + 8);
    iVar3 = FUN_00a61c40(local_20[0],0,param_3,iVar3,iVar3 / 2,0xffffffff);
    if ((iVar3 < 0) || (cVar1 = FUN_00af8f40(param_1,param_2,iVar3), cVar1 == '\0')) {
      local_21 = false;
    }
    else {
      local_21 = true;
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

