/* Ghidra address: 0113a780 */
/* Ghidra symbol: FUN_0113a780 */


void FUN_0113a780(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [96];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar1 = *(longlong *)(param_1 + 0xa10);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x968) + 0xf0))(*(longlong **)(param_1 + 0x968));
  if (cVar2 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x918),0);
  }
  else {
    FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar1 + 0x120),*(undefined1 *)(lVar1 + 0x149));
    FUN_004169a0(&local_78,local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x918),local_78);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x970) + 0xf0))(*(longlong **)(param_1 + 0x970));
  if (cVar2 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x920),0);
  }
  else {
    FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar1 + 0x128),*(undefined1 *)(lVar1 + 0x149));
    FUN_004169a0(&local_80,local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x920),local_80);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x980) + 0xf0))(*(longlong **)(param_1 + 0x980));
  if (cVar2 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x930),0);
  }
  else {
    FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar1 + 0x130),*(undefined1 *)(lVar1 + 0x14a));
    FUN_004169a0(&local_88,local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x930),local_88);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x978) + 0xf0))(*(longlong **)(param_1 + 0x978));
  if (cVar2 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x928),0);
  }
  else {
    FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar1 + 0x118),9);
    FUN_004169a0(&local_90,local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x928),local_90);
  }
  FUN_00414560(&local_90,4);
  return;
}

