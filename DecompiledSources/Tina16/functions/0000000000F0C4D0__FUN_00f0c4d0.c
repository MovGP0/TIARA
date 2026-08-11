/* Ghidra address: 00f0c4d0 */
/* Ghidra symbol: FUN_00f0c4d0 */


void FUN_00f0c4d0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_00725300(&PTR_FUN_0071aaf8,1,*(undefined8 *)PTR_DAT_02004030);
  local_20 = 0;
  FUN_01acff30(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x798),&local_20);
  (**(code **)(*(longlong *)plVar3[0x1a] + 0x10))
            ((longlong *)plVar3[0x1a],*(undefined8 *)(param_1 + 0x798));
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x798) + 0x28));
  FUN_005fc860(plVar3[0x1a],uVar2);
  cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  if (cVar1 == '\0') {
    FUN_00410f20(local_20);
    FUN_00410f20(plVar3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x10))
              (*(longlong **)(param_1 + 0x798),plVar3[0x1a]);
    uVar2 = FUN_01a90ee0(*(undefined4 *)(plVar3[0x1a] + 0x28));
    FUN_005fc860(*(undefined8 *)(param_1 + 0x798),uVar2);
    FUN_00f05050(local_30,plVar3[0x1a]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_30[0]);
    FUN_00410f20(plVar3);
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_30);
  return;
}

