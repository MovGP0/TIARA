/* Ghidra address: 008ebf50 */
/* Ghidra symbol: FUN_008ebf50 */


void FUN_008ebf50(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined1 local_a;
  undefined1 local_9;
  
  local_20[0] = 0;
  if (0xffff < param_2) {
    FUN_0041ddd0(local_20,PTR_PTR_02004d48);
    local_30 = L"UCS-2";
    local_28 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_20[0],&local_30,0);
    FUN_004134c0(uVar1);
  }
  local_9 = (undefined1)(param_2 >> 8);
  local_a = (undefined1)param_2;
  FUN_008e6d60(param_1,&local_a,1);
  FUN_008e6d60(param_1,&local_9,1);
  *param_3 = 2;
  FUN_00414480(local_20);
  return;
}

