/* Ghidra address: 016d26b0 */
/* Ghidra symbol: FUN_016d26b0 */


void FUN_016d26b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined4 local_2d;
  undefined1 uStack_29;
  
  FUN_004b84c0(param_2,param_1,0xc);
  local_2d = 0x20202004;
  uStack_29 = 0x20;
  FUN_016d2570(auStack_58,0xc,&DAT_016d2768);
  iVar1 = local_34;
  if (0x10 < local_34) {
    iVar1 = 0x10;
  }
  FUN_004b84c0(param_2,param_1 + 0x14,(longlong)iVar1);
  if (local_34 != iVar1) {
    (**(code **)(*param_2 + 0x48))(param_2,local_34 - iVar1,1);
  }
  FUN_016d2570(auStack_58,0x24,&DAT_016d277c);
  return;
}

