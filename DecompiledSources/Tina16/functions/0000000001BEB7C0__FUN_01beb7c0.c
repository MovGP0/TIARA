/* Ghidra address: 01beb7c0 */
/* Ghidra symbol: FUN_01beb7c0 */


void FUN_01beb7c0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)PTR_DAT_020029b8 + 0xc0))
                    (*(longlong **)PTR_DAT_020029b8,param_1);
  if (iVar2 != -1) {
    (**(code **)(**(longlong **)PTR_DAT_020029b8 + 0x98))(*(longlong **)PTR_DAT_020029b8,iVar2);
  }
  iVar2 = (**(code **)(**(longlong **)PTR_DAT_020029b8 + 0x28))(*(longlong **)PTR_DAT_020029b8);
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)PTR_DAT_020029b8;
    *(undefined8 *)PTR_DAT_020029b8 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

