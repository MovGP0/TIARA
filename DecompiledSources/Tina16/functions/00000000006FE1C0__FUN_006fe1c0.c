/* Ghidra address: 006fe1c0 */
/* Ghidra symbol: FUN_006fe1c0 */


void FUN_006fe1c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (((*(char *)(param_1 + 0x4e4) != '\0') &&
      ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 3) != 3)) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 0x78));
    if (cVar1 != '\0') {
      FUN_0064d000(param_1,local_28);
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x78));
      thunk_FUN_03a2fc9d(uVar2,local_28,0xffffffff);
    }
  }
  FUN_00658680(param_1,param_2);
  return;
}

