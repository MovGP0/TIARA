/* Ghidra address: 00552470 */
/* Ghidra symbol: FUN_00552470 */


longlong * FUN_00552470(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong local_30;
  
  cVar1 = FUN_005521f0(param_1);
  if (cVar1 == '\0') {
    FUN_00419430(param_2,&DAT_00531510);
  }
  else {
    lVar2 = FUN_00552420(param_1);
    FUN_00419260(param_2,&DAT_00531510,1,*(undefined1 *)(lVar2 + 10));
    local_30 = FUN_00552420(param_1);
    local_30 = local_30 + 0xb;
    lVar2 = FUN_00552420();
    uVar5 = (uint)*(byte *)(lVar2 + 10);
    iVar4 = 0;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        uVar3 = FUN_00545f10(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00551fb0,param_1,&local_30);
        uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0052a8a0);
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar3;
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return param_2;
}

