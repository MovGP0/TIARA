/* Ghidra address: 01ac7fd0 */
/* Ghidra symbol: FUN_01ac7fd0 */


longlong FUN_01ac7fd0(undefined8 param_1,undefined2 param_2,undefined2 param_3,double param_4,
                     double param_5,uint param_6,ulonglong param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  
  FUN_00414610(param_7);
  lVar1 = FUN_00409570((longlong)(int)(param_6 * 2));
  uVar6 = param_6;
  FUN_01ac61f0(param_1,lVar1,param_3,param_2,param_5,param_4,param_6);
  uVar5 = param_7;
  lVar2 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,9,1,param_7);
  FUN_01cc2930(*(undefined8 *)(lVar2 + 8),0,0,0,uVar5 & 0xffffffffffffff00,0,uVar6 & 0xffffff00,0);
  dVar4 = (double)(int)param_6;
  iVar3 = 0;
  if (-1 < (int)(param_6 - 1)) {
    do {
      FUN_01cc5620(lVar2,param_5 + (double)iVar3 * ((param_4 - param_5) / dVar4));
      FUN_01cc5680(lVar2,(double)*(ushort *)(lVar1 + (longlong)iVar3 * 2));
      iVar3 = iVar3 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  FUN_01cc5620(lVar2,param_4);
  FUN_01cc5680(lVar2,0);
  FUN_004095f0(lVar1);
  FUN_00414480(&param_7);
  return lVar2;
}

