/* Ghidra address: 01c806b0 */
/* Ghidra symbol: FUN_01c806b0 */


void FUN_01c806b0(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar1 = FUN_007fc180(&PTR_FUN_016fb878,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002318 = uVar1;
  (**(code **)(**(longlong **)PTR_DAT_02002318 + 0x2d0))(*(longlong **)PTR_DAT_02002318);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002318);
  return;
}

