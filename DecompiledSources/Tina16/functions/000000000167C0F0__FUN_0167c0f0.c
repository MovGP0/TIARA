/* Ghidra address: 0167c0f0 */
/* Ghidra symbol: FUN_0167c0f0 */


void FUN_0167c0f0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  longlong local_40 [4];
  
  uVar2 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x468,0);
  if (*(char *)(local_40[0] + 9) == '\0') {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      FUN_00e33560(local_40[0],param_1,param_2,param_3);
    }
    else {
      FUN_00e30570(local_40[0],param_1,param_2,param_3);
    }
  }
  dVar3 = (double)FUN_00b92140(uVar2);
  *(double *)PTR_DAT_020059c0 = dVar3 + *(double *)PTR_DAT_020059c0;
  return;
}

