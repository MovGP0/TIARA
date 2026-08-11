/* Ghidra address: 006ec420 */
/* Ghidra symbol: FUN_006ec420 */


void FUN_006ec420(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_20 [4];
  int local_1c;
  
  if (param_2 != *(int *)(param_1 + 0x4a8)) {
    *(int *)(param_1 + 0x4a8) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      FUN_004701b0(uVar1,0x46c,1,local_20,0);
      local_1c = param_2;
      uVar1 = FUN_0065b870(param_1);
      FUN_004701a0(uVar1,0x46b,1,local_20);
    }
  }
  return;
}

