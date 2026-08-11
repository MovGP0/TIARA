/* Ghidra address: 004493d0 */
/* Ghidra symbol: FUN_004493d0 */


longlong * FUN_004493d0(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_230 [512];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2a;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_2);
  local_30 = *(undefined2 *)(param_1 + 0x4e);
  local_2e = *(undefined2 *)(param_1 + 0x4c);
  local_2a = *(undefined2 *)(param_1 + 0x4a);
  if (param_3 < 3) {
    FUN_00414b50(local_20,&PTR_LAB_00449538);
  }
  else {
    FUN_00414b50(local_20,L"yyyy");
  }
  uVar1 = thunk_FUN_04195d02();
  uVar3 = FUN_00416740(local_20[0]);
  iVar2 = thunk_FUN_0412b8ab(uVar1,4,&local_30,uVar3,local_230,0x200);
  if (iVar2 != 0) {
    FUN_00416830(param_2,local_230,0x100);
    if ((param_3 == 1) && (*(short *)*param_2 == 0x30)) {
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      FUN_00416dc0(param_2,*param_2,2,iVar2 + -1);
    }
  }
  FUN_00414480(local_20);
  return param_2;
}

