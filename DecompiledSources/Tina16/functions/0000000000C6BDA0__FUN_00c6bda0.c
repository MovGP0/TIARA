/* Ghidra address: 00c6bda0 */
/* Ghidra symbol: FUN_00c6bda0 */


void FUN_00c6bda0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x36c) = param_2;
  uVar1 = FUN_0060d360(*(undefined8 *)(param_1 + 0x358));
  thunk_FUN_041dba40(uVar1);
  uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x360));
  uVar1 = thunk_FUN_0418004c(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),uVar1,
                             *(undefined4 *)(param_1 + 0x36c));
  FUN_0060d3b0(*(undefined8 *)(param_1 + 0x358),uVar1);
  return;
}

