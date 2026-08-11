/* Ghidra address: 00bac850 */
/* Ghidra symbol: FUN_00bac850 */


longlong * FUN_00bac850(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  uVar2 = FUN_0040c770((double)iVar5 * 1.1);
  FUN_004169f0(param_1,uVar2);
  local_2c = 0;
  iVar5 = 1;
  do {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (iVar3 < iVar5) {
      FUN_004169f0(param_1,local_2c);
      return param_1;
    }
    uVar1 = *(ushort *)(param_2 + -2 + (longlong)iVar5 * 2);
    if (uVar1 < 0x28) {
      if (uVar1 == 0x27) {
        FUN_00bac7a0(auStack_58,L"&apos;");
      }
      else if (uVar1 == 0x22) {
        FUN_00bac7a0(auStack_58,L"&quot;");
      }
      else {
        if (uVar1 != 0x26) goto LAB_00bac931;
        FUN_00bac7a0(auStack_58);
      }
    }
    else if (uVar1 == 0x3c) {
      FUN_00bac7a0(auStack_58,L"&lt;");
    }
    else if (uVar1 == 0x3e) {
      FUN_00bac7a0(auStack_58,L"&gt;");
    }
    else {
LAB_00bac931:
      local_2c = local_2c + 1;
      iVar3 = 0;
      if (*param_1 != 0) {
        iVar3 = *(int *)(*param_1 + -4);
      }
      if (iVar3 < local_2c) {
        FUN_00bac750(auStack_58,0);
      }
      lVar4 = FUN_00414de0(param_1);
      *(undefined2 *)(lVar4 + -2 + (longlong)local_2c * 2) =
           *(undefined2 *)(param_2 + -2 + (longlong)iVar5 * 2);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

