/* Ghidra address: 0096eea0 */
/* Ghidra symbol: FUN_0096eea0 */


bool FUN_0096eea0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))(*(longlong **)(param_1 + 0x10));
  if (-1 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),iVar1);
    FUN_00410f20(uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),iVar1);
  }
  return -1 < iVar1;
}

