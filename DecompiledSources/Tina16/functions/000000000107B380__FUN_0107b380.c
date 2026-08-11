/* Ghidra address: 0107b380 */
/* Ghidra symbol: FUN_0107b380 */


void FUN_0107b380(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined *local_60;
  longlong local_50;
  longlong local_48;
  char local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_50 = param_1;
  local_48 = param_2;
  local_39 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
  cVar1 = FUN_010afa90(local_48);
  if (cVar1 == '\0') {
    FUN_00414b50(local_20,L"sdcc");
    FUN_00416ad0(local_20,&DAT_0107b620);
    FUN_0107b300(auStack_88,local_20,&DAT_0107b630);
    if (*(char *)(local_50 + 0xb54) != '\0') {
      FUN_0107b300(auStack_88,local_20,L"--debug");
    }
    if (*(int *)(local_50 + 0xad8) != 2) {
      FUN_0107aab0(local_50,local_30);
      local_68 = local_30[0];
      local_60 = &DAT_0107b620;
      FUN_00416cd0(local_20,4,local_20[0],&LAB_0107b660);
    }
    if (*(int *)(local_50 + 0xad8) != 2) {
      FUN_0107a920(local_50,&local_38,*(undefined8 *)(local_50 + 0xb38));
      local_68 = local_38;
      local_60 = &DAT_0107b620;
      FUN_00416cd0(local_20,4,local_20[0],&LAB_0107b660);
    }
    FUN_00416ad0(local_20,*(undefined8 *)(local_48 + 0x30));
    if (local_39 == '\0') {
      FUN_01056150(*(undefined8 *)(local_50 + 0xb60),local_20[0],*(undefined8 *)(local_50 + 0xb40),0
                  );
    }
    else {
      (**(code **)(**(longlong **)(local_50 + 0xb68) + 0x78))
                (*(longlong **)(local_50 + 0xb68),local_20[0]);
    }
  }
  else {
    FUN_00416ba0(local_20,L"gpasm -c ",*(undefined8 *)(local_48 + 0x30));
    if (local_39 == '\0') {
      FUN_01056150(*(undefined8 *)(local_50 + 0xb60),local_20[0],*(undefined8 *)(local_50 + 0xb40),1
                  );
    }
    else {
      (**(code **)(**(longlong **)(local_50 + 0xb68) + 0x78))
                (*(longlong **)(local_50 + 0xb68),local_20[0]);
    }
  }
  if (local_39 == '\0') {
    FUN_0107b180(local_50);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

