/* Ghidra address: 0046c8d0 */
/* Ghidra symbol: FUN_0046c8d0 */


void FUN_0046c8d0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong local_30;
  undefined1 local_22 [2];
  int local_20;
  int local_1c;
  
  cVar1 = FUN_0046c6f0(param_1,local_22,&local_30);
  if (cVar1 == '\0') {
    FUN_004607e0(0x80070057);
  }
  local_1c = *(int *)(local_30 + 0x1c);
  local_20 = (param_2 - local_1c) + 1;
  iVar2 = thunk_FUN_0411d78e(local_30,&local_20);
  if (iVar2 != 0) {
    FUN_004603e0();
  }
  return;
}

