/* Ghidra address: 00ddf9b0 */
/* Ghidra symbol: FUN_00ddf9b0 */


undefined1 FUN_00ddf9b0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    uVar3 = FUN_00414520(local_20);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x18))
                      (*(longlong **)(param_1 + 0x4d0),param_2,uVar3);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00ddfa0b;
    }
  }
  uVar1 = 0;
LAB_00ddfa0b:
  FUN_00414520(local_20);
  return uVar1;
}

