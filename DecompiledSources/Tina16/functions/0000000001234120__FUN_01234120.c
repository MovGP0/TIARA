/* Ghidra address: 01234120 */
/* Ghidra symbol: FUN_01234120 */


void FUN_01234120(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))(*(longlong **)(param_1 + 0x8f0));
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)PTR_DAT_02003158);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)PTR_DAT_02002e48);
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848));
  FUN_0122db90(param_1,1);
  FUN_00806af0(*(undefined8 *)PTR_DAT_020044a8,*(undefined4 *)PTR_DAT_02001b40);
  FUN_00806b40(*(undefined8 *)PTR_DAT_020044a8,
               *(int *)PTR_DAT_02001518 - *(int *)(*(longlong *)PTR_DAT_020044a8 + 0x9c));
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_01175da0(*(undefined8 *)PTR_DAT_020044a8,1);
  }
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_012281f0(param_1);
  }
  return;
}

