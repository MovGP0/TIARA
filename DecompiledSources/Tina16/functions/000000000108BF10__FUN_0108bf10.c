/* Ghidra address: 0108bf10 */
/* Ghidra symbol: FUN_0108bf10 */


void FUN_0108bf10(longlong param_1,undefined8 param_2,double param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res10 [3];
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined1 local_70 [24];
  uint local_58;
  
  local_88 = 0;
  local_80[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_70,&DAT_010571b8);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x4d18) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x4d18) + -8);
  }
  if (lVar3 == 0) {
    FUN_0041ddd0(local_80,PTR_PTR_02005560);
    FUN_0044d490(&PTR_FUN_004334c0,1,local_80[0]);
    FUN_004134c0();
  }
  if ((*(int *)(param_1 + 0xad8) == 0x2000) || (*(int *)(param_1 + 0xad8) == 0x4000)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x4d18) != 0) {
    iVar7 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x4d18) + -8);
  }
  iVar6 = 0;
  if (iVar7 - 1U < 0x80000000) {
    do {
      cVar2 = FUN_010637f0(*(undefined8 *)(param_1 + 0xbf0),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x4d18) + (longlong)iVar6 * 4),
                           local_70);
      if ((cVar2 != '\0') &&
         (((uVar4 = FUN_0040c770(param_3 / 1000000.0), local_58 == uVar4 && (!bVar1)) || (bVar1))))
      goto LAB_0108c06a;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_0041ddd0(&local_88,PTR_PTR_020029c0);
  uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_88);
  FUN_004134c0(uVar5);
LAB_0108c06a:
  FUN_00414560(&local_88,2);
  FUN_00417740(local_70,&DAT_010571b8);
  FUN_00414480(local_res10);
  return;
}

