/* Ghidra address: 00e164d0 */
/* Ghidra symbol: FUN_00e164d0 */


void FUN_00e164d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  *(bool *)param_4 = DAT_01edc8a0 != 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e178 == (code *)0x0) {
      DAT_0202e178 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitHW");
    }
    if (DAT_0202e178 != (code *)0x0) {
      (*DAT_0202e178)(local_res8,local_res18,param_4);
    }
  }
  FUN_00414480(&local_10);
  FUN_00414560(&local_res8,3);
  return;
}

