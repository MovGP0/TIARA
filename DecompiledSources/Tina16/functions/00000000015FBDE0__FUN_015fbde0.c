/* Ghidra address: 015fbde0 */
/* Ghidra symbol: FUN_015fbde0 */


void FUN_015fbde0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 local_30 [2];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_30[0] = 0;
  FUN_00414610(param_6);
  FUN_00417580(local_20,&DAT_015e7b68);
  if (param_7 == 0x20) {
    FUN_015fbd00(local_20,param_6);
    *param_2 = 0;
    *param_3 = local_10 + -1;
    *param_4 = local_14;
    *param_5 = local_18;
  }
  else if (param_7 == 0x80) {
    FUN_0043e130(local_30,param_6);
    iVar1 = FUN_00416db0(local_30[0],L"PIC16F74_VHDL");
    if (iVar1 == 0) {
      *param_2 = 0;
      *param_3 = 0xbf;
      *param_4 = 0x1000;
      *param_5 = 0;
    }
  }
  else if (param_7 == 0x10000) {
    *param_5 = 0;
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    _GetMCUInfo(param_1,param_2,param_3,param_4);
    *param_5 = 0;
  }
  FUN_00414480(local_30);
  FUN_00417740(local_20,&DAT_015e7b68);
  FUN_00414480(&param_6);
  return;
}

