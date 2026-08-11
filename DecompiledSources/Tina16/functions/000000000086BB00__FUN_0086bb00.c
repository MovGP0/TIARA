/* Ghidra address: 0086bb00 */
/* Ghidra symbol: FUN_0086bb00 */


longlong * FUN_0086bb00(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  lVar2 = 0;
  if (DAT_020127c0 != 0) {
    lVar2 = *(longlong *)(DAT_020127c0 + -8);
  }
  (*(code *)param_1[1])(param_1,local_20,DAT_020127c0,lVar2 + -1);
  FUN_0041b890(param_2,local_20[0],&DAT_0086bc30);
  if (*param_2 == 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_02004518);
    uVar1 = FUN_0044d490(&PTR_FUN_0086bd98,1,local_28);
    FUN_004134c0(uVar1);
  }
  lVar2 = 0;
  if (DAT_020127b8 != 0) {
    lVar2 = *(longlong *)(DAT_020127b8 + -8);
  }
  if (0 < lVar2) {
    FUN_0041b890(&local_30,*param_2,&DAT_0086bc40);
    (*(code *)*param_1)(param_1,local_30);
  }
  FUN_0041b800(&local_30);
  FUN_00414480(&local_28);
  FUN_0041b800(local_20);
  return param_2;
}

