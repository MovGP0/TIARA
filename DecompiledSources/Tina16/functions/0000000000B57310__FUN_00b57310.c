/* Ghidra address: 00b57310 */
/* Ghidra symbol: FUN_00b57310 */


undefined8 FUN_00b57310(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  uVar1 = FUN_00b54140(&DAT_00b48580,1,*(undefined8 *)(param_1 + 8),local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
  FUN_004144d0(local_res10);
  return uVar1;
}

