/* Ghidra address: 0129ddb0 */
/* Ghidra symbol: FUN_0129ddb0 */


double FUN_0129ddb0(undefined8 *param_1,double param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double local_70;
  undefined8 local_66;
  double local_46;
  
  puVar3 = &local_66;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)param_1;
  *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)param_1 + 4);
  FUN_004179d0(&local_66,&DAT_01d0ba10);
  local_70 = (1.0 / local_46) / 2.0;
  uVar1 = FUN_0040c840(param_2 / local_70);
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 - 1;
  }
  local_70 = (double)(int)uVar1 * local_70;
  FUN_00417740(&local_66,&DAT_01d0ba10);
  return local_70;
}

