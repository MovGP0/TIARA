/* Ghidra address: 01c233d0 */
/* Ghidra symbol: FUN_01c233d0 */


void FUN_01c233d0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((-1 < param_2) && (iVar2 = FUN_01c232b0(param_1), param_2 < iVar2)) {
    FUN_004aeac0(*(undefined8 *)(param_1 + 0x4a0),param_2);
    return;
  }
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"[Error] @ TPairControl.getsPin: out of bounds");
  FUN_004134c0(uVar1);
  return;
}

