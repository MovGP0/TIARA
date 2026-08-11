/* Ghidra address: 0103ef30 */
/* Ghidra symbol: FUN_0103ef30 */


uint FUN_0103ef30(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_0103c810(param_1,local_res18[0]);
  iVar2 = FUN_0103ef10(param_1,uVar1);
  FUN_0103ef20(param_1,iVar2);
  *(uint *)(param_1 + 0x44 + (longlong)iVar2 * 4) = param_4;
  FUN_00414480(local_res18);
  return param_4 & 0xff;
}

