/* Ghidra address: 00c6bbe0 */
/* Ghidra symbol: FUN_00c6bbe0 */


void FUN_00c6bbe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(param_1 + 0x360,param_2);
  uVar1 = FUN_0060d360(*(undefined8 *)(param_1 + 0x350));
  thunk_FUN_041dba40(uVar1);
  uVar1 = FUN_0060d360(*(undefined8 *)(param_1 + 0x358));
  thunk_FUN_041dba40(uVar1);
  FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x360));
  if (local_20[0] == 0) {
    FUN_00414b50(local_20,L"shell32.dll");
  }
  uVar1 = FUN_00416740(local_20[0]);
  uVar2 = thunk_FUN_0418004c(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),uVar1,0);
  FUN_0060d3b0(*(undefined8 *)(param_1 + 0x350),uVar2);
  uVar1 = thunk_FUN_0418004c(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),uVar1,0);
  FUN_0060d3b0(*(undefined8 *)(param_1 + 0x358),uVar1);
  FUN_00414480(local_20);
  return;
}

