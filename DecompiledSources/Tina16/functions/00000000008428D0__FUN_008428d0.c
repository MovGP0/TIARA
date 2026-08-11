/* Ghidra address: 008428d0 */
/* Ghidra symbol: FUN_008428d0 */


void FUN_008428d0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [112];
  
  local_90 = auStack_b8;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_00841d10(param_1,local_78);
  }
  local_7c = *(undefined4 *)(param_1 + 0x4a4);
  local_80 = *(undefined4 *)(param_1 + 0x4e0);
  *(int *)(param_1 + 0x4a4) = param_2;
  *(int *)(param_1 + 0x4e0) = param_3;
  if (param_2 < *(int *)(param_1 + 0x4bc)) {
    *(int *)(param_1 + 0x4bc) = param_2 + -1;
  }
  if (param_3 < *(int *)(param_1 + 0x4c0)) {
    *(int *)(param_1 + 0x4c0) = param_3 + -1;
  }
  FUN_00842660(auStack_b8);
  return;
}

