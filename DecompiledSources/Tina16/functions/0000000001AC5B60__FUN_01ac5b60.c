/* Ghidra address: 01ac5b60 */
/* Ghidra symbol: FUN_01ac5b60 */


void FUN_01ac5b60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_00725300(&PTR_FUN_0071aaf8,1,*(undefined8 *)PTR_DAT_02004030);
  local_20 = 0;
  FUN_01acff30(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),&local_20);
  (**(code **)(*(longlong *)plVar2[0x1a] + 0x10))
            ((longlong *)plVar2[0x1a],*(undefined8 *)(param_1 + 0x770));
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 == '\0') {
    FUN_00410f20(local_20);
    FUN_00410f20(plVar2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x10))
              (*(longlong **)(param_1 + 0x770),plVar2[0x1a]);
    FUN_00f05050(local_30,plVar2[0x1a]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_30[0]);
    FUN_00410f20(plVar2);
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_30);
  return;
}

