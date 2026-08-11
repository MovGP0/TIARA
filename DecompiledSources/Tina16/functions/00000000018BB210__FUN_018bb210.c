/* Ghidra address: 018bb210 */
/* Ghidra symbol: FUN_018bb210 */


void FUN_018bb210(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = *(longlong *)(param_1 + 0x90);
  local_20 = (longlong *)0x0;
  puVar1 = auStack_58;
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x240) + 0x10) != '\0') &&
     (puVar1 = auStack_58, *(longlong *)PTR_DAT_02004a20 != 0)) {
    local_20 = (longlong *)
               (**(code **)(*(longlong *)PTR_DAT_02004a20 + -0x30))(*(longlong *)PTR_DAT_02004a20);
    (**(code **)(*local_20 + 0x78))(local_20,0xff,0);
    local_20[0x11] = *(longlong *)(param_1 + 0x20);
    FUN_0197baf0(local_20,0);
    FUN_0197bb10(local_20);
    local_28 = local_20[0x12];
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_018bbd40(param_1);
  FUN_01804950(*(undefined8 *)(param_1 + 0x98),local_28);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x90))(local_20,*(undefined8 *)(param_1 + 0x90));
    FUN_00410f20(local_20);
  }
  return;
}

