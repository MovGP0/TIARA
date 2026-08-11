/* Ghidra address: 0096f650 */
/* Ghidra symbol: FUN_0096f650 */


void FUN_0096f650(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined1 *)(param_1 + 0x49) = 1;
    uVar1 = FUN_00414520(param_1 + 0x50);
    (**(code **)**(undefined8 **)(param_1 + 0x60))
              (*(undefined8 **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),uVar1,param_1 + 0x4a)
    ;
  }
  return;
}

