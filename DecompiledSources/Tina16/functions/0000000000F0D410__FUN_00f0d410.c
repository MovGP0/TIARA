/* Ghidra address: 00f0d410 */
/* Ghidra symbol: FUN_00f0d410 */


void FUN_00f0d410(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_00725300(&PTR_FUN_0071aaf8,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*(longlong *)plVar2[0x1a] + 0x10))
            ((longlong *)plVar2[0x1a],*(undefined8 *)(param_1 + 0x710));
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 == '\0') {
    FUN_00410f20(0);
    FUN_00410f20(plVar2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x10))
              (*(longlong **)(param_1 + 0x710),plVar2[0x1a]);
    FUN_00f05050(local_30,plVar2[0x1a]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_30[0]);
    FUN_00410f20(plVar2);
    FUN_00410f20(0);
  }
  FUN_00414480(local_30);
  return;
}

