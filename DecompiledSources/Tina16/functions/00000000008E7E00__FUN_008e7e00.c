/* Ghidra address: 008e7e00 */
/* Ghidra symbol: FUN_008e7e00 */


void FUN_008e7e00(undefined8 param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  byte local_19;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30[0] = 0;
  cVar2 = FUN_008e6d10(param_1,&local_19,1);
  bVar1 = local_19;
  if (cVar2 == '\0') {
    *param_2 = 0x9c;
    *param_3 = 0;
  }
  else {
    *param_2 = (uint)local_19;
    *param_3 = 1;
    if (0x7f < *param_2) {
      uVar4 = 0x40;
      if ((local_19 & 0xc0) != 0xc0) {
        FUN_0041ddd0(local_30,PTR_PTR_02001740);
        local_40 = L"UTF-8";
        local_38 = 0x11;
        uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_30[0],&local_40,0);
        FUN_004134c0(uVar3);
      }
      for (; (bVar1 & (byte)uVar4) != 0; uVar4 = uVar4 >> 1) {
        cVar2 = FUN_008e6d10(param_1,&local_19,1);
        if (cVar2 == '\0') {
          FUN_0041ddd0(&local_48,PTR_PTR_02001740);
          local_40 = L"UTF-8";
          local_38 = 0x11;
          uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_48,&local_40,0);
          FUN_004134c0(uVar3);
        }
        if ((local_19 & 0xc0) != 0x80) {
          FUN_0041ddd0(&local_50,PTR_PTR_02001740);
          local_40 = L"UTF-8";
          local_38 = 0x11;
          uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_50,&local_40,0);
          FUN_004134c0(uVar3);
        }
        *param_2 = *param_2 << 6 | (uint)(local_19 & 0x3f);
        *param_3 = *param_3 + 1;
      }
      if (6 < *param_3) {
        FUN_0041ddd0(&local_58,PTR_PTR_02001740);
        local_40 = L"UTF-8";
        local_38 = 0x11;
        uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_58,&local_40,0);
        FUN_004134c0(uVar3);
      }
      *param_2 = *param_2 & (&DAT_01e287ec)[*param_3];
      if ((1 < *param_3) && (*param_2 <= (uint)(&DAT_01e287ec)[*param_3 + -1])) {
        FUN_0041ddd0(&local_60,PTR_PTR_02001740);
        local_40 = L"UTF-8";
        local_38 = 0x11;
        uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_60,&local_40,0);
        FUN_004134c0(uVar3);
      }
    }
  }
  FUN_00414560(&local_60,4);
  FUN_00414480(local_30);
  return;
}

