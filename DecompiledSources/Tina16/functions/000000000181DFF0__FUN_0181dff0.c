/* Ghidra address: 0181dff0 */
/* Ghidra symbol: FUN_0181dff0 */


undefined8 FUN_0181dff0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_30 = param_1;
  local_28 = param_2;
  FUN_00414ad0(param_1,param_2);
  iVar2 = FUN_00414cb0(local_28);
  if (0 < iVar2) {
    do {
      cVar1 = FUN_0043e100(*(undefined2 *)(local_28 + -2 + (longlong)iVar2 * 2),&DAT_0181e0f8);
      if (cVar1 != '\0') {
        if (*(short *)(local_28 + -2 + (longlong)iVar2 * 2) == 0x26) {
          FUN_00416dc0(&local_20,local_28,iVar2 + 1,5);
          iVar3 = FUN_00416db0(local_20,L"quot;");
          if (iVar3 == 0) {
            FUN_00416e20(local_30,iVar2,6);
            FUN_00416ea0(L"&#34;",local_30,iVar2);
          }
        }
        else {
          FUN_0181df10(auStack_58,local_30,iVar2);
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_20);
  return local_30;
}

