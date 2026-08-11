/* Ghidra address: 006e42c0 */
/* Ghidra symbol: FUN_006e42c0 */


void FUN_006e42c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_007d53b0(param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007d56e0(param_2);
    }
    if (param_2 == *(longlong *)(param_1 + 0x4e8)) {
      FUN_006e4280(param_1,uVar2,0);
    }
    else if (param_2 == *(longlong *)(param_1 + 0x538)) {
      FUN_006e4280(param_1,uVar2,2);
    }
  }
  return;
}

