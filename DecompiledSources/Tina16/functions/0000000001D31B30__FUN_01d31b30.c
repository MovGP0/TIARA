/* Ghidra address: 01d31b30 */
/* Ghidra symbol: FUN_01d31b30 */


void FUN_01d31b30(longlong param_1)

{
  int iVar1;
  undefined1 local_118;
  undefined1 local_117 [263];
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),local_117,7);
    FUN_01d31a90(param_1);
    local_118 = 7;
    iVar1 = FUN_00414f50(&local_118,&DAT_01d31bc4,8);
    if (iVar1 == 0) {
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x28,4);
      FUN_01d31a90(param_1);
    }
    else {
      FUN_01d31a70(param_1,0x1001);
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

