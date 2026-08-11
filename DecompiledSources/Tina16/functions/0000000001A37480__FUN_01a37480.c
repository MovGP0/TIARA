/* Ghidra address: 01a37480 */
/* Ghidra symbol: FUN_01a37480 */


void FUN_01a37480(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00bac3d0(local_20);
  FUN_0041b840(param_1 + 0xd8,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x118))(*(longlong **)(param_1 + 0xd8),0);
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x148))
            (*(longlong **)(param_1 + 0xd8),&local_28,L"dctable");
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x108))(*(longlong **)(param_1 + 0xd8),local_28);
  FUN_01320bb0(0,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10),0,1,4,0,
               *(undefined8 *)(param_1 + 0xd8),0,0x1c7,0,0,
               *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18),
               *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x68),0,0,8);
  FUN_01a36f50(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0xd8));
  cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0xd0),1);
  if (cVar1 != '\0') {
    uVar2 = FUN_01a38350(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x90) = uVar2;
    if (param_2 == '\0') {
      FUN_00f33710(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x88),uVar2);
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x98) = uVar2;
    }
  }
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return;
}

