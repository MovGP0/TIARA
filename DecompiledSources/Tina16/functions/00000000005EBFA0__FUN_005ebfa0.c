/* Ghidra address: 005ebfa0 */
/* Ghidra symbol: FUN_005ebfa0 */


undefined4 FUN_005ebfa0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  uVar2 = FUN_00416740(param_2);
  uVar1 = thunk_FUN_0411a6ba(uVar2,*(undefined8 *)(param_1 + 0x10),&local_20);
  uVar1 = FUN_005ea620(param_1,uVar1);
  if ((char)uVar1 != '\0') {
    FUN_005ea670(param_1,local_20);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return uVar1;
}

