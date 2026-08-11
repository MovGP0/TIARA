/* Ghidra address: 01966e40 */
/* Ghidra symbol: FUN_01966e40 */


void FUN_01966e40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    uVar1 = (**(code **)(*param_2 + 0x18))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x18));
    *(undefined4 *)(param_1 + 0x2c0) = uVar1;
    *(undefined1 *)(param_1 + 0x2d0) = 0;
  }
  return;
}

