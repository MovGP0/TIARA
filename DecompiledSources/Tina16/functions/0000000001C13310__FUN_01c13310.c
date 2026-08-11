/* Ghidra address: 01c13310 */
/* Ghidra symbol: FUN_01c13310 */


void FUN_01c13310(longlong *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  iVar1 = (**(code **)(*param_1 + 0x280))(param_1);
  local_30 = CONCAT44(local_30._4_4_,(int)local_30 - iVar1);
  if (param_3 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x290))(param_1);
    if ((char)uVar3 == '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_01c13363;
    }
  }
  uVar2 = 0;
LAB_01c13363:
  FUN_01c13140(auStack_58,&local_38,uVar2);
  local_38 = CONCAT44(local_38._4_4_,(int)local_30);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x280))(param_1);
  local_30 = CONCAT44(local_30._4_4_,(int)local_30 + (int)plVar4);
  if ((param_3 == '\0') && (plVar4 = param_1, (char)param_1[0x6d] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  }
  FUN_01c13140(auStack_58,&local_38,uVar2);
  return;
}

