/* Ghidra address: 018ad610 */
/* Ghidra symbol: FUN_018ad610 */


void FUN_018ad610(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x4d0));
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  FUN_007e34c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x4d0) + 0x80),
               *(undefined8 *)(param_1 + 0x48));
  FUN_007e38a0(*(undefined8 *)(param_1 + 0x48),1);
  FUN_007e2c60(*(undefined8 *)(param_1 + 0x48),local_res10[0]);
  FUN_007e2fb0(*(undefined8 *)(param_1 + 0x48),param_3);
  *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = (longlong)param_3;
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(param_1 + 0x70);
  *(code **)(lVar1 + 0x110) = FUN_018a50c0;
  FUN_00414480(local_res10);
  return;
}

