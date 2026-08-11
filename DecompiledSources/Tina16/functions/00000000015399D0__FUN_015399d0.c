/* Ghidra address: 015399d0 */
/* Ghidra symbol: FUN_015399d0 */


ulonglong FUN_015399d0(longlong *param_1)

{
  short sVar1;
  char *pcVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_1 != (longlong *)0x0) {
    sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((sVar1 == 0xf) || (sVar1 == 0x10)) || (sVar1 == 0xd9)) || (sVar1 == 0xda)) {
      pcVar2 = (char *)FUN_01cfde70(param_1,6,0,&local_19,&local_1a,&local_1b);
      uVar3 = CONCAT71(uVar4,*pcVar2 == '\0');
    }
  }
  return uVar3 & 0xffffffff;
}

