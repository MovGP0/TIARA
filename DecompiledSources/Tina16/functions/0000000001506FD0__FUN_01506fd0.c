/* Ghidra address: 01506fd0 */
/* Ghidra symbol: FUN_01506fd0 */


void FUN_01506fd0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_a8 [39];
  undefined1 local_81 [81];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  double local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x9b0);
  cVar2 = FUN_010e8310(uVar1,1,local_81,&local_20,local_28,local_30);
  if (cVar2 != '\0') {
    if (*(double *)(param_1 + 0xc58) <= local_20 && local_20 != *(double *)(param_1 + 0xc58)) {
      local_20 = *(double *)(param_1 + 0xc58);
    }
    if (local_20 < *(double *)(param_1 + 0xc50)) {
      local_20 = *(double *)(param_1 + 0xc50);
    }
    FUN_010e81e0(uVar1,1,local_20);
  }
  cVar2 = FUN_010e8310(uVar1,0,local_81,&local_20,local_28,local_30);
  if (cVar2 != '\0') {
    if (*(double *)(param_1 + 0xc58) <= local_20 && local_20 != *(double *)(param_1 + 0xc58)) {
      local_20 = *(double *)(param_1 + 0xc58);
    }
    if (local_20 < *(double *)(param_1 + 0xc50)) {
      local_20 = *(double *)(param_1 + 0xc50);
    }
    FUN_010e81e0(uVar1,0,local_20);
  }
  FUN_010f6de0(param_1,local_a8);
  return;
}

