/* Ghidra address: 008e8210 */
/* Ghidra symbol: FUN_008e8210 */


void FUN_008e8210(undefined8 param_1,uint param_2,byte *param_3,int param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_5 = 1;
    if ((param_3 != (byte *)0x0) && (0 < param_4)) {
      *param_3 = bVar2;
    }
  }
  else if (param_2 < 0x800) {
    *param_5 = 2;
    if (((param_3 != (byte *)0x0) && (0 < param_4)) &&
       (*param_3 = (byte)(param_2 >> 6) | 0xc0, param_4 != 1)) {
      param_3[1] = bVar2 & 0x3f | 0x80;
    }
  }
  else if (param_2 < 0x10000) {
    *param_5 = 3;
    if (((param_3 != (byte *)0x0) && (0 < param_4)) &&
       ((*param_3 = (byte)(param_2 >> 0xc) | 0xe0, param_4 != 1 &&
        (param_3[1] = (byte)(param_2 >> 6) & 0x3f | 0x80, param_4 != 2)))) {
      param_3[2] = bVar2 & 0x3f | 0x80;
    }
  }
  else if (param_2 < 0x200000) {
    *param_5 = 4;
    if ((((param_3 != (byte *)0x0) && (0 < param_4)) &&
        (*param_3 = (byte)(param_2 >> 0x12) | 0xf0, param_4 != 1)) &&
       ((param_3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80, param_4 != 2 &&
        (param_3[2] = (byte)(param_2 >> 6) & 0x3f | 0x80, param_4 != 3)))) {
      param_3[3] = bVar2 & 0x3f | 0x80;
    }
  }
  else {
    FUN_0041ddd0(&local_10,PTR_PTR_02004698);
    local_28 = 0;
    local_20 = L"Unicode";
    local_18 = 0x11;
    local_30[0] = param_2;
    uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

