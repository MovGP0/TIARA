/* Ghidra address: 005ea710 */
/* Ghidra symbol: FUN_005ea710 */


char FUN_005ea710(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_00414b50(&local_28,param_2);
  uVar3 = FUN_005ea1f0(local_28);
  if ((char)uVar3 == '\0') {
    FUN_00416e20(&local_28,1,1);
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar4 = FUN_005ea6e0(param_1,uVar3);
  uVar5 = FUN_00416740(local_28);
  uVar3 = thunk_FUN_03de2288(uVar4,uVar5,0,0,0,uVar1 & 0x300 | 0xf003f,0,&local_20,local_2c);
  cVar2 = FUN_005ea620(param_1,uVar3);
  if (cVar2 == '\0') {
    local_40 = 0x11;
    local_48 = param_2;
    uVar4 = FUN_0044d8d0(&PTR_FUN_005e7568,1,PTR_PTR_020018f8,&local_48,0);
    FUN_004134c0(uVar4);
  }
  else {
    thunk_FUN_0418fb4b(local_20);
  }
  FUN_00414480(&local_28);
  return cVar2;
}

