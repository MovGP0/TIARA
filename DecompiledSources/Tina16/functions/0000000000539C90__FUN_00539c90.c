/* Ghidra address: 00539c90 */
/* Ghidra symbol: FUN_00539c90 */


ulonglong FUN_00539c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  iVar1 = *(int *)(param_1 + 2);
  uVar4 = *param_1;
  cVar2 = FUN_00534d20(uVar4);
  if (cVar2 != '\0') {
    cVar2 = FUN_00534d20(param_2);
    if (cVar2 != '\0') {
      uVar7 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      puVar3 = (undefined *)FUN_00534cd0(param_2);
      if (((puVar3 == &DAT_004012e8) || (puVar3 == &DAT_00401320)) || (puVar3 == &DAT_00401358)) {
        uVar8 = 0;
        if (iVar1 != 0) {
          uVar8 = 0xffffffff;
        }
      }
      else {
        uVar8 = (uint)(iVar1 != 0);
      }
      uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170((longlong)(int)uVar8,param_2,uVar4);
      goto LAB_00539d68;
    }
  }
  lVar5 = FUN_00534cd0(uVar4);
  lVar6 = FUN_00534cd0(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar5 == lVar6);
  if (lVar5 == lVar6) {
    uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538170((longlong)iVar1,param_2,uVar4);
  }
LAB_00539d68:
  return uVar7 & 0xffffffff;
}

