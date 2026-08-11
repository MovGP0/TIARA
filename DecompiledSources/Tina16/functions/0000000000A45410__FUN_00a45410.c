/* Ghidra address: 00a45410 */
/* Ghidra symbol: FUN_00a45410 */


void FUN_00a45410(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_00a084a0(&PTR_FUN_00a07bf0,1);
  (**(code **)(*plVar1 + 0xc0))(plVar1,*(undefined8 *)(param_1 + 0x88));
  if ((char)plVar1[0x10] == '\0') {
    if ((char)plVar1[0x13] != '\0') {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    uVar2 = FUN_00a47d90(&PTR_FUN_00a432a0,1,plVar1,*(undefined1 *)(param_1 + 0x90),1);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  else {
    uVar2 = FUN_00a48be0(&PTR_FUN_00a438f8,1,plVar1);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  return;
}

