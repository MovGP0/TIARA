/* Ghidra address: 010a53f0 */
/* Ghidra symbol: FUN_010a53f0 */


undefined1 FUN_010a53f0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0xa2d) != '\0') {
    FUN_0043f750(&local_10,param_2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0xb0))
                      (*(longlong **)(param_1 + 0x9e0),local_10);
    if (iVar2 != -1) {
      uVar1 = 1;
      goto LAB_010a5447;
    }
  }
  uVar1 = 0;
LAB_010a5447:
  FUN_00414480(&local_10);
  return uVar1;
}

