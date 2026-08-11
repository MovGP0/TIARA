/* Ghidra address: 01d02170 */
/* Ghidra symbol: FUN_01d02170 */


undefined8 FUN_01d02170(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = (char)param_1[0xa8];
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else if (cVar1 == '\x01') {
    (**(code **)(*param_1 + 0x288))(param_1,local_20);
    FUN_00416cd0(param_2,3,L"P_source(",local_20[0],&DAT_01d022f8);
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*param_1 + 0x288))(param_1,&local_28);
    FUN_00416cd0(param_2,3,L"P_sink(",local_28,&DAT_01d022f8);
  }
  else if (cVar1 == '\x03') {
    (**(code **)(*param_1 + 0x288))(param_1,&local_30);
    FUN_00416cd0(param_2,3,L"P_loss(",local_30,&DAT_01d022f8);
  }
  FUN_00414560(&local_30,3);
  return param_2;
}

