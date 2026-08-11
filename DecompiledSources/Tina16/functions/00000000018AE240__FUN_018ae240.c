/* Ghidra address: 018ae240 */
/* Ghidra symbol: FUN_018ae240 */


void FUN_018ae240(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = *(undefined8 *)(param_1 + 0x6f0);
  local_38 = *(undefined8 *)(param_1 + 0x6e0);
  local_30 = *(undefined8 *)(param_1 + 0x6e8);
  local_28 = *(undefined8 *)(param_1 + 2000);
  local_20 = *(undefined8 *)(param_1 + 0x7c8);
  local_18 = *(undefined8 *)(param_1 + 0x6f8);
  local_10 = *(undefined8 *)(param_1 + 0x700);
  if (*(char *)(*(longlong *)(param_1 + 0x848) + 0x531) == '\0') {
    uVar2 = FUN_018a9b40(*(longlong *)(param_1 + 0x848));
    if ((int)uVar2 < 1) goto LAB_018ae2f0;
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
LAB_018ae2f0:
    uVar1 = 0;
  }
  FUN_018ae140(auStack_88,&local_40,6,uVar1);
  local_48 = *(undefined8 *)(param_1 + 0x6e0);
  FUN_018ae140(auStack_88,&local_48,0,*(char *)(*(longlong *)(param_1 + 0x848) + 0x531) == '\0');
  local_48 = *(undefined8 *)(param_1 + 0x780);
  if (*(char *)(*(longlong *)(param_1 + 0x848) + 0x531) == '\0') {
    lVar3 = FUN_018af290(param_1);
    if (*(char *)(*(longlong *)(lVar3 + 0x220) + 8) == '\0') goto LAB_018ae387;
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x220) >> 8),1);
  }
  else {
LAB_018ae387:
    uVar1 = 0;
  }
  FUN_018ae140(auStack_88,&local_48,0,uVar1);
  local_60 = *(undefined8 *)(param_1 + 0x7f0);
  local_58 = *(undefined8 *)(param_1 + 0x7f8);
  local_50 = *(undefined8 *)(param_1 + 0x7e8);
  if (*(char *)(*(longlong *)(param_1 + 0x848) + 0x531) == '\0') {
    uVar2 = FUN_018ae0b0(auStack_88);
    if ((char)uVar2 != '\0') {
      uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      goto LAB_018ae3fe;
    }
  }
  uVar1 = 0;
LAB_018ae3fe:
  FUN_018ae140(auStack_88,&local_60,2,uVar1);
  return;
}

