/* Ghidra address: 0181f4f0 */
/* Ghidra symbol: FUN_0181f4f0 */


undefined1 FUN_0181f4f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_21 = 0;
  FUN_0181f230(*(undefined8 *)(param_1 + 0x50),param_2 + 0x18,param_2 + 0x28);
  FUN_00414b50(param_1 + 0x38,*(undefined8 *)(param_2 + 0x18));
  if ((*(longlong *)(param_2 + 0x18) == 0) || (**(short **)(param_2 + 0x18) == 0x2f)) {
    local_21 = 1;
  }
  else {
    iVar2 = FUN_00414cb0(*(undefined8 *)(param_2 + 0x18));
    if (*(short *)(*(longlong *)(param_2 + 0x18) + -2 + (longlong)iVar2 * 2) == 0x2f) {
      FUN_004169f0(param_2 + 0x18,iVar2 + -1);
    }
    else {
      iVar2 = FUN_00414cb0(*(undefined8 *)(param_2 + 0x28));
      if ((iVar2 < 1) ||
         (*(short *)(*(longlong *)(param_2 + 0x28) + -2 + (longlong)iVar2 * 2) != 0x2f)) {
        while( true ) {
          uVar3 = FUN_00410e60(&DAT_0181ce38,1);
          cVar1 = FUN_0181f4f0(param_1,uVar3);
          if (cVar1 != '\0') break;
          FUN_0181e430(param_2,uVar3);
        }
        FUN_00410f20(uVar3);
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_00416ba0(&local_20,&DAT_0181f6a4,*(undefined8 *)(param_2 + 0x18));
          iVar2 = FUN_0043e6d0(*(undefined8 *)(param_1 + 0x38),local_20);
          if (iVar2 != 0) {
            FUN_0181f120(*(undefined8 *)(param_1 + 0x50));
          }
        }
      }
      else {
        FUN_004169f0(param_2 + 0x28,iVar2 + -1);
      }
    }
  }
  FUN_00414480(&local_20);
  return local_21;
}

