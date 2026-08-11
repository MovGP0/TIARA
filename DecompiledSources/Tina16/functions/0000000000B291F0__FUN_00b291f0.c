/* Ghidra address: 00b291f0 */
/* Ghidra symbol: FUN_00b291f0 */


void FUN_00b291f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_1a;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) < 2) {
    uVar1 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
    FUN_004134c0(uVar1);
  }
  lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 8),*(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1);
  lVar3 = FUN_00b28180(&DAT_00b25b98,1);
  FUN_004ae7e0(*(undefined8 *)(lVar2 + 0x18),lVar3);
  FUN_00414bf0(lVar3 + 0x28,param_2);
  FUN_00409a70(param_2 + 2,&local_1a,2);
  *(undefined2 *)(lVar3 + 0x10) = local_1a;
  if (*(char *)(param_2 + 7) == '\x01') {
    FUN_00415ad0(&local_28,param_2,9,(uint)*(byte *)(param_2 + 6) * 2);
    FUN_00b15310(&local_30,local_28);
    FUN_00414b90(lVar3 + 8,local_30);
  }
  else {
    FUN_00415ad0(&local_28,param_2,9,(uint)*(byte *)(param_2 + 6));
    FUN_00b15390(&local_38,local_28);
    FUN_00414b90(lVar3 + 8,local_38);
  }
  FUN_004145c0(&local_38,2);
  FUN_004144d0(&local_28);
  return;
}

