/* Ghidra address: 01a47b10 */
/* Ghidra symbol: FUN_01a47b10 */


void FUN_01a47b10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) == 1) {
    FUN_0072d440(L"Currently, the interface is set to LMStudio.\r\nWhen using the LMStudio interface, models must be downloaded manually within LMStudio.\r\nAfter that, Tina will be able to detect the downloaded models."
                 ,2,4,0);
  }
  else {
    plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01a2e738,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_01a2f520(plVar2,param_1,4,0);
    (**(code **)(*plVar2 + 0x2d0))(plVar2);
    FUN_00410f20(plVar2);
    cVar1 = FUN_01a3f000(param_1,local_20,1);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x18))
                (*(longlong **)(param_1 + 0x8e8),local_30,0);
      FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_30[0]);
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

