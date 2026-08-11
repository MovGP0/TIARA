/* Ghidra address: 00f719e0 */
/* Ghidra symbol: FUN_00f719e0 */


void FUN_00f719e0(longlong param_1)

{
  char cVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x124) == '\0') {
      FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x110),&DAT_00f71eec,
                   *(undefined8 *)(param_1 + 0x118));
    }
    else {
      FUN_00f61040(local_20,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x110),&DAT_00f71eec,local_20[0]);
    }
  }
  else if (cVar1 == '\x04') {
    cVar1 = *(char *)(param_1 + 0x126);
    if ((((cVar1 == '\x04') || (cVar1 == '\b')) || (cVar1 == '\t')) ||
       (((cVar1 == '\n' || (cVar1 == '\v')) || ((cVar1 == '\f' || (cVar1 == '\r')))))) {
      FUN_00f6dab0(&local_28,cVar1);
      FUN_00416cd0(&local_10,5,*(undefined8 *)(param_1 + 0x110),&DAT_00f71eec,local_28,&DAT_00f71f00
                   ,*(undefined8 *)(param_1 + 0x110));
    }
    else if (*(char *)(param_1 + 0x124) == '\0') {
      FUN_00f6dab0(&local_40,cVar1);
      FUN_00416cd0(&local_10,7,*(undefined8 *)(param_1 + 0x110),&DAT_00f71eec,
                   *(undefined8 *)(param_1 + 0x110),&DAT_00f71f00,local_40,&DAT_00f71f00,
                   *(undefined8 *)(param_1 + 0x118));
    }
    else {
      FUN_00f6dab0(&local_30,cVar1);
      FUN_00f61040(&local_38,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,7,*(undefined8 *)(param_1 + 0x110),&DAT_00f71eec,
                   *(undefined8 *)(param_1 + 0x110),&DAT_00f71f00,local_30,&DAT_00f71f00,local_38);
    }
  }
  else if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x125) == '\0') {
      FUN_0043f750(&local_50,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,4,L"Delay ",local_50,&DAT_00f71f00,&PTR_DAT_00f71f40);
    }
    else {
      FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,4,L"Delay ",local_48,&DAT_00f71f00,&PTR_LAB_00f71f2c);
    }
  }
  else if (cVar1 == '\v') {
    if (*(char *)(param_1 + 0x128) == '\0') {
      FUN_00f6cef0(&local_60,*(undefined1 *)(param_1 + 0x129),*(undefined4 *)(param_1 + 0x14));
      FUN_00416cd0(&local_10,4,L"int ",local_60,&DAT_00f71f00,&DAT_00f71f80);
    }
    else {
      FUN_00f6cef0(&local_58,*(undefined1 *)(param_1 + 0x129),*(undefined4 *)(param_1 + 0x14));
      FUN_00416cd0(&local_10,4,L"int ",local_58,&DAT_00f71f00,&PTR_DAT_00f71f6c);
    }
  }
  else if (cVar1 == '\f') {
    FUN_00414b50(&local_10,L"code");
  }
  else if (cVar1 == '\r') {
    FUN_00414b50(&local_10,L"call");
  }
  FUN_00f6f0a0(param_1,&local_70);
  FUN_00416ba0(&local_68,local_10,local_70);
  FUN_00f6f540(param_1,local_68);
  FUN_00414560(&local_70,0xb);
  FUN_00414480(&local_10);
  return;
}

