/* Ghidra address: 0086ce50 */
/* Ghidra symbol: FUN_0086ce50 */


void FUN_0086ce50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_40 = 0;
  local_20[0] = 0;
  (**(code **)*param_2)(param_2,local_20);
  lVar1 = FUN_0086cd80(param_1,local_20[0]);
  if (lVar1 != 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020043a8);
    (**(code **)*param_2)(param_2,&local_40);
    local_38 = local_40;
    local_30 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,local_28,&local_38,0);
    FUN_004134c0(uVar2);
  }
  iVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  FUN_00419260(param_1 + 8,&DAT_0086c6e0,1,(longlong)(iVar3 + 1));
  *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8) = param_2;
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  return;
}

