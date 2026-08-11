/* Ghidra address: 018ad1e0 */
/* Ghidra symbol: FUN_018ad1e0 */


void FUN_018ad1e0(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int local_38 [6];
  
  iVar2 = FUN_006d5120(param_1[0xad]);
  if (0 < iVar2) {
    lVar1 = param_1[0xad];
    uVar3 = FUN_006d5120(lVar1);
    FUN_006d6170(lVar1,local_38,uVar3);
    if ((((local_38[0] + 8 <= param_5) && (param_5 <= local_38[0] + 0x12)) && (5 < param_6)) &&
       ((param_6 < 0x13 && (param_3 == '\0')))) {
      uVar3 = FUN_006d5120(param_1[0xad]);
      (**(code **)(*param_1 + 0x2f0))(param_1,uVar3);
    }
  }
  return;
}

