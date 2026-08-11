/* Ghidra address: 00c6bd30 */
/* Ghidra symbol: FUN_00c6bd30 */


void FUN_00c6bd30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x368) = param_2;
  uVar1 = FUN_0060d360(*(undefined8 *)(param_1 + 0x350));
  thunk_FUN_041dba40(uVar1);
  uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x360));
  uVar1 = thunk_FUN_0418004c(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),uVar1,
                             *(undefined4 *)(param_1 + 0x368));
  FUN_0060d3b0(*(undefined8 *)(param_1 + 0x350),uVar1);
  return;
}

