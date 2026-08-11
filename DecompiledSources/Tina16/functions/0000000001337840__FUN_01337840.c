/* Ghidra address: 01337840 */
/* Ghidra symbol: FUN_01337840 */


void FUN_01337840(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_2 != '\0') {
    if (DAT_02107858 == 0) {
      DAT_02107858 = FUN_007fc180(&PTR_FUN_01334978,1,*(undefined8 *)PTR_DAT_02004030);
    }
    FUN_012bc3d0(*(undefined8 *)(DAT_02107858 + 0x700),1);
    (**(code **)(**(longlong **)(DAT_02107858 + 0x700) + 0x10))
              (*(longlong **)(DAT_02107858 + 0x700),*(undefined8 *)(param_1 + 0x5d0));
    FUN_01337110(DAT_02107858,param_1);
    FUN_008059a0(DAT_02107858);
    FUN_0064e1d0(DAT_02107858);
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_res20);
  return;
}

