/* Ghidra address: 00411290 */
/* Ghidra symbol: FUN_00411290 */


undefined8 FUN_00411290(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_118 [256];
  
  lVar2 = FUN_004115a0();
  if (lVar2 == 0) {
    FUN_00414480(param_2);
  }
  else {
    lVar2 = lVar2 + 0x14 + (ulonglong)*(byte *)(lVar2 + 1);
    if (*(char *)(lVar2 + 1) == '@') {
      FUN_004166c0(local_118,0x3a,0xff);
      iVar1 = FUN_00416fd0(local_118,lVar2,1);
      FUN_004151b0(local_118,lVar2,iVar1 + 1,0x7fffffff);
      FUN_0041dd20(param_2,local_118);
    }
    else {
      FUN_0041dd20(param_2,lVar2);
    }
  }
  return param_2;
}

