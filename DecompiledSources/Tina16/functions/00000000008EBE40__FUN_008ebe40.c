/* Ghidra address: 008ebe40 */
/* Ghidra symbol: FUN_008ebe40 */


void FUN_008ebe40(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  *param_2 = 0;
  cVar1 = FUN_008e6d10(param_1,param_2,2);
  if (cVar1 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else {
    *param_3 = 2;
    if (*param_2 - 0xd800U < 0x800) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004e20);
      local_30[0] = *param_2;
      local_28 = 0;
      local_20 = L"UCS-2";
      local_18 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414480(&local_10);
  return;
}

