/* Ghidra address: 01813d10 */
/* Ghidra symbol: FUN_01813d10 */


void FUN_01813d10(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  
  local_40 = auStack_68;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  local_30 = 0;
  local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res18 = param_3;
  if (param_3 == 0) {
    local_30 = FUN_01804390(&DAT_01802268,1);
    local_res18 = *(longlong *)(local_30 + 0x28);
    FUN_01804870(local_30,*(undefined8 *)(param_1 + 0x38),0);
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(local_30 + 0x38);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x20))
            (*(undefined8 **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  FUN_004bdfc0(*(undefined8 *)(param_1 + 0x20));
  FUN_01813870(auStack_68,local_res18,0);
  FUN_01811220(param_1);
  FUN_01813c90(auStack_68);
  if (local_30 != 0) {
    FUN_00410f20(local_30);
  }
  FUN_00410f20(local_28);
  return;
}

