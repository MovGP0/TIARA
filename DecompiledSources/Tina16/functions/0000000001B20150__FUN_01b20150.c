/* Ghidra address: 01b20150 */
/* Ghidra symbol: FUN_01b20150 */


longlong * FUN_01b20150(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(param_1);
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_017ff620(param_2);
  }
  for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)FUN_017ff620(plVar1)) {
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_30);
    FUN_00c7bb40(local_30,&local_28);
    FUN_017ff4f0(plVar1,&local_38);
    FUN_00416cd0(param_1,5,local_28,&DAT_01b202d8,local_38,&LAB_01b202e8,*param_1);
  }
  if (param_2 != 0) {
    FUN_01d07fb0(param_2,&local_20);
    if ((local_20 == 0) || (*param_1 == 0)) {
      FUN_017ff4f0(param_2,&local_48);
      FUN_00416ad0(param_1,local_48);
    }
    else {
      FUN_01d07fb0(param_2,&local_40);
      FUN_00416ad0(param_1,local_40);
    }
  }
  FUN_00414560(&local_48,6);
  return param_1;
}

