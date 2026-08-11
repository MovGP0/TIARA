/* Ghidra address: 009e8a10 */
/* Ghidra symbol: FUN_009e8a10 */


void FUN_009e8a10(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_40 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_40 = (longlong *)FUN_0045adf0();
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_30);
  FUN_004168b0(&local_38,local_30);
  FUN_00459ca0(local_40,local_20,local_38);
  (**(code **)(*local_40 + 0x50))(local_40,&local_28);
  lVar1 = 0;
  if (local_28 != 0) {
    lVar1 = *(longlong *)(local_28 + -8);
  }
  if (0 < lVar1) {
    uVar2 = 0;
    if (local_28 != 0) {
      uVar2 = *(undefined8 *)(local_28 + -8);
    }
    FUN_004b8a80(param_2,local_28,uVar2);
  }
  uVar2 = 0;
  if (local_20[0] != 0) {
    uVar2 = *(undefined8 *)(local_20[0] + -8);
  }
  FUN_004b8a80(param_2,local_20[0],uVar2);
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_00417840(&local_28,&DAT_00406578,2);
  return;
}

