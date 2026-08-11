/* Ghidra address: 0089dbf0 */
/* Ghidra symbol: FUN_0089dbf0 */


undefined8 FUN_0089dbf0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x60))
                      (*(longlong **)PTR_DAT_020050b0,*(undefined4 *)(param_1 + 8));
    FUN_00878180(param_2,uVar1);
  }
  else {
    FUN_00419260(param_2,&DAT_0086e978,1,0x10);
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x58))
                        (*(longlong **)PTR_DAT_020050b0,
                         *(undefined2 *)(param_1 + 0xe + (longlong)iVar2 * 2));
      FUN_00874e80(uVar1,param_2,iVar2 * 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
  }
  return param_2;
}

