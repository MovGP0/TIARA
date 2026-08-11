/* Ghidra address: 0108b770 */
/* Ghidra symbol: FUN_0108b770 */


undefined1 FUN_0108b770(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)((longlong)param_1 + 0xb52) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x358))(param_1);
    if (cVar1 != '\0') {
      FUN_01086170(param_1,&local_10);
      iVar3 = FUN_00416db0(param_1[0x996],local_10);
      if (iVar3 == 0) {
        if (param_1[0x165] == 0) {
LAB_0108b7ec:
          cVar1 = FUN_00f81d30((int)param_1[0x15b]);
          if (cVar1 != '\0') goto LAB_0108b7ff;
        }
        else {
          cVar1 = FUN_00f81d30((int)param_1[0x15b]);
          if (cVar1 == '\0') goto LAB_0108b7ec;
        }
        uVar2 = 1;
        goto LAB_0108b805;
      }
    }
  }
LAB_0108b7ff:
  uVar2 = 0;
LAB_0108b805:
  FUN_00414480(&local_10);
  return uVar2;
}

