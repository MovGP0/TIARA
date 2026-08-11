/* Ghidra address: 01c1e860 */
/* Ghidra symbol: FUN_01c1e860 */


undefined4 FUN_01c1e860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004170c0(L"https://",param_2,1);
  if (iVar1 == 1) {
    uVar2 = 0x1bb;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}

