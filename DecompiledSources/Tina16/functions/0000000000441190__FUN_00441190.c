/* Ghidra address: 00441190 */
/* Ghidra symbol: FUN_00441190 */


undefined8 FUN_00441190(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  
  do {
    if ((*(uint *)(param_1 + 0x20) & *(uint *)(param_1 + 0x30)) == 0) {
      thunk_FUN_03b4a9a1(param_1 + 0x44,local_20);
      thunk_FUN_0419adba(local_20,param_1 + 2,param_1);
      *(ulonglong *)(param_1 + 8) =
           CONCAT44(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
      FUN_00416830(param_1 + 0x18,param_1 + 0x5c,0x104);
      return 0;
    }
    iVar1 = thunk_FUN_03c6f61e(*(undefined8 *)(param_1 + 0x28),param_1 + 0x30);
  } while (iVar1 != 0);
  uVar2 = thunk_FUN_03ce33a6();
  return uVar2;
}

