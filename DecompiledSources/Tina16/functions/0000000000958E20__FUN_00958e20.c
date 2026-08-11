/* Ghidra address: 00958e20 */
/* Ghidra symbol: FUN_00958e20 */


void FUN_00958e20(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar1 = (**(code **)(*(longlong *)param_1[4] + 0x2f0))((longlong *)param_1[4]);
  if (lVar1 == 0) {
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],7);
  }
  else {
    local_20 = (longlong *)FUN_009843b0(&PTR_FUN_009248b8,1,0);
    uVar2 = FUN_00958690(param_1);
    (**(code **)(*local_20 + 0x88))(local_20,uVar2);
    (**(code **)(*local_20 + 0xb0))(local_20,DAT_01e3293c);
    (**(code **)(*local_20 + 0xb8))(local_20,param_1[1]);
    uVar2 = (**(code **)(*(longlong *)param_1[4] + 0x2f0))((longlong *)param_1[4]);
    (**(code **)(*local_20 + 0xc0))(local_20,uVar2,param_2,1);
    FUN_00410f20(local_20);
  }
  return;
}

