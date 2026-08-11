/* Ghidra address: 008e9840 */
/* Ghidra symbol: FUN_008e9840 */


void FUN_008e9840(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_40 [2];
  undefined1 local_38;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  
  local_20[0] = 0;
  cVar1 = FUN_008e6d10(param_1,&local_c,4);
  if (cVar1 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else {
    *param_2 = (uint)local_c * 0x1000000 + (uint)local_b * 0x10000 + (uint)local_a * 0x100 +
               (uint)local_9;
    if (*param_2 - 0xd800U < 0x800) {
      FUN_0041ddd0(local_20,PTR_PTR_02004e20);
      local_40[0] = *param_2;
      local_38 = 0;
      local_30 = L"UCS-4BE";
      local_28 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_20[0],local_40,1);
      FUN_004134c0(uVar2);
    }
    *param_3 = 4;
  }
  FUN_00414480(local_20);
  return;
}

