/* Ghidra address: 00876570 */
/* Ghidra symbol: FUN_00876570 */


ulonglong FUN_00876570(undefined2 *param_1,longlong param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_40;
  longlong local_38;
  uint local_2c;
  
  local_2c = param_3;
  if (param_3 == 0) {
    local_2c = 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_1 != (undefined2 *)0x0) {
    uVar4 = *(uint *)(param_1 + -2);
  }
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  if (((uVar4 != 0) && (param_2 != 0)) && (uVar4 <= (iVar5 - local_2c) + 1)) {
    uVar1 = *param_1;
    iVar5 = (iVar5 - uVar4) + 1;
    local_40 = param_1;
    local_38 = param_2;
    if (uVar4 == 1) {
      local_58 = (undefined2 *)param_2;
      uVar3 = FUN_008764f0(auStack_78,local_2c,iVar5,uVar1);
    }
    else {
      while( true ) {
        local_58 = (undefined2 *)local_38;
        uVar3 = FUN_008764f0(auStack_78,local_2c,iVar5,uVar1);
        local_2c = (uint)uVar3;
        if (local_2c == 0) break;
        local_58 = local_40;
        iVar2 = FUN_00876520(auStack_78,uVar3 & 0xffffffff,local_2c + uVar4 + -1,local_38);
        if (iVar2 == 0) {
          return (ulonglong)local_2c;
        }
        local_2c = local_2c + 1;
      }
    }
  }
  return uVar3;
}

