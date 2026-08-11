/* Ghidra address: 005c0430 */
/* Ghidra symbol: FUN_005c0430 */


undefined8 FUN_005c0430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *local_88;
  undefined1 local_80;
  undefined2 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined *local_58;
  undefined1 local_50;
  undefined2 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_30;
  int local_28;
  undefined1 local_20;
  
  lVar1 = FUN_005c05d0(param_1,param_3,param_4);
  if (lVar1 == 0) {
    FUN_00414ad0(param_2,&DAT_005c054c);
  }
  else {
    lVar2 = lVar1;
    if (lVar1 < 0) {
      lVar2 = -lVar1;
    }
    if (lVar1 < 0) {
      local_78 = 0x2d;
    }
    else {
      local_78 = 0x2b;
    }
    local_28 = (int)((lVar2 % 0xe10) / 0x3c);
    local_68 = (undefined4)(lVar2 / 0xe10);
    if (local_28 < 1) {
      local_88 = &DAT_005c054c;
      local_80 = 0x11;
      local_70 = 9;
      local_60 = 0;
      FUN_00442f70(param_2,L"%s%s%.2d",&local_88,2);
    }
    else {
      local_58 = &DAT_005c054c;
      local_50 = 0x11;
      local_40 = 9;
      local_30 = 0;
      local_20 = 0;
      local_48 = local_78;
      local_38 = local_68;
      FUN_00442f70(param_2,L"%s%s%.2d:%.2d",&local_58,3);
    }
  }
  return param_2;
}

