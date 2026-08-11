/* Ghidra address: 009f21c0 */
/* Ghidra symbol: FUN_009f21c0 */


ulonglong FUN_009f21c0(undefined8 param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  if ((byte)(param_5 - 0x30) < 10) {
    uVar5 = (((((param_2 & 0xff) - 0x81) * 10 + (param_3 & 0xff) + -0x30) * 0x7e + (param_4 & 0xff)
             + -0x81) * 10 + (uint)param_5) - 0x30;
    uVar2 = (ushort)(uVar5 >> 0x10);
    if (uVar5 < 0x99fc) {
      uVar6 = 0;
      iVar7 = 0xc1;
      do {
        uVar1 = (ulonglong)(uint)((int)uVar6 + iVar7) / 2;
        iVar4 = (int)uVar1;
        iVar3 = iVar4 * 2;
        if (*(int *)(PTR_DAT_020051d0 + (ulonglong)(iVar3 + 1) * 4) < (int)uVar5) {
          if ((int)uVar5 < *(int *)(PTR_DAT_020051d0 + (ulonglong)(iVar3 + 2) * 4)) {
            return 0xfffd;
          }
          uVar6 = (ulonglong)(byte)((char)uVar1 + 1);
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
      } while ((byte)uVar6 < (byte)iVar7);
      uVar6 = (ulonglong)CONCAT22(uVar2,(short)uVar5 + *(short *)(PTR_DAT_02002818 + uVar6 * 4));
    }
    else {
      uVar6 = CONCAT62((uint6)uVar2,0xfffd);
    }
  }
  else {
    uVar6 = 0xfffd;
  }
  return uVar6;
}

