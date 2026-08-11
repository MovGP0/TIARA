/* Ghidra address: 017c3000 */
/* Ghidra symbol: FUN_017c3000 */


void FUN_017c3000(undefined8 param_1,undefined8 param_2)

{
  short extraout_AX;
  short extraout_AX_00;
  short extraout_var;
  short extraout_var_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  
  FUN_00b92120(0x7ffd,0x7ffd);
  FUN_00b92120(0xffff8003,0xffff8003);
  iVar1 = FUN_017c2b70();
  iVar3 = 0;
  local_2c = extraout_AX;
  uStack_2a = extraout_var;
  local_30 = extraout_AX_00;
  uStack_2e = extraout_var_00;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_017c2c60(param_1,iVar3);
      local_34 = (short)uVar2;
      if (local_34 < local_2c) {
        local_2c = local_34;
      }
      uStack_32 = (short)((uint)uVar2 >> 0x10);
      if (uStack_32 < uStack_2a) {
        uStack_2a = uStack_32;
      }
      if (local_30 < local_34) {
        local_30 = local_34;
      }
      if (uStack_2e < uStack_32) {
        uStack_2e = uStack_32;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b956d0(param_2,(longlong)local_2c,(longlong)uStack_2a,(longlong)local_30,(int)uStack_2e);
  return;
}

