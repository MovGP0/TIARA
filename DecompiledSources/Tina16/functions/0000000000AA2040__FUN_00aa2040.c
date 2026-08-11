/* Ghidra address: 00aa2040 */
/* Ghidra symbol: FUN_00aa2040 */


void FUN_00aa2040(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  
  (**(code **)(**(longlong **)(param_1 + 0x568) + 0xb8))
            (*(longlong **)(param_1 + 0x568),param_2,&local_38,&local_34,param_5,param_6);
  (**(code **)(**(longlong **)(param_1 + 0x570) + 0xb8))
            (*(longlong **)(param_1 + 0x570),param_2,&local_30,local_2c,param_5,param_6);
  iVar1 = local_30;
  if (local_30 < local_38) {
    iVar1 = local_38;
  }
  *param_3 = iVar1;
  if (local_30 < local_34) {
    local_30 = local_34;
  }
  *param_4 = local_30;
  return;
}

