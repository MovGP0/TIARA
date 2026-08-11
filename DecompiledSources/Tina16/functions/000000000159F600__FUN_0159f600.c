/* Ghidra address: 0159f600 */
/* Ghidra symbol: FUN_0159f600 */


undefined8 FUN_0159f600(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((*(int *)(lVar1 + 0x30) != 0) && (param_2 != 0)) {
      FUN_01596930(param_2,(ulonglong)*(uint *)(lVar1 + 0x34) + *(longlong *)(lVar1 + 0x38),
                   *(int *)(lVar1 + 0x30) - *(int *)(lVar1 + 0x34));
      FUN_01596930((param_2 + (ulonglong)*(uint *)(lVar1 + 0x30)) -
                   (ulonglong)*(uint *)(lVar1 + 0x34),*(undefined8 *)(lVar1 + 0x38),
                   *(undefined4 *)(lVar1 + 0x34));
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + 0x30);
    }
    uVar2 = 0;
  }
  return uVar2;
}

