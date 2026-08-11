/* Ghidra address: 01a80e70 */
/* Ghidra symbol: FUN_01a80e70 */


void FUN_01a80e70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x798);
  uVar3 = *(undefined8 *)(param_1 + 0x780);
  FUN_00498350(local_38,0,0,param_3,param_4);
  FUN_01acf9e0(lVar1,local_38);
  *(undefined8 *)(param_1 + 0x780) = param_2;
  local_40 = FUN_00498310(0,0);
  uVar2 = FUN_01ace140(lVar1,param_1,param_2,&local_40);
  if (*(char *)(lVar1 + 0x108) != '\0') {
    if (*(byte *)(lVar1 + 0xb0) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(lVar1 + 0xb0) & 0x1f) &
              1U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01acfa60(lVar1);
      goto LAB_01a80f20;
    }
  }
  FUN_01acfc60(lVar1);
LAB_01a80f20:
  FUN_01aceb90(lVar1,1);
  *(undefined8 *)(param_1 + 0x780) = uVar3;
  FUN_01a782f0(param_1,local_38);
  FUN_01acf9e0(lVar1,local_38);
  local_40 = FUN_00498310(0,0);
  uVar3 = FUN_01ace140(lVar1,param_1,*(undefined8 *)(param_1 + 0x780),&local_40);
  if (*(char *)(lVar1 + 0x108) != '\0') {
    if (*(byte *)(lVar1 + 0xb0) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(lVar1 + 0xb0) & 0x1f) &
              1U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01acfa60(lVar1);
      return;
    }
  }
  FUN_01acfc60(lVar1);
  return;
}

