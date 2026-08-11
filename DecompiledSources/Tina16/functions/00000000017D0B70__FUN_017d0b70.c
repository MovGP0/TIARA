/* Ghidra address: 017d0b70 */
/* Ghidra symbol: FUN_017d0b70 */


ulonglong FUN_017d0b70(longlong *param_1)

{
  short sVar1;
  char *pcVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (sVar1 == 0xf) {
LAB_017d0bc7:
    pcVar2 = (char *)FUN_01cfde70(param_1,5,0,&local_19,&local_1a,&local_1b);
    uVar3 = CONCAT71(uVar4,*pcVar2 == '\0');
  }
  else {
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar1 == 0x10) goto LAB_017d0bc7;
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar1 == 0xd9) goto LAB_017d0bc7;
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar1 == 0xda) goto LAB_017d0bc7;
    uVar3 = CONCAT71(uVar4,1);
  }
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar1 != 0xf) {
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar1 != 0x10) {
      sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (sVar1 != 0xd9) {
        sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar1 != 0xda) goto LAB_017d0c7b;
      }
    }
  }
  pcVar2 = (char *)FUN_01cfde70(param_1,6,0,&local_19,&local_1a,&local_1b);
  if (((char)uVar3 == '\0') || (*pcVar2 == '\x03')) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
LAB_017d0c7b:
  return uVar3 & 0xffffffff;
}

