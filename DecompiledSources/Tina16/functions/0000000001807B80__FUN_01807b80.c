/* Ghidra address: 01807b80 */
/* Ghidra symbol: FUN_01807b80 */


ulonglong FUN_01807b80(undefined8 param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_28 [4];
  uint local_24;
  
  iVar3 = (int)param_1;
  if (iVar3 == 1) {
    uVar2 = thunk_FUN_041a78f9();
  }
  else if (iVar3 == 0x4d) {
    uVar2 = 2;
  }
  else if (iVar3 == 0xff) {
    uVar2 = 1;
  }
  else {
    uVar1 = thunk_FUN_041d697c(param_1,local_28,1);
    FUN_00451af0(uVar1);
    uVar2 = (ulonglong)local_24;
  }
  return uVar2;
}

