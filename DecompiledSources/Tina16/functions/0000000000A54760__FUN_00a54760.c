/* Ghidra address: 00a54760 */
/* Ghidra symbol: FUN_00a54760 */


undefined1 FUN_00a54760(longlong param_1)

{
  char cVar1;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_61 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x510);
  if (cVar1 != '\0') {
    FUN_00468a10(&local_30,L"absolute");
    cVar1 = FUN_0046f320(param_1 + 0x510,&local_30);
    if (cVar1 == '\0') {
      FUN_00468a10(&local_48,L"fixed");
      cVar1 = FUN_0046f320(param_1 + 0x510,&local_48);
      if (cVar1 == '\0') {
        FUN_00468a10(&local_60,L"relative");
        cVar1 = FUN_0046f320(param_1 + 0x510,&local_60);
        if (cVar1 != '\0') {
          local_61 = 1;
        }
      }
      else {
        local_61 = 3;
      }
    }
    else {
      local_61 = 2;
    }
  }
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return local_61;
}

