/* Ghidra address: 00710380 */
/* Ghidra symbol: FUN_00710380 */


void FUN_00710380(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  FUN_00785c20(param_1,param_2);
  uVar2 = (ulonglong)*(ushort *)(param_2 + 10);
  if (uVar2 < 8) {
    if (uVar2 == 7) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x260))(*(longlong **)(param_1 + 0x10))
      ;
      *(undefined4 *)(param_1 + 0xb8) = uVar1;
      *(undefined1 *)(param_1 + 0x98) = 1;
      FUN_00710340(param_1);
      goto LAB_0071040f;
    }
    if ((uVar2 != 1) && (1 < uVar2 - 3)) goto LAB_0071040f;
  }
  else {
    if (uVar2 == 8) {
      *(undefined1 *)(param_1 + 0x98) = 0;
      FUN_00710340(param_1);
      goto LAB_0071040f;
    }
    if (uVar2 != 9) goto LAB_0071040f;
  }
  FUN_00710340(param_1);
LAB_0071040f:
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

