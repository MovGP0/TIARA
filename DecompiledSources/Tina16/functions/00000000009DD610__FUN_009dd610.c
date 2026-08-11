/* Ghidra address: 009dd610 */
/* Ghidra symbol: FUN_009dd610 */


void FUN_009dd610(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  uVar2 = FUN_0041b800(&local_38);
  uVar1 = FUN_009db590(param_1,uVar2);
  FUN_0041d630(uVar1);
  local_48 = 0;
  local_40 = 1;
  local_10 = (longlong *)FUN_0094a3e0(&PTR_FUN_009067d0,1,*(undefined8 *)(param_1 + 0xc0),8);
  local_18 = 0;
  while( true ) {
    local_20 = (**(code **)(*local_10 + 0x28))(local_10);
    if (local_20 == 0) break;
    FUN_009dd570(auStack_68,local_18);
    local_18 = local_20;
  }
  FUN_009dd570(auStack_68,local_18);
  FUN_00410f20(local_10);
  FUN_0041b800(&local_38);
  return;
}

