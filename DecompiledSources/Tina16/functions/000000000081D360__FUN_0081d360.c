/* Ghidra address: 0081d360 */
/* Ghidra symbol: FUN_0081d360 */


void FUN_0081d360(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_00786090(param_1);
  iVar2 = FUN_007f9220(uVar3);
  if (iVar2 != 0) {
    lVar4 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
    lVar5 = FUN_00786090(param_1);
    if (lVar4 != lVar5) {
      cVar1 = FUN_00818440(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x60))(param_1);
      }
    }
  }
  if (param_1[0x17] == 0) {
    if (*(char *)(param_1[2] + 0x4d6) == '\x01') {
      FUN_00785c20(param_1,param_2);
      uVar3 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
      thunk_FUN_041b2403(uVar3,0x52c,0,0);
      uVar3 = FUN_00786090(param_1);
      iVar2 = FUN_007f9220(uVar3);
      if (iVar2 != 0) {
        cVar1 = FUN_00818440(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x60))(param_1);
        }
      }
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  else {
    FUN_00785c20(param_1,param_2);
    FUN_00818770(param_1,1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

