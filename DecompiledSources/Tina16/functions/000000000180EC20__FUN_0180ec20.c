/* Ghidra address: 0180ec20 */
/* Ghidra symbol: FUN_0180ec20 */


undefined8 * FUN_0180ec20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_00414480(param_2);
  iVar3 = 1;
  do {
    iVar2 = FUN_00414cb0(param_3);
    if (iVar2 < iVar3) {
      FUN_00414560(&local_38,4);
      return param_2;
    }
    if (*(char *)(param_1 + 0x78) == '\0') {
      if (*(short *)(param_3 + -2 + (longlong)iVar3 * 2) == 1) {
        iVar2 = FUN_00414cb0(param_3);
        if (iVar3 < iVar2) {
          FUN_00416780(&local_30,*(ushort *)(param_3 + -2 + (longlong)(iVar3 + 1) * 2) + 0x80);
          FUN_00416ad0(param_2,local_30);
          iVar3 = iVar3 + 1;
          goto LAB_0180ed4c;
        }
      }
      FUN_00416780(&local_38,*(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2));
      FUN_00416ad0(param_2,local_38);
    }
    else {
      uVar1 = *(ushort *)(param_3 + -2 + (longlong)iVar3 * 2);
      if (uVar1 < 0x402) {
        FUN_00416780(&local_28,uVar1);
        FUN_00416ad0(param_2,local_28);
      }
      else {
        FUN_00416780(&local_20,uVar1 - 0x80);
        FUN_00416cd0(param_2,3,*param_2,&LAB_0180eda8,local_20);
      }
    }
LAB_0180ed4c:
    iVar3 = iVar3 + 1;
  } while( true );
}

