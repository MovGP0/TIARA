/* Ghidra address: 0083f240 */
/* Ghidra symbol: FUN_0083f240 */


void FUN_0083f240(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,2);
  if (cVar1 != '\0') {
    local_28 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db070(&local_48,local_28);
    cVar1 = (**(code **)(*local_48 + 0x88))(local_48);
    if (cVar1 != '\0') {
      local_30 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db070(&local_50,local_30);
      (**(code **)(*local_50 + 0x40))(local_50);
    }
  }
  FUN_00658ed0(param_1);
  if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x2000) == 0) {
    FUN_0083f790(param_1);
  }
  FUN_00417840(&local_58,&DAT_00484e18,3);
  return;
}

