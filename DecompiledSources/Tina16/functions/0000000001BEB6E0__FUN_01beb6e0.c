/* Ghidra address: 01beb6e0 */
/* Ghidra symbol: FUN_01beb6e0 */


void FUN_01beb6e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(longlong *)PTR_DAT_020029b8 == 0) {
    uVar2 = FUN_004b6930(&PTR_FUN_01bf6028,1);
    *(undefined8 *)PTR_DAT_020029b8 = uVar2;
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_020029b8 + 0xb0))
                    (*(longlong **)PTR_DAT_020029b8,local_20[0]);
  if (iVar1 == -1) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_28);
    (**(code **)(**(longlong **)PTR_DAT_020029b8 + 0x80))
              (*(longlong **)PTR_DAT_020029b8,local_28,param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

