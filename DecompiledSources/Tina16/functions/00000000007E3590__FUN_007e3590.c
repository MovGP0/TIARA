/* Ghidra address: 007e3590 */
/* Ghidra symbol: FUN_007e3590 */


void FUN_007e3590(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if ((param_4 != '\0') &&
     ((*(longlong *)(param_1 + 0x158) != 0 || (*(longlong *)(param_1 + 0xd8) != 0)))) {
    FUN_007dde90(param_1);
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_007db330);
    if (cVar2 != '\0') {
      FUN_007e72b0(uVar1);
    }
  }
  else {
    FUN_007e3590(*(longlong *)(param_1 + 200),param_1,param_3,0);
  }
  return;
}

