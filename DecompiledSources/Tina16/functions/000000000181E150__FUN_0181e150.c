/* Ghidra address: 0181e150 */
/* Ghidra symbol: FUN_0181e150 */


longlong * FUN_0181e150(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  FUN_00414ad0(param_1,param_2);
  iVar5 = 1;
  iVar2 = FUN_00414cb0(param_2);
  if (1 < iVar2) {
    do {
      if (*(short *)(*param_1 + -2 + (longlong)iVar5 * 2) == 0x26) {
        iVar3 = iVar5 + 3;
        if ((iVar2 < iVar3) || (*(short *)(*param_1 + -2 + (longlong)(iVar5 + 1) * 2) != 0x23)) {
          FUN_00416dc0(&local_38,*param_1,iVar5 + 1,5);
          iVar3 = FUN_00416db0(local_38,L"quot;");
          if (iVar3 == 0) {
            FUN_00416e20(param_1,iVar5,5);
            lVar4 = FUN_00414de0(param_1);
            *(undefined2 *)(lVar4 + -2 + (longlong)iVar5 * 2) = 0x22;
            iVar2 = iVar2 + -5;
          }
        }
        else {
          while (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) != 0x3b) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 - iVar5;
          FUN_00416dc0(&local_30,*param_1,iVar5 + 2,iVar3 + -2);
          uVar1 = FUN_0043fc00(local_30);
          FUN_00416e20(param_1,iVar5,iVar3);
          lVar4 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar4 + -2 + (longlong)iVar5 * 2) = uVar1;
          iVar2 = iVar2 - iVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  FUN_00414560(&local_38,2);
  return param_1;
}

