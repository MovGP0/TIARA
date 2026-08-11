/* Ghidra address: 01415220 */
/* Ghidra symbol: FUN_01415220 */


void FUN_01415220(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x7cc) == '\0') {
    *(undefined1 *)(param_1 + 0x7cc) = 1;
  }
  else {
    if ((((*(char *)(param_1 + 0x7c8) == '\0') || (*(char *)(param_1 + 0x7c9) == '\0')) ||
        (*(char *)(param_1 + 0x7ca) == '\0')) ||
       ((*(char *)(param_1 + 0x7cb) == '\0' || (*(char *)(param_1 + 0x7cc) == '\0')))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x780) = uVar1;
    if ((*(char *)(param_1 + 0x780) == '\0') &&
       (*(char *)(param_1 + 0x7cd) == *(char *)(param_1 + 0x7ce))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x780) = uVar1;
    if (*(char *)(param_1 + 0x7c8) == '\0') {
      FUN_00414ad0(param_1 + 0x788,L"Text segment file not selected!");
    }
    else if (*(char *)(param_1 + 0x7c9) == '\0') {
      FUN_00414ad0(param_1 + 0x788,L"Data segment not selected!");
    }
    else if (*(char *)(param_1 + 0x7ca) == '\0') {
      FUN_00414ad0(param_1 + 0x788,L"Romfs not selected!");
    }
    else if (*(char *)(param_1 + 0x7cb) == '\0') {
      FUN_00414ad0(param_1 + 0x788,L"Readelf -S output not selected!");
    }
    else if (*(char *)(param_1 + 0x7cc) == '\0') {
      FUN_00414ad0(param_1 + 0x788,L"Config.linux not selected!");
    }
    if (*(char *)(param_1 + 0x7cd) != *(char *)(param_1 + 0x7ce)) {
      FUN_00414ad0(param_1 + 0x788,L"Userfs or userfs config not selected!");
    }
    if (*(char *)(param_1 + 0x780) == '\0') {
      cVar2 = FUN_01415c80(param_1);
      *(char *)(param_1 + 0x780) = cVar2;
      if (cVar2 != '\0') {
        FUN_016fd940(L"Error during processing the config file");
      }
    }
    else {
      FUN_016fd940(*(undefined8 *)(param_1 + 0x788));
    }
  }
  return;
}

