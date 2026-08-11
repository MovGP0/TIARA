/* Ghidra address: 01143830 */
/* Ghidra symbol: FUN_01143830 */


longlong FUN_01143830(byte param_1,byte param_2,longlong param_3,ulonglong param_4,
                     undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res20;
  ulonglong uVar7;
  double local_48;
  double local_40;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  uVar7 = local_res20;
  lVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,8,0,local_res20);
  FUN_01cc3760(*(undefined8 *)(lVar1 + 8),param_5);
  FUN_01cc2930(*(undefined8 *)(lVar1 + 8),0,0,1,uVar7 & 0xffffffffffffff00,0,1,0);
  iVar3 = 1 << (param_2 & 0x1f);
  iVar2 = 0;
  iVar4 = param_1 + 1;
  do {
    local_48 = *(double *)(param_3 + (longlong)iVar2 * 0x10) / (double)iVar3;
    local_40 = *(double *)(param_3 + 8 + (longlong)iVar2 * 0x10) / (double)iVar3;
    FUN_01cc5240(lVar1,(double)iVar2);
    uVar5 = FUN_00c44590(&local_48);
    uVar6 = FUN_00c445d0(&local_48);
    FUN_01cc5550(lVar1,uVar5,uVar6);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00414560(&local_res20,2);
  return lVar1;
}

