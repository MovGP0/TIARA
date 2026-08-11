/* Ghidra address: 00b11d60 */
/* Ghidra symbol: FUN_00b11d60 */


void FUN_00b11d60(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (param_2 == 0) goto code_r0x00b11e15;
  FUN_00468530(&local_30,param_3 - *(int *)(param_1 + 0x4c0),0xfffffffffffffffc);
  lVar2 = FUN_00b13190(*(undefined8 *)(param_1 + 0x600),&local_30,0);
  if (lVar2 == 0) {
LAB_00b11df4:
    (**(code **)(*param_4 + 0x90))(param_4);
  }
  else {
    cVar1 = FUN_00b13860(lVar2);
    if (cVar1 == '\0') goto LAB_00b11df4;
    uVar3 = FUN_00b13890(lVar2);
    (**(code **)(*param_4 + 0x10))(param_4,uVar3);
  }
  FUN_00b11e50(param_1,param_4,0);
code_r0x00b11e15:
  FUN_00460ba0(&local_30);
  return;
}

