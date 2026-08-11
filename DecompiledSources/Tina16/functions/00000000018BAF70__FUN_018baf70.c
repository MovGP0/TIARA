/* Ghidra address: 018baf70 */
/* Ghidra symbol: FUN_018baf70 */


void FUN_018baf70(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_88 [56];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_88;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_20 = (longlong *)0x0;
  puVar1 = auStack_88;
  if (*(longlong *)PTR_DAT_02004a20 != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    local_20 = (longlong *)
               (**(code **)(*(longlong *)PTR_DAT_02004a20 + -0x30))(*(longlong *)PTR_DAT_02004a20);
    (**(code **)(*local_20 + 0x78))(local_20,0xff,0);
    local_20[0x11] = *(longlong *)(param_1 + 0x20);
    FUN_0197baf0(local_20,0);
    FUN_0197bb10(local_20);
    cVar2 = (**(code **)(*local_20 + 0x88))(local_20,*(undefined8 *)(param_1 + 0x90));
    puVar1 = local_30;
    if (cVar2 != '\0') {
      *(longlong *)(param_1 + 0x90) = local_20[0x12];
    }
  }
  local_30 = puVar1;
  FUN_01804870(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
               *(undefined1 *)(param_1 + 0x50));
  FUN_018bba30(param_1);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_50,4);
  return;
}

