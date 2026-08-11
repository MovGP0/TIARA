/* Ghidra address: 00b132f0 */
/* Ghidra symbol: FUN_00b132f0 */


void FUN_00b132f0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  FUN_00414480(local_20);
  FUN_004b3700(param_1,local_20,param_3,0);
  FUN_00b12d30(param_1,local_20[0],1);
  FUN_00414480(local_20);
  (**(code **)(*param_1 + 0x130))(param_1);
  local_24 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_004b6450(param_1,param_2,param_3,param_4);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_00419260(param_1 + 0xf,&DAT_00b0f928,1,(longlong)iVar1);
  if (param_2 < local_24) {
    FUN_00409a70(param_1[0xf] + (longlong)param_2 * 8,param_1[0xf] + (longlong)(param_2 + 1) * 8,
                 (longlong)((local_24 - param_2) * 8));
  }
  *(undefined8 *)(param_1[0xf] + (longlong)param_2 * 8) = 0;
  (**(code **)(*param_1 + 0x128))(param_1);
  FUN_00414480(local_20);
  return;
}

