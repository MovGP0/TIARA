/* Ghidra address: 0177d7f0 */
/* Ghidra symbol: FUN_0177d7f0 */


void FUN_0177d7f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x410) != '\0') {
    *(undefined8 *)PTR_DAT_02004080 = *(undefined8 *)(param_1 + 0x420);
  }
  if (*(char *)(param_1 + 0x411) != '\0') {
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),0x410);
    thunk_FUN_03ab0e43(uVar1,5);
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),0x410);
    thunk_FUN_04154efc(uVar1,0xffffffff);
    uVar1 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),0x410);
    thunk_FUN_041cc6e2(uVar1,0,0,0,200,0x1e,6);
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x418));
    thunk_FUN_040f0ed5(*(undefined8 *)(param_1 + 0x298),0x410,uVar1);
    if (*(char *)(param_1 + 0x412) == '\0') {
      thunk_FUN_040bb0ee(*(undefined8 *)(param_1 + 0x298),0x410,0);
    }
    else {
      thunk_FUN_040bb0ee(*(undefined8 *)(param_1 + 0x298),0x410,1);
    }
  }
  return;
}

