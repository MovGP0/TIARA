/* Ghidra address: 01a40ae0 */
/* Ghidra symbol: FUN_01a40ae0 */


void FUN_01a40ae0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004afa90(&DAT_00473870,1);
  *(undefined8 *)(param_1 + 0x2b80) = uVar1;
  uVar1 = FUN_004afa90(&DAT_00473870,1);
  *(undefined8 *)(param_1 + 0x2b88) = uVar1;
  uVar1 = FUN_00618bb0(&PTR_FUN_006179c0,1);
  *(undefined8 *)(param_1 + 0x2b90) = uVar1;
  uVar1 = FUN_019ced20(&PTR_FUN_019ce968,1,param_1 + 0x2990,*(undefined8 *)(param_1 + 0x2b80),
                       *(undefined8 *)(param_1 + 0x2b88),*(undefined8 *)(param_1 + 0x6b8),
                       *(undefined4 *)(param_1 + 0x920),param_1);
  *(undefined8 *)(param_1 + 0x2b98) = uVar1;
  FUN_004d1e30(uVar1);
  return;
}

