/* Ghidra address: 0122e740 */
/* Ghidra symbol: FUN_0122e740 */


void FUN_0122e740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_008059a0(*(undefined8 *)PTR_DAT_020047a0);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))(*(longlong **)(param_1 + 0x8f0));
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)PTR_DAT_02003158);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)PTR_DAT_02002e48);
  }
  FUN_0064cc50(*(undefined8 *)PTR_DAT_02001700,10);
  FUN_0064cbf0(*(undefined8 *)PTR_DAT_02001700,10);
  FUN_00806af0(*(undefined8 *)PTR_DAT_020044a8,*(undefined4 *)PTR_DAT_02001b40);
  FUN_00806b40(*(undefined8 *)PTR_DAT_020044a8,
               *(int *)PTR_DAT_02001518 - *(int *)(*(longlong *)PTR_DAT_020044a8 + 0x9c));
  FUN_0122db90(param_1,0);
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_01175da0(*(undefined8 *)PTR_DAT_020044a8,0);
  }
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_012281f0(param_1);
  }
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_01228900(param_2);
  }
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_00805200(param_1);
  }
  else {
    FUN_00805990(*(undefined8 *)PTR_DAT_020044a8);
  }
  FUN_00805990(*(undefined8 *)PTR_DAT_020047a0);
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  return;
}

