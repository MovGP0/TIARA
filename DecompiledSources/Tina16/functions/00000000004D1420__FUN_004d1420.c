/* Ghidra address: 004d1420 */
/* Ghidra symbol: FUN_004d1420 */


void FUN_004d1420(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 *local_20;
  
  local_40 = auStack_68;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  local_20 = (undefined8 *)FUN_00418560(0x28,&DAT_00483468);
  *local_20 = param_1;
  local_20[4] = 0;
  local_20[1] = local_30;
  local_20[2] = uStack_28;
  FUN_004d17e0(&PTR_FUN_00483698,local_20,1,0);
  lVar1 = FUN_004d11f0();
  if (*(int *)PTR_DAT_02005bd8 == *(int *)(lVar1 + 8)) {
    FUN_00418590(local_20,&DAT_00483468);
  }
  return;
}

