/* Ghidra address: 005ff6d0 */
/* Ghidra symbol: FUN_005ff6d0 */


void FUN_005ff6d0(undefined8 param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_40 = 0;
  if ((param_4 & 0x800000) != 0) {
    FUN_005894c0(&local_40,&DAT_005f3c20,0x17);
    local_38 = local_40;
    local_30 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00472870,1,PTR_PTR_020030d0,&local_38,0);
    FUN_004134c0(uVar3);
  }
  uVar1 = FUN_0060f550(param_4);
  uVar2 = FUN_0060f500(uVar1);
  uVar3 = FUN_005ffa40(param_1);
  uVar1 = 0;
  if (*param_3 != 0) {
    uVar1 = *(undefined4 *)(*param_3 + -4);
  }
  uVar4 = FUN_00416740(*param_3);
  thunk_FUN_041d6f3c(uVar3,uVar4,uVar1,param_2,uVar2,0);
  if ((param_4 & 0x200) != 0) {
    uVar3 = FUN_00416740(*param_3);
    uVar1 = FUN_00414d00(uVar3);
    FUN_004169f0(param_3,uVar1);
  }
  FUN_00414480(&local_40);
  return;
}

