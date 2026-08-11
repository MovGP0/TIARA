/* Ghidra address: 0053c240 */
/* Ghidra symbol: FUN_0053c240 */


undefined1 FUN_0053c240(longlong *param_1,byte *param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  if (param_4 != '\0') {
    cVar1 = FUN_005360d0(param_1);
    if (cVar1 != '\0') {
      FUN_00536400(&local_38);
      FUN_00417c40(param_3,&local_38,&DAT_00527bf8);
      if (param_2 != (byte *)0x0) {
        iVar2 = FUN_00534f00(param_2);
        if (iVar2 < 0) {
          lVar3 = FUN_00535dd0(&DAT_005358f8,1,-iVar2,param_2);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = lVar3 + 0x30;
          }
          FUN_0041b840(param_3 + 1,lVar3);
        }
        *param_3 = param_2;
      }
      local_59 = 1;
      goto LAB_0053c3f5;
    }
  }
  if ((param_4 == '\0') && (*param_1 == 0)) {
    local_59 = 0;
  }
  else if ((byte *)*param_1 == param_2) {
    FUN_00417c40(param_3,param_1,&DAT_00527bf8);
    local_59 = 1;
  }
  else if (param_2 == (byte *)0x0) {
    local_59 = 0;
  }
  else if (param_2 == &DAT_00527bf8) {
    FUN_00560040(&local_58,param_1);
    FUN_00417c40(param_3,&local_58,&DAT_00527bf8);
    local_59 = 1;
  }
  else {
    uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
    local_59 = (*(code *)(&PTR_FUN_01dd8090)
                         [(ulonglong)*(byte *)*param_1 * 0x17 + (ulonglong)*param_2])
                         (param_1,param_2,uVar4);
  }
LAB_0053c3f5:
  FUN_00417840(&local_58,&DAT_00527bf8,2);
  return local_59;
}

