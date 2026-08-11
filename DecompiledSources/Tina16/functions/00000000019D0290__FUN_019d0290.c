/* Ghidra address: 019d0290 */
/* Ghidra symbol: FUN_019d0290 */


void FUN_019d0290(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_30 [2];
  
  local_30[0] = *param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_005fc8c0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70));
  thunk_FUN_03d2c01a(uVar1,0x5c,local_8c);
  local_84 = 900;
  local_80 = 900;
  uVar1 = thunk_FUN_041a15ee(local_8c);
  uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x30));
  uVar2 = thunk_FUN_041a19a1(uVar2,uVar1);
  FUN_019cffb0(param_1,local_30,&local_94);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x120))
            (*(longlong **)(param_1 + 0x30),local_94,local_90,local_res18[0]);
  uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x30));
  thunk_FUN_041a19a1(uVar3,uVar2);
  thunk_FUN_0416f828(uVar1);
  FUN_00414480(local_res18);
  return;
}

