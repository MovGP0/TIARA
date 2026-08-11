/* Ghidra address: 0081abd0 */
/* Ghidra symbol: FUN_0081abd0 */


int FUN_0081abd0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_38 [4];
  int local_34;
  int local_20;
  int local_1c;
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x4d2) == '\x02') {
    local_20 = FUN_007fd7d0(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10));
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x98);
    local_20 = local_20 + iVar1 / 2;
    local_1c = FUN_007fd800(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),
                            (longlong)iVar1 % 2 & 0xffffffff);
    local_1c = local_1c + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x9c) / 2;
    uVar2 = FUN_00809b30(DAT_02012670,&local_20,0);
    FUN_00807850(uVar2,local_38);
    iVar1 = FUN_007fd800(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10));
    if (iVar1 < local_34) {
      iVar1 = FUN_007fd800(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10));
      local_34 = local_34 - iVar1;
    }
    else {
      local_34 = 0;
    }
  }
  else {
    local_34 = 0;
  }
  return local_34;
}

