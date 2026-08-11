/* Ghidra address: 0146ecf0 */
/* Ghidra symbol: FUN_0146ecf0 */


void FUN_0146ecf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_010d58b0(local_20);
  if (cVar1 == '\0') {
    FUN_0072d440(L"Python distribution not found!",1,4,0);
  }
  else {
    FUN_010d5940(L"PYTHONHOME",local_20[0]);
    plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0146d218,1,*(undefined8 *)PTR_DAT_02004030);
    uVar3 = FUN_019a4600();
    FUN_0146ee90(plVar2,local_20[0],uVar3,param_1,param_2);
    (**(code **)(*plVar2 + 0x2d0))(plVar2);
    FUN_00410f20(plVar2);
    FUN_010d5940(L"PYTHONHOME",0);
  }
  FUN_00414480(local_20);
  return;
}

