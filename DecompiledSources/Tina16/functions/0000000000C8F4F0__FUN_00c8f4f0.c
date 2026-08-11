/* Ghidra address: 00c8f4f0 */
/* Ghidra symbol: FUN_00c8f4f0 */


void FUN_00c8f4f0(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_0043ea00(&local_10,param_4);
  if (local_10 == 0) {
    if (*(char *)(param_1 + 0x55) == '\0') {
      FUN_00414b50(&local_10,L"255.255.255.255");
    }
    else {
      FUN_0041ddd0(local_20,PTR_PTR_020023e8);
      uVar1 = FUN_0086dfd0(&PTR_FUN_008981b0,1,local_20[0]);
      FUN_004134c0(uVar1);
    }
  }
  else {
    FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_28,local_10,*(undefined1 *)(param_1 + 0x55))
    ;
    FUN_00414b50(&local_10,local_28);
  }
  FUN_00c8f700(param_1,1);
  FUN_00c8f160(param_1,local_10,param_3,param_2,*(undefined1 *)(param_1 + 0x55));
  FUN_00c8f660(param_1);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

