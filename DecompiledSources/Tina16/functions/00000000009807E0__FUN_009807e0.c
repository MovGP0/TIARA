/* Ghidra address: 009807e0 */
/* Ghidra symbol: FUN_009807e0 */


void FUN_009807e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  local_20 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0x90);
  *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0x90) = param_2;
  uVar2 = FUN_00950640(param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,&local_38);
  (**(code **)(*param_2 + 0x160))(param_2,&local_40);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xc0);
  (**(code **)(*plVar1 + 200))(plVar1,uVar2,local_38,local_40);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xc0) + 0x90) = local_20;
  FUN_004145c0(&local_40,2);
  return;
}

