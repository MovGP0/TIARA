/* Ghidra address: 01aac0d0 */
/* Ghidra symbol: FUN_01aac0d0 */


void FUN_01aac0d0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  lVar3 = (longlong)param_3;
  cVar1 = *(char *)(param_1 + 0x14ad8 + lVar3);
  uVar2 = FUN_01aac8f0(param_1,param_3,&local_3b,local_39,&local_3a);
  *(undefined1 *)(param_1 + 0x14ad8 + lVar3) = uVar2;
  if (cVar1 != *(char *)(param_1 + 0x14ad8 + lVar3)) {
    FUN_01aab620(param_1,param_2,param_3);
  }
  return;
}

