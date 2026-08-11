/* Ghidra address: 0167bc20 */
/* Ghidra symbol: FUN_0167bc20 */


void FUN_0167bc20(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  longlong local_40 [4];
  
  uVar2 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x430,0);
  if (*(char *)(local_40[0] + 9) == '\0') {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      FUN_00e23030(local_40[0],param_1,param_2,param_3);
    }
    else {
      FUN_00e1fe20(local_40[0],param_1,param_2,param_3);
    }
  }
  dVar3 = (double)FUN_00b92140(uVar2);
  *(double *)PTR_DAT_02005678 = dVar3 + *(double *)PTR_DAT_02005678;
  return;
}

