/* Ghidra address: 010b28b0 */
/* Ghidra symbol: FUN_010b28b0 */


void FUN_010b28b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_010b13a0(param_1,local_res10[0],local_20,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x18),local_20[0]);
    FUN_00410f20(local_20[0]);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x18),uVar2);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  FUN_00414480(local_res10);
  return;
}

