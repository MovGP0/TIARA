/* Ghidra address: 006927d0 */
/* Ghidra symbol: FUN_006927d0 */


undefined1 FUN_006927d0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 == 0) || (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_0066f8b0), cVar1 == '\0')) {
    lVar3 = FUN_00786090(param_1);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = FUN_00786090(param_1);
      uVar2 = thunk_FUN_04118143(uVar4,0xfffffff0);
      uVar5 = (uVar2 & DAT_01dfbc8c) == DAT_01dfbc8c;
      if ((uVar2 & DAT_01dfbc90) == DAT_01dfbc90) {
        uVar5 = 2;
      }
      if ((uVar2 & DAT_01dfbc94) == DAT_01dfbc94) {
        uVar5 = 3;
      }
      if ((uVar2 & DAT_01dfbc98) == DAT_01dfbc98) {
        uVar5 = 4;
      }
    }
  }
  else {
    uVar5 = *(undefined1 *)(lVar3 + 0x54a);
  }
  return uVar5;
}

