/* Ghidra address: 0194fa10 */
/* Ghidra symbol: FUN_0194fa10 */


void FUN_0194fa10(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = auStack_68;
  puVar1 = auStack_68;
  if (*(char *)((longlong)param_1 + 0xd2) == '\0') {
    (**(code **)(*param_1 + 0x1b8))(param_1);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_38 = (**(code **)(*param_1 + 0x118))(param_1);
  local_30 = FUN_01810fa0(&DAT_018103d8,1,param_2);
  *(undefined1 *)(local_30 + 0x78) = 1;
  if (local_38 != 0) {
    *(longlong *)(local_38 + 0x2a8) = local_30;
    *(undefined8 *)(local_30 + 0x58) = *(undefined8 *)(local_38 + 0x4b8);
    *(undefined8 *)(local_30 + 0x60) = *(undefined8 *)(local_38 + 0x4c0);
  }
  *(longlong *)(local_30 + 0x18) = local_38;
  if ((local_38 == 0) || (*(char *)(*(longlong *)(local_38 + 0x1a8) + 0x20) == '\0')) {
    FUN_01813d10(local_30,param_1,0);
  }
  else {
    FUN_01813d10(local_30,param_1,0);
  }
  if (local_38 != 0) {
    (**(code **)(**(longlong **)(local_38 + 0x1b0) + 0x88))
              (*(longlong **)(local_38 + 0x1b0),*(undefined8 *)(local_30 + 8));
  }
  FUN_00410f20(local_30);
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x2a8) = 0;
  }
  return;
}

