/* Ghidra address: 01a5bb80 */
/* Ghidra symbol: FUN_01a5bb80 */


void FUN_01a5bb80(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01a2c508,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    if (plVar2[0xe0] == 0) {
      FUN_0072d440(L"Picture file is not selected!",1,4,0);
    }
    else {
      if (plVar2[0xe1] == 0) {
        FUN_0072d440(L"Netlist file is not selected!",0,4,0);
      }
      *(undefined1 *)(param_1 + 0x293c) = 1;
      FUN_0043e1a0(local_30,plVar2[0xe0]);
      FUN_00414ad0(param_1 + 0x890,local_30[0]);
      FUN_01a5b280(param_1,plVar2[0xe1],plVar2[0xe0]);
    }
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

