/* Ghidra address: 01470460 */
/* Ghidra symbol: FUN_01470460 */


void FUN_01470460(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x108),&DAT_014705f8,
               L"PyImage.png");
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_20[0]);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
  (**(code **)(*plVar2 + 0x90))(plVar2);
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x800));
  FUN_013bd980(*(undefined8 *)(param_1 + 0x800),*(undefined4 *)(param_1 + 0x80c));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
  FUN_013bc030(*(undefined8 *)(param_1 + 0x800),&local_28,local_30,1,0);
  FUN_01470c80(param_1,local_28);
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0146cb88,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0146cfd0(plVar2,local_20[0]);
    (**(code **)(*plVar2 + 0x2d0))(plVar2);
    FUN_00410f20(plVar2);
  }
  FUN_00414560(&local_30,3);
  return;
}

