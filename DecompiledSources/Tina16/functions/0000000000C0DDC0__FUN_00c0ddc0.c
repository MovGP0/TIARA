/* Ghidra address: 00c0ddc0 */
/* Ghidra symbol: FUN_00c0ddc0 */


void FUN_00c0ddc0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 local_74 [26];
  undefined1 local_5a;
  
  if (*(char *)(param_1 + 0x4e0) == '\x01') {
    uVar3 = 4;
  }
  else if (*(char *)(param_1 + 0x4e0) == '\x02') {
    uVar3 = 5;
  }
  else {
    uVar3 = 3;
  }
  uVar1 = FUN_00bf2c10(param_1);
  uVar1 = FUN_005fc8c0(uVar1);
  thunk_FUN_03d2c01a(uVar1,0x5c,local_74);
  local_5a = uVar3;
  uVar1 = FUN_00bf2c10(param_1);
  uVar2 = thunk_FUN_041a15ee(local_74);
  FUN_005fcc40(uVar1,uVar2);
  return;
}

