/* Ghidra address: 008e8cc0 */
/* Ghidra symbol: FUN_008e8cc0 */


void FUN_008e8cc0(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  byte local_a;
  byte local_9;
  
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  *param_2 = 0;
  cVar1 = FUN_008e6d10(param_1,param_2,2);
  if (cVar1 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else if (*param_2 - 0xd800U < 0x400) {
    cVar1 = FUN_008e6d10(param_1,&local_a,2);
    if (cVar1 == '\0') {
      FUN_0041ddd0(local_20,PTR_PTR_02001740);
      local_30 = L"UTF-16LE";
      local_28 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_20[0],&local_30,0);
      FUN_004134c0(uVar2);
    }
    if ((byte)(local_9 + 0x24) < 4) {
      *param_2 = (*param_2 + -0xd7c0) * 0x400 + (uint)(local_9 ^ 0xdc) * 0x100 + (uint)local_a;
      *param_3 = 4;
    }
    else {
      FUN_0041ddd0(&local_38,PTR_PTR_02001740);
      local_30 = L"UTF-16LE";
      local_28 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_38,&local_30,0);
      FUN_004134c0(uVar2);
    }
  }
  else if (*param_2 - 0xdc00U < 0x400) {
    FUN_0041ddd0(&local_40,PTR_PTR_02001740);
    local_30 = L"UTF-16LE";
    local_28 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_40,&local_30,0);
    FUN_004134c0(uVar2);
  }
  else {
    *param_3 = 2;
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(local_20);
  return;
}

