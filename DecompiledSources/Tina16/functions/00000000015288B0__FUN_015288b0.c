/* Ghidra address: 015288b0 */
/* Ghidra symbol: FUN_015288b0 */


void FUN_015288b0(longlong *param_1)

{
  wchar_t *pwVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *PTR_DAT_02002ce0 = 0;
  *(undefined8 *)PTR_DAT_02005168 = 0;
  FUN_017ca500(8,param_1,0,0);
  FUN_016f5570(param_1,0);
  FUN_01b077a0(param_1,1);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_016f66e0(param_1);
  pwVar1 = L"TINA.INI";
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_015289a4,L"TINA.INI");
  FUN_01664230(param_1[0x22],local_20[0],1,1,(ulonglong)pwVar1 & 0xffffffffffffff00);
  FUN_00414480(local_20);
  return;
}

