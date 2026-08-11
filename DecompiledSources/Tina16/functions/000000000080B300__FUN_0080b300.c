/* Ghidra address: 0080b300 */
/* Ghidra symbol: FUN_0080b300 */


undefined8 FUN_0080b300(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
LAB_0080b359:
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    iVar1 = FUN_004426c0(uVar2,L"Policy");
    if (iVar1 != 0) {
      iVar1 = FUN_004426c0(uVar2,L"Windows");
      if (iVar1 != 0) {
        iVar1 = FUN_004426c0(*(undefined8 *)(param_2 + 0x10),&LAB_0080b382);
        if ((iVar1 != 0) || (*(longlong *)(param_2 + 8) != 0x14)) goto LAB_0080b359;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

