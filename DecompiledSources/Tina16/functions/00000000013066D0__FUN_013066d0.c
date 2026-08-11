/* Ghidra address: 013066d0 */
/* Ghidra symbol: FUN_013066d0 */


void FUN_013066d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_007fc180(&PTR_FUN_012ea7a8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_020045a0 = uVar1;
  (**(code **)(**(longlong **)PTR_DAT_020045a0 + 0x2d0))(*(longlong **)PTR_DAT_020045a0);
  return;
}

