/* Ghidra address: 01084a30 */
/* Ghidra symbol: FUN_01084a30 */


void FUN_01084a30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_010b3a90(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 != '\0') {
    cVar1 = FUN_015ff190(local_20);
    if (cVar1 == '\0') {
      FUN_0041ddd0(local_40,PTR_DAT_02001618);
      FUN_016fd940(local_40[0]);
      goto LAB_01084c7a;
    }
  }
  cVar1 = FUN_010b3ad0(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 != '\0') {
    cVar1 = FUN_010ae170(local_20);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_48,PTR_PTR_020038f0);
      FUN_016fd940(local_48);
      goto LAB_01084c7a;
    }
  }
  cVar1 = FUN_010b3a70(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 != '\0') {
    cVar1 = FUN_010add60();
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_50,PTR_PTR_02003820);
      FUN_016fd940(local_50);
      goto LAB_01084c7a;
    }
  }
  cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 != '\0') {
    cVar1 = FUN_0105fed0(local_20,&local_28);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_58,PTR_PTR_02005300);
      FUN_01055ef0(local_58,&local_29);
      goto LAB_01084c7a;
    }
  }
  cVar1 = FUN_010b3af0(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8),1);
  if (cVar1 == '\0') {
    cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 != '\0') {
      FUN_0108bf10(param_1,*(undefined8 *)(param_1 + 0xb38),
                   *(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x108));
    }
    cVar1 = FUN_010b3b20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0106d998,1,*(undefined8 *)PTR_DAT_02004030);
      (**(code **)(*plVar2 + 0x2d0))(plVar2);
      FUN_00410f20(plVar2);
    }
    else {
      FUN_0107fa70(param_1);
    }
  }
  else {
    FUN_0041ddd0(&local_60,PTR_PTR_020029c8);
    FUN_016fd940(local_60);
  }
LAB_01084c7a:
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_28,2);
  return;
}

