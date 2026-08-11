/* Ghidra address: 008455e0 */
/* Ghidra symbol: FUN_008455e0 */


bool FUN_008455e0(longlong param_1,short param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int local_20;
  int local_1c [3];
  
  bVar2 = false;
  if (((*(char *)(*(longlong *)(param_1 + 0xd0) + 0x4e4) == '\x03') ||
      ((param_2 == 0 && (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x4e4) == '\x01')))) ||
     ((param_2 == 1 && (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x4e4) == '\x02')))) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_04032ecf(uVar1,param_2,local_1c,&local_20);
    bVar2 = local_1c[0] != local_20;
  }
  return bVar2;
}

