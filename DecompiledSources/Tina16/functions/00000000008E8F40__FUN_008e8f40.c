/* Ghidra address: 008e8f40 */
/* Ghidra symbol: FUN_008e8f40 */


void FUN_008e8f40(undefined8 param_1,uint param_2,undefined1 *param_3,int param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_10 = 0;
  if (0xd7ff < param_2) {
    if (param_2 - 0xd800 < 0x800) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004698);
      local_28 = 0;
      local_20 = L"UCS-4";
      local_18 = 0x11;
      local_30[0] = param_2;
      uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
      FUN_004134c0(uVar1);
      goto LAB_008e910e;
    }
    if (0x1fff < param_2 - 0xe000) {
      if (param_2 - 0x10000 < 0x100000) {
        *param_5 = 4;
        if ((param_3 != (undefined1 *)0x0) && (0 < param_4)) {
          sVar2 = (short)(param_2 >> 10) + -0x2840;
          *param_3 = (char)sVar2;
          if ((1 < param_4) && (param_3[1] = (char)((ushort)sVar2 >> 8), 2 < param_4)) {
            uVar3 = (ushort)param_2 & 0x3ff;
            param_3[2] = (char)uVar3;
            if (3 < param_4) {
              param_3[3] = (byte)(uVar3 >> 8) ^ 0xdc;
            }
          }
        }
      }
      else {
        FUN_0041ddd0(&local_38,PTR_DAT_02005a00);
        local_28 = 0;
        local_20 = L"UTF-16LE";
        local_18 = 0x11;
        local_30[0] = param_2;
        uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_38,local_30,1);
        FUN_004134c0(uVar1);
      }
      goto LAB_008e910e;
    }
  }
  *param_5 = 2;
  if (((param_3 != (undefined1 *)0x0) && (0 < param_4)) && (*param_3 = (char)param_2, 1 < param_4))
  {
    param_3[1] = (char)(param_2 >> 8);
  }
LAB_008e910e:
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return;
}

