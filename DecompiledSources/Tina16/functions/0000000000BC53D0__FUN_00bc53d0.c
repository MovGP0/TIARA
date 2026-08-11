/* Ghidra address: 00bc53d0 */
/* Ghidra symbol: FUN_00bc53d0 */


void FUN_00bc53d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_004167d0(&local_20,*(undefined8 *)(param_1 + 0x188));
  iVar1 = FUN_00416db0(param_2,local_20);
  if ((iVar1 != 0) || (*(char *)(param_1 + 0x178) == '\0')) {
    *(undefined1 *)(param_1 + 0x178) = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x188));
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (param_2 != 0) {
      iVar1 = 0;
      if (param_2 != 0) {
        iVar1 = *(int *)(param_2 + -4);
      }
      uVar2 = FUN_004095c0((longlong)((iVar1 + 1) * 2));
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      FUN_00416dc0(&local_28,param_2,1,iVar1);
      FUN_00bc3b20(uVar2,local_28);
      FUN_00bc5ca0(param_1);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

