/* Ghidra address: 00538080 */
/* Ghidra symbol: FUN_00538080 */


void FUN_00538080(longlong param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  *param_3 = param_2;
  FUN_0041b840(param_3 + 1,PTR_PTR_01dd79f8);
  iVar1 = FUN_00534f00(param_2);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      local_28 = param_2;
      lVar3 = FUN_00535cd0(&DAT_005358f8,1,param_1,-iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar3 + 0x30;
      }
      FUN_0041b840(param_3 + 1,lVar3);
    }
    else {
      param_3[2] = 0;
      param_3[3] = 0;
      if (param_1 != 0) {
        FUN_00409a70(param_1,param_3 + 2,(longlong)iVar1);
      }
      if (((param_2 != (char *)0x0) && (*param_2 == '\a')) && (param_3[2] != 0)) {
        uVar2 = FUN_00538060(auStack_48,*(undefined8 *)param_3[2]);
        *param_3 = uVar2;
      }
    }
  }
  return;
}

