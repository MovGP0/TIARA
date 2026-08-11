/* Ghidra address: 01b5e6f0 */
/* Ghidra symbol: FUN_01b5e6f0 */


undefined8 FUN_01b5e6f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  cVar1 = FUN_0153b1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  if (cVar1 != '\0') {
    cVar1 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
    if (cVar1 != '\0') {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x5b) = 1;
      uVar2 = FUN_0065b870(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x50) + 0x188 +
                            (longlong)*(int *)(param_1 + 0x18) * 8));
      thunk_FUN_041b2403(uVar2,0x534,0,0);
    }
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  return uVar3;
}

