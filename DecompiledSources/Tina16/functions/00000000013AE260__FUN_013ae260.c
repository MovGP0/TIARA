/* Ghidra address: 013ae260 */
/* Ghidra symbol: FUN_013ae260 */


ulonglong FUN_013ae260(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  cVar1 = FUN_0198a580(param_1);
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,cVar1 == '\x04');
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar1 = FUN_0199c7c0(param_1);
    if (((((((((cVar1 == '\0') && (sVar2 != 0x3f)) && (sVar2 != 0x6a)) &&
            (((sVar2 != 0x3d && (sVar2 != 0x65)) &&
             ((sVar2 != 100 && ((sVar2 != 0x3e && (sVar2 != 0x66)))))))) && (sVar2 != 0xa4)) &&
          (((((sVar2 != 0x3c && (sVar2 != 0x460)) && (sVar2 != 0x461)) &&
            ((sVar2 != 0xaa && (sVar2 != 0xab)))) && (sVar2 != 0xac)))) &&
         (((sVar2 != 0xbb9 && (sVar2 != 0xbba)) &&
          (((sVar2 != 0x8a && (((sVar2 != 0x8b && (sVar2 != 0x86)) && (sVar2 != 0x87)))) &&
           (((sVar2 != 0xa3 && (sVar2 != 0xa5)) && (sVar2 != 0xad)))))))) &&
        (((sVar2 != 0xa8 && (sVar2 != 700)) &&
         ((sVar2 != 0x2bd && (((sVar2 != 0xa6 && (sVar2 != 0xa7)) && (sVar2 != 0x3a)))))))) &&
       (((sVar2 != 0x27 && (sVar2 != 0x90)) && (sVar2 != 0x82)))) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}

