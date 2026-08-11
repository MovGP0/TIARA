/* Ghidra address: 00b30d20 */
/* Ghidra symbol: FUN_00b30d20 */


void FUN_00b30d20(longlong param_1,undefined2 param_2,longlong param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a [5];
  
  local_28 = 0;
  puVar2 = (undefined2 *)FUN_00418560(0x10,&DAT_00b30290);
  local_1a[0] = 0;
  local_1c = 0;
  local_1d = 0;
  local_1e = 0;
  uVar3 = FUN_00415ab0(param_3);
  FUN_00409a70(uVar3,local_1a,2);
  FUN_00409a70(param_3 + 2,&local_1c,2);
  FUN_00409a70(param_3 + 4,&local_1d,1);
  FUN_00409a70(param_3 + 5,&local_1e,1);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  FUN_00415ad0(&local_28,param_3,0xb,iVar1 + -10);
  *puVar2 = param_2;
  puVar2[1] = local_1a[0];
  puVar2[2] = local_1c;
  *(undefined1 *)(puVar2 + 3) = local_1d;
  *(undefined1 *)((longlong)puVar2 + 7) = local_1e;
  FUN_00414bf0(puVar2 + 4,local_28);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),puVar2);
  FUN_004144d0(&local_28);
  return;
}

