/* Ghidra address: 006e73a0 */
/* Ghidra symbol: FUN_006e73a0 */


undefined8 FUN_006e73a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_7c [25];
  byte local_63;
  
  FUN_006e6ea0(param_1,local_7c);
  local_63 = local_63 & 3;
  if (local_63 == 0) {
    uVar1 = 0;
  }
  else if (local_63 == 1) {
    uVar1 = 2;
  }
  else if (local_63 == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

