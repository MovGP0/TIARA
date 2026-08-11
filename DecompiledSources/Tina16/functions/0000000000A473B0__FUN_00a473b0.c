/* Ghidra address: 00a473b0 */
/* Ghidra symbol: FUN_00a473b0 */


void FUN_00a473b0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_38 [16];
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (lVar1 != 0) {
    FUN_004238d0(local_38,param_3,param_4,param_3 + param_5,param_4 + param_6);
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 0x110))(param_2,local_38,uVar2);
  }
  return;
}

