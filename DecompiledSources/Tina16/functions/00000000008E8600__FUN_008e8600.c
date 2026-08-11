/* Ghidra address: 008e8600 */
/* Ghidra symbol: FUN_008e8600 */


void FUN_008e8600(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
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
  cVar2 = FUN_008e6d10(param_1,param_2,2);
  if (cVar2 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else {
    uVar1 = *param_2;
    *param_2 = uVar1 & 0xffff0000 | (uVar1 & 0xff) << 8 | (uVar1 & 0xff00) >> 8;
    if (*param_2 - 0xd800 < 0x400) {
      cVar2 = FUN_008e6d10(param_1,&local_a,2);
      if (cVar2 == '\0') {
        FUN_0041ddd0(local_20,PTR_PTR_02001740);
        local_30 = L"UTF-16BE";
        local_28 = 0x11;
        uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_20[0],&local_30,0);
        FUN_004134c0(uVar3);
      }
      if ((byte)(local_a + 0x24) < 4) {
        *param_2 = (*param_2 - 0xd7c0) * 0x400 + (uint)(local_a ^ 0xdc) * 0x100 + (uint)local_9;
        *param_3 = 4;
      }
      else {
        FUN_0041ddd0(&local_38,PTR_PTR_02001740);
        local_30 = L"UTF-16BE";
        local_28 = 0x11;
        uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_38,&local_30,0);
        FUN_004134c0(uVar3);
      }
    }
    else if (*param_2 - 0xdc00 < 0x400) {
      FUN_0041ddd0(&local_40,PTR_PTR_02001740);
      local_30 = L"UTF-16BE";
      local_28 = 0x11;
      uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_40,&local_30,0);
      FUN_004134c0(uVar3);
    }
    else {
      *param_3 = 2;
    }
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(local_20);
  return;
}

