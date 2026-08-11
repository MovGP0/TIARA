/* Ghidra address: 013895b0 */
/* Ghidra symbol: FUN_013895b0 */


void FUN_013895b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  cVar1 = FUN_010e3c10(param_1);
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x7ec) != '\0') || (*(char *)(param_1 + 0x8d1) != '\0')) {
      *(undefined1 *)(param_1 + 0x7ed) = 0;
    }
    if (*(char *)(param_1 + 0x7ed) != '\0') {
      FUN_010e4300(param_1,8,1000,0);
      local_24 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x188))
                           (*(longlong **)(param_1 + 0xe88),param_1 + 0x880);
      FUN_010e4410(param_1,param_1);
      if (local_24 == 0) {
        if (*(char *)(*(longlong *)(param_1 + 0xbd0) + 0x328) != '\0') {
          local_48 = 1;
          (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
                    (*(longlong **)(param_1 + 0xe88),*(longlong *)(param_1 + 0x870) + 0x2a,local_20,
                     *(undefined1 *)(param_1 + 0xe90));
          FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_20[0]);
        }
        FUN_010f67e0(param_1,1,1);
        *(undefined1 *)(param_1 + 0xe45) = 0;
      }
      if (local_24 == -1) {
        uVar2 = FUN_0044d490(&PTR_FUN_01384358,1,L"Signal Analyzer: Read Data Failed!");
        FUN_004134c0(uVar2);
      }
    }
  }
  else {
    cVar1 = FUN_010e1a60(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_010e1b10(param_1);
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x7f0));
      FUN_011390a0(uVar2,uVar3);
    }
  }
  return;
}

