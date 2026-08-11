/* Ghidra address: 00f2d360 */
/* Ghidra symbol: FUN_00f2d360 */


void FUN_00f2d360(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (param_3 < 0)) || (param_4 <= param_3)) {
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined8 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 8) = param_2 + param_3;
    *(longlong *)(param_1 + 0x18) = param_2 + -1 + (longlong)param_4;
  }
  uVar1 = FUN_00f356b0(&PTR_FUN_00f27a08,1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_00419260(param_1 + 0x40,&DAT_004065c0,1,0x10);
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(bool *)(param_1 + 0x50) = 1000000 < param_4 - param_3;
  return;
}

