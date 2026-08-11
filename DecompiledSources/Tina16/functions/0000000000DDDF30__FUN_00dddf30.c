/* Ghidra address: 00dddf30 */
/* Ghidra symbol: FUN_00dddf30 */


void FUN_00dddf30(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = 0;
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x30) != 0)) {
    local_48 = FUN_0041b800(local_20);
    uVar1 = thunk_FUN_041f778e(*(undefined8 *)(param_1 + 0x490),5,0,&DAT_00dde0e4);
    FUN_006245b0(uVar1);
    FUN_00415eb0(&local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x30));
    local_40 = FUN_0041b800(param_1 + 0x4b0);
    local_48 = local_28;
    uVar1 = (**(code **)(*local_20[0] + 0x38))(local_20[0],0,0,&LAB_00dde0f4);
    FUN_0041ddd0(&local_30,PTR_PTR_02001730);
    FUN_00ddde80(auStack_68,uVar1,local_30);
  }
  else {
    local_48 = FUN_0041b800(param_1 + 0x4b0);
    uVar1 = thunk_FUN_041d73d1(*(undefined8 *)(param_1 + 0x490),0,5,&LAB_00dde0f4);
    FUN_0041ddd0(&local_38,PTR_PTR_02004ce0);
    FUN_00ddde80(auStack_68,uVar1,local_38);
  }
  FUN_00414560(&local_38,2);
  FUN_00414520(&local_28);
  FUN_0041b800(local_20);
  return;
}

