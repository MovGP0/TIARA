/* Ghidra address: 008edf70 */
/* Ghidra symbol: FUN_008edf70 */


char FUN_008edf70(undefined8 param_1,ushort param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_008e5af0(param_2,&DAT_01e2b6ec,L"IBM857");
  if ((byte)(cVar1 + 0x30U) < 0x40 && (1L << (cVar1 + 0x30U & 0x3f) & 0x400800020U) != 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = (uint)param_2;
    local_28 = 0;
    local_20 = L"IBM857";
    local_18 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return cVar1;
}

