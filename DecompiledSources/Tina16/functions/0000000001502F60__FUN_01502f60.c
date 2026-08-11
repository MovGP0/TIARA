/* Ghidra address: 01502f60 */
/* Ghidra symbol: FUN_01502f60 */


void FUN_01502f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong local_28;
  undefined1 local_20 [8];
  
  cVar2 = FUN_01538650(param_2);
  if (cVar2 == '\x03') {
    FUN_01539a50(param_2,local_20,&local_28);
    if (local_28 != 0) {
      FUN_00b95290(param_3);
      FUN_01d3bb20(param_3,local_28);
      lVar1 = FUN_00b94e60(param_3,0);
      *(undefined8 *)(lVar1 + 8) = 0;
    }
  }
  else {
    cVar2 = FUN_01538650(param_2);
    if (cVar2 == '\x04') {
      FUN_01539f10(param_2,param_3,1000);
    }
  }
  return;
}

