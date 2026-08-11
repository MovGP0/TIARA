/* Ghidra address: 006da940 */
/* Ghidra symbol: FUN_006da940 */


void FUN_006da940(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [40];
  
  FUN_00655080(param_1);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4c8));
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4c8));
      thunk_FUN_041b2403(uVar2,0x1208,0,uVar3);
    }
  }
  if (*(longlong *)(param_1 + 0x498) == 0) {
    FUN_006db1f0(param_1);
  }
  else {
    FUN_006da840(auStack_38);
  }
  return;
}

